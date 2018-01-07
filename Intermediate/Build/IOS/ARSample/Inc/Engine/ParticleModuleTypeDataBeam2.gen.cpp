// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataBeam2() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBeamTaperMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBeam2Method();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBeamTargetData();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
// End Cross Module References
	static UEnum* EBeamTaperMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBeamTaperMethod, Z_Construct_UPackage__Script_Engine(), TEXT("EBeamTaperMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBeamTaperMethod(EBeamTaperMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("EBeamTaperMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBeamTaperMethod_CRC() { return 1100441941U; }
	UEnum* Z_Construct_UEnum_Engine_EBeamTaperMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBeamTaperMethod"), 0, Get_Z_Construct_UEnum_Engine_EBeamTaperMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PEBTM_None", (int64)PEBTM_None },
				{ "PEBTM_Full", (int64)PEBTM_Full },
				{ "PEBTM_Partial", (int64)PEBTM_Partial },
				{ "PEBTM_MAX", (int64)PEBTM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "PEBTM_Full.DisplayName", "Full" },
				{ "PEBTM_None.DisplayName", "None" },
				{ "PEBTM_Partial.DisplayName", "Partial" },
				{ "ToolTip", "Beam Tapering Variables." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBeamTaperMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBeamTaperMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EBeam2Method_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBeam2Method, Z_Construct_UPackage__Script_Engine(), TEXT("EBeam2Method"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBeam2Method(EBeam2Method_StaticEnum, TEXT("/Script/Engine"), TEXT("EBeam2Method"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EBeam2Method_CRC() { return 2414354356U; }
	UEnum* Z_Construct_UEnum_Engine_EBeam2Method()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBeam2Method"), 0, Get_Z_Construct_UEnum_Engine_EBeam2Method_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PEB2M_Distance", (int64)PEB2M_Distance },
				{ "PEB2M_Target", (int64)PEB2M_Target },
				{ "PEB2M_Branch", (int64)PEB2M_Branch },
				{ "PEB2M_MAX", (int64)PEB2M_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "PEB2M_Branch.DisplayName", "Branch" },
				{ "PEB2M_Distance.DisplayName", "Distance" },
				{ "PEB2M_Target.DisplayName", "Target" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EBeam2Method",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EBeam2Method",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FBeamTargetData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBeamTargetData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBeamTargetData, Z_Construct_UPackage__Script_Engine(), TEXT("BeamTargetData"), sizeof(FBeamTargetData), Get_Z_Construct_UScriptStruct_FBeamTargetData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBeamTargetData(FBeamTargetData::StaticStruct, TEXT("/Script/Engine"), TEXT("BeamTargetData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBeamTargetData
{
	FScriptStruct_Engine_StaticRegisterNativesFBeamTargetData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BeamTargetData")),new UScriptStruct::TCppStructOps<FBeamTargetData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBeamTargetData;
	UScriptStruct* Z_Construct_UScriptStruct_FBeamTargetData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBeamTargetData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BeamTargetData"), sizeof(FBeamTargetData), Get_Z_Construct_UScriptStruct_FBeamTargetData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "Beam Multi-target Variables." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBeamTargetData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetPercentage_MetaData[] = {
				{ "Category", "BeamTargetData" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "Percentage chance the target will be selected (100 = always)." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "TargetPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBeamTargetData, TargetPercentage), METADATA_PARAMS(NewProp_TargetPercentage_MetaData, ARRAY_COUNT(NewProp_TargetPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetName_MetaData[] = {
				{ "Category", "BeamTargetData" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "Name of the target." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetName = { UE4CodeGen_Private::EPropertyClass::Name, "TargetName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBeamTargetData, TargetName), METADATA_PARAMS(NewProp_TargetName_MetaData, ARRAY_COUNT(NewProp_TargetName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BeamTargetData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBeamTargetData),
				alignof(FBeamTargetData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBeamTargetData_CRC() { return 458939082U; }
	void UParticleModuleTypeDataBeam2::StaticRegisterNativesUParticleModuleTypeDataBeam2()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2_NoRegister()
	{
		return UParticleModuleTypeDataBeam2::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleTypeDataBeam2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Beam Data" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTessellation_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
			};
#endif
			auto NewProp_RenderTessellation_SetBit = [](void* Obj){ ((UParticleModuleTypeDataBeam2*)Obj)->RenderTessellation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderTessellation = { UE4CodeGen_Private::EPropertyClass::Bool, "RenderTessellation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataBeam2), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RenderTessellation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RenderTessellation_MetaData, ARRAY_COUNT(NewProp_RenderTessellation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderLines_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
			};
#endif
			auto NewProp_RenderLines_SetBit = [](void* Obj){ ((UParticleModuleTypeDataBeam2*)Obj)->RenderLines = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderLines = { UE4CodeGen_Private::EPropertyClass::Bool, "RenderLines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataBeam2), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RenderLines_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RenderLines_MetaData, ARRAY_COUNT(NewProp_RenderLines_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderDirectLine_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
			};
#endif
			auto NewProp_RenderDirectLine_SetBit = [](void* Obj){ ((UParticleModuleTypeDataBeam2*)Obj)->RenderDirectLine = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderDirectLine = { UE4CodeGen_Private::EPropertyClass::Bool, "RenderDirectLine", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataBeam2), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RenderDirectLine_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RenderDirectLine_MetaData, ARRAY_COUNT(NewProp_RenderDirectLine_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderGeometry_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "Beam Rendering Variables." },
			};
#endif
			auto NewProp_RenderGeometry_SetBit = [](void* Obj){ ((UParticleModuleTypeDataBeam2*)Obj)->RenderGeometry = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderGeometry = { UE4CodeGen_Private::EPropertyClass::Bool, "RenderGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataBeam2), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RenderGeometry_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RenderGeometry_MetaData, ARRAY_COUNT(NewProp_RenderGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaperScale_MetaData[] = {
				{ "Category", "Taper" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "Tapering scaling\n    This is intended to be either a constant, uniform or a ParticleParam.\n    If a curve is used, 0/1 mapping of source/target... which could be integrated into\n    the taper factor itself, and therefore makes no sense." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaperScale = { UE4CodeGen_Private::EPropertyClass::Struct, "TaperScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TaperScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_TaperScale_MetaData, ARRAY_COUNT(NewProp_TaperScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaperFactor_MetaData[] = {
				{ "Category", "Taper" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "Tapering factor, 0 = source of beam, 1 = target" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaperFactor = { UE4CodeGen_Private::EPropertyClass::Struct, "TaperFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TaperFactor), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_TaperFactor_MetaData, ARRAY_COUNT(NewProp_TaperFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaperMethod_MetaData[] = {
				{ "Category", "Taper" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "Tapering mode - one of the following:\nPEBTM_None              - No tapering is applied\nPEBTM_Full              - Taper the beam relative to source-->target, regardless of current beam length\nPEBTM_Partial   - Taper the beam relative to source-->location, 0=source,1=endpoint" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TaperMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "TaperMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TaperMethod), Z_Construct_UEnum_Engine_EBeamTaperMethod, METADATA_PARAMS(NewProp_TaperMethod_MetaData, ARRAY_COUNT(NewProp_TaperMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
				{ "Category", "Distance" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "The distance along the X-axis to stretch the beam\nDistance is only used if BeamMethod is PEB2M_Distance" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Distance = { UE4CodeGen_Private::EPropertyClass::Struct, "Distance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, Distance), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_Distance_MetaData, ARRAY_COUNT(NewProp_Distance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchParentName_MetaData[] = {
				{ "Category", "Branching" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "The name of the emitter to branch from (if mode is PEB2M_Branch)\nMUST BE IN THE SAME PARTICLE SYSTEM!" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BranchParentName = { UE4CodeGen_Private::EPropertyClass::Name, "BranchParentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, BranchParentName), METADATA_PARAMS(NewProp_BranchParentName_MetaData, ARRAY_COUNT(NewProp_BranchParentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpVectorStepSize_MetaData[] = {
				{ "Category", "Beam" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "The approach to use for determining the Up vector(s) for the beam.\n\n0 indicates that the Up FVector should be calculated at EVERY point in the beam.\n1 indicates a single Up FVector should be determined at the start of the beam and used at every point.\nN indicates an Up FVector should be calculated every N points of the beam and interpolated between them.\n    [NOTE: This mode is currently unsupported.]" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_UpVectorStepSize = { UE4CodeGen_Private::EPropertyClass::Int, "UpVectorStepSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, UpVectorStepSize), METADATA_PARAMS(NewProp_UpVectorStepSize_MetaData, ARRAY_COUNT(NewProp_UpVectorStepSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysOn_MetaData[] = {
				{ "Category", "Beam" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "If true, there will ALWAYS be a beam..." },
			};
#endif
			auto NewProp_bAlwaysOn_SetBit = [](void* Obj){ ((UParticleModuleTypeDataBeam2*)Obj)->bAlwaysOn = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysOn = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysOn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleTypeDataBeam2), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysOn_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysOn_MetaData, ARRAY_COUNT(NewProp_bAlwaysOn_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationPoints_MetaData[] = {
				{ "Category", "Beam" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "Indicates whether the beam should be interpolated.\n    <= 0 --> no\n    >  0 --> yes (and is equal to the number of interpolation steps that should be taken." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationPoints = { UE4CodeGen_Private::EPropertyClass::Int, "InterpolationPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, InterpolationPoints), METADATA_PARAMS(NewProp_InterpolationPoints_MetaData, ARRAY_COUNT(NewProp_InterpolationPoints_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
				{ "Category", "Beam" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "The speed at which the beam should move from source to target when firing up.\n    '0' indicates instantaneous" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Speed = { UE4CodeGen_Private::EPropertyClass::Float, "Speed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, Speed), METADATA_PARAMS(NewProp_Speed_MetaData, ARRAY_COUNT(NewProp_Speed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBeamCount_MetaData[] = {
				{ "Category", "Beam" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "The number of live beams" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxBeamCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxBeamCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, MaxBeamCount), METADATA_PARAMS(NewProp_MaxBeamCount_MetaData, ARRAY_COUNT(NewProp_MaxBeamCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sheets_MetaData[] = {
				{ "Category", "Beam" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "The number of sheets to render" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Sheets = { UE4CodeGen_Private::EPropertyClass::Int, "Sheets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, Sheets), METADATA_PARAMS(NewProp_Sheets_MetaData, ARRAY_COUNT(NewProp_Sheets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTileDistance_MetaData[] = {
				{ "Category", "Beam" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "The distance per texture tile.\n    1st UV set only. 2nd UV set does not Tile." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TextureTileDistance = { UE4CodeGen_Private::EPropertyClass::Float, "TextureTileDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TextureTileDistance), METADATA_PARAMS(NewProp_TextureTileDistance_MetaData, ARRAY_COUNT(NewProp_TextureTileDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureTile_MetaData[] = {
				{ "Category", "Beam" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "The number of times to tile the texture along each beam.\nOverridden by TextureTilingDistance if it is > 0.0.\n    1st UV set only. 2nd UV set does not Tile." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureTile = { UE4CodeGen_Private::EPropertyClass::Int, "TextureTile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, TextureTile), METADATA_PARAMS(NewProp_TextureTile_MetaData, ARRAY_COUNT(NewProp_TextureTile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeamMethod_MetaData[] = {
				{ "Category", "Beam" },
				{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h" },
				{ "ToolTip", "The method with which to form the beam(s). Must be one of the following:\n        PEB2M_Distance  - Use the distance property to emit a beam along the X-axis of the emitter.\n        PEB2M_Target    - Emit a beam from the source to the supplied target.\n        PEB2M_Branch    - Currently unimplemented." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BeamMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "BeamMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataBeam2, BeamMethod), Z_Construct_UEnum_Engine_EBeam2Method, METADATA_PARAMS(NewProp_BeamMethod_MetaData, ARRAY_COUNT(NewProp_BeamMethod_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderTessellation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderLines,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderDirectLine,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TaperScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TaperFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TaperMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Distance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BranchParentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpVectorStepSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysOn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpolationPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Speed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBeamCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sheets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureTileDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureTile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BeamMethod,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleTypeDataBeam2>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleTypeDataBeam2::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleTypeDataBeam2, 2026271080);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleTypeDataBeam2(Z_Construct_UClass_UParticleModuleTypeDataBeam2, &UParticleModuleTypeDataBeam2::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleTypeDataBeam2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataBeam2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
