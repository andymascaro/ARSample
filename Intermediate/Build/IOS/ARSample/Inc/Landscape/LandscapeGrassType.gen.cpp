// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeGrassType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGrassType() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_EGrassScaling();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGrassVariety();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeGrassType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EGrassScaling_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_EGrassScaling, Z_Construct_UPackage__Script_Landscape(), TEXT("EGrassScaling"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGrassScaling(EGrassScaling_StaticEnum, TEXT("/Script/Landscape"), TEXT("EGrassScaling"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_EGrassScaling_CRC() { return 1534810523U; }
	UEnum* Z_Construct_UEnum_Landscape_EGrassScaling()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGrassScaling"), 0, Get_Z_Construct_UEnum_Landscape_EGrassScaling_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGrassScaling::Uniform", (int64)EGrassScaling::Uniform },
				{ "EGrassScaling::Free", (int64)EGrassScaling::Free },
				{ "EGrassScaling::LockXY", (int64)EGrassScaling::LockXY },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Free.ToolTip", "Grass instances will have random X, Y and Z scales." },
				{ "LockXY.ToolTip", "X and Y will be the same random scale, Z will be another" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "Uniform.ToolTip", "Grass instances will have uniform X, Y and Z scales." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EGrassScaling",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EGrassScaling",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FGrassVariety::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FGrassVariety_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGrassVariety, Z_Construct_UPackage__Script_Landscape(), TEXT("GrassVariety"), sizeof(FGrassVariety), Get_Z_Construct_UScriptStruct_FGrassVariety_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGrassVariety(FGrassVariety::StaticStruct, TEXT("/Script/Landscape"), TEXT("GrassVariety"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFGrassVariety
{
	FScriptStruct_Landscape_StaticRegisterNativesFGrassVariety()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GrassVariety")),new UScriptStruct::TCppStructOps<FGrassVariety>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFGrassVariety;
	UScriptStruct* Z_Construct_UScriptStruct_FGrassVariety()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGrassVariety_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GrassVariety"), sizeof(FGrassVariety), Get_Z_Construct_UScriptStruct_FGrassVariety_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGrassVariety>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Whether the grass instances should receive decals." },
			};
#endif
			auto NewProp_bReceivesDecals_SetBit = [](void* Obj){ ((FGrassVariety*)Obj)->bReceivesDecals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals = { UE4CodeGen_Private::EPropertyClass::Bool, "bReceivesDecals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReceivesDecals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReceivesDecals_MetaData, ARRAY_COUNT(NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Lighting channels that the grass will be assigned. Lights with matching channels will affect the grass.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(NewProp_LightingChannels_MetaData, ARRAY_COUNT(NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLandscapeLightmap_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Whether to use the landscape's lightmap when rendering the grass." },
			};
#endif
			auto NewProp_bUseLandscapeLightmap_SetBit = [](void* Obj){ ((FGrassVariety*)Obj)->bUseLandscapeLightmap = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLandscapeLightmap = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLandscapeLightmap", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLandscapeLightmap_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLandscapeLightmap_MetaData, ARRAY_COUNT(NewProp_bUseLandscapeLightmap_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignToSurface_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Whether the grass instances should be tilted to the normal of the landscape (true), or always vertical (false)" },
			};
#endif
			auto NewProp_AlignToSurface_SetBit = [](void* Obj){ ((FGrassVariety*)Obj)->AlignToSurface = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignToSurface = { UE4CodeGen_Private::EPropertyClass::Bool, "AlignToSurface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AlignToSurface_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AlignToSurface_MetaData, ARRAY_COUNT(NewProp_AlignToSurface_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomRotation_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Whether the grass instances should be placed at random rotation (true) or all at the same rotation (false)" },
			};
#endif
			auto NewProp_RandomRotation_SetBit = [](void* Obj){ ((FGrassVariety*)Obj)->RandomRotation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandomRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "RandomRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RandomRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RandomRotation_MetaData, ARRAY_COUNT(NewProp_RandomRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Z Scale property" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleZ = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, ScaleZ), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_ScaleZ_MetaData, ARRAY_COUNT(NewProp_ScaleZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's Y Scale property" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleY = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, ScaleY), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_ScaleY_MetaData, ARRAY_COUNT(NewProp_ScaleY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a grass instance's X Scale property" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleX = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, ScaleX), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_ScaleX_MetaData, ARRAY_COUNT(NewProp_ScaleX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Specifies grass instance scaling type" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scaling = { UE4CodeGen_Private::EPropertyClass::Enum, "Scaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, Scaling), Z_Construct_UEnum_Landscape_EGrassScaling, METADATA_PARAMS(NewProp_Scaling_MetaData, ARRAY_COUNT(NewProp_Scaling_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLOD_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Specifies the smallest LOD that will be used for this component.\nIf -1 (default), the MinLOD of the static mesh asset will be used instead." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinLOD = { UE4CodeGen_Private::EPropertyClass::Int, "MinLOD", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, MinLOD), METADATA_PARAMS(NewProp_MinLOD_MetaData, ARRAY_COUNT(NewProp_MinLOD_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "The distance where instances will have completely faded out when using a PerInstanceFadeAmount material node. 0 disables.\nWhen the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "EndCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, EndCullDistance), METADATA_PARAMS(NewProp_EndCullDistance_MetaData, ARRAY_COUNT(NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "StartCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, StartCullDistance), METADATA_PARAMS(NewProp_StartCullDistance_MetaData, ARRAY_COUNT(NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementJitter_MetaData[] = {
				{ "Category", "Grass" },
				{ "ClampMax", "1" },
				{ "ClampMin", "0" },
				{ "EditCondition", "bUseGrid" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlacementJitter = { UE4CodeGen_Private::EPropertyClass::Float, "PlacementJitter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, PlacementJitter), METADATA_PARAMS(NewProp_PlacementJitter_MetaData, ARRAY_COUNT(NewProp_PlacementJitter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGrid_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "If true, use a jittered grid sequence for placement, otherwise use a halton sequence." },
			};
#endif
			auto NewProp_bUseGrid_SetBit = [](void* Obj){ ((FGrassVariety*)Obj)->bUseGrid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGrid = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGrid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FGrassVariety), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseGrid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseGrid_MetaData, ARRAY_COUNT(NewProp_bUseGrid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassDensity_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
				{ "ToolTip", "Instances per 10 square meters." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrassDensity = { UE4CodeGen_Private::EPropertyClass::Float, "GrassDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, GrassDensity), METADATA_PARAMS(NewProp_GrassDensity_MetaData, ARRAY_COUNT(NewProp_GrassDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassMesh_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrassMesh = { UE4CodeGen_Private::EPropertyClass::Object, "GrassMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FGrassVariety, GrassMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_GrassMesh_MetaData, ARRAY_COUNT(NewProp_GrassMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReceivesDecals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightingChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLandscapeLightmap,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlignToSurface,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scaling_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinLOD,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndCullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartCullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlacementJitter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseGrid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrassDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrassMesh,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"GrassVariety",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FGrassVariety),
				alignof(FGrassVariety),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGrassVariety_CRC() { return 180672890U; }
	void ULandscapeGrassType::StaticRegisterNativesULandscapeGrassType()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeGrassType_NoRegister()
	{
		return ULandscapeGrassType::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeGrassType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LandscapeGrassType.h" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignToSurface_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			auto NewProp_AlignToSurface_SetBit = [](void* Obj){ ((ULandscapeGrassType*)Obj)->AlignToSurface_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignToSurface = { UE4CodeGen_Private::EPropertyClass::Bool, "AlignToSurface", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULandscapeGrassType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AlignToSurface_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AlignToSurface_MetaData, ARRAY_COUNT(NewProp_AlignToSurface_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomRotation_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			auto NewProp_RandomRotation_SetBit = [](void* Obj){ ((ULandscapeGrassType*)Obj)->RandomRotation_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandomRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "RandomRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULandscapeGrassType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RandomRotation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RandomRotation_MetaData, ARRAY_COUNT(NewProp_RandomRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "EndCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, EndCullDistance_DEPRECATED), METADATA_PARAMS(NewProp_EndCullDistance_MetaData, ARRAY_COUNT(NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "StartCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, StartCullDistance_DEPRECATED), METADATA_PARAMS(NewProp_StartCullDistance_MetaData, ARRAY_COUNT(NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlacementJitter_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlacementJitter = { UE4CodeGen_Private::EPropertyClass::Float, "PlacementJitter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, PlacementJitter_DEPRECATED), METADATA_PARAMS(NewProp_PlacementJitter_MetaData, ARRAY_COUNT(NewProp_PlacementJitter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassDensity_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrassDensity = { UE4CodeGen_Private::EPropertyClass::Float, "GrassDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, GrassDensity_DEPRECATED), METADATA_PARAMS(NewProp_GrassDensity_MetaData, ARRAY_COUNT(NewProp_GrassDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrassMesh = { UE4CodeGen_Private::EPropertyClass::Object, "GrassMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, GrassMesh_DEPRECATED), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_GrassMesh_MetaData, ARRAY_COUNT(NewProp_GrassMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrassVarieties_MetaData[] = {
				{ "Category", "Grass" },
				{ "ModuleRelativePath", "Classes/LandscapeGrassType.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GrassVarieties = { UE4CodeGen_Private::EPropertyClass::Array, "GrassVarieties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ULandscapeGrassType, GrassVarieties), METADATA_PARAMS(NewProp_GrassVarieties_MetaData, ARRAY_COUNT(NewProp_GrassVarieties_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrassVarieties_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "GrassVarieties", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FGrassVariety, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlignToSurface,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndCullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartCullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlacementJitter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrassDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrassMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrassVarieties,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GrassVarieties_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeGrassType>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeGrassType::StaticClass,
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
	IMPLEMENT_CLASS(ULandscapeGrassType, 2876906789);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeGrassType(Z_Construct_UClass_ULandscapeGrassType, &ULandscapeGrassType::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeGrassType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeGrassType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
