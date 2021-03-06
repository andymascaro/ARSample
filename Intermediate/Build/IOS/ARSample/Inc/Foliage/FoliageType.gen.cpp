// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/FoliageType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType() {}
// Cross Module References
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_EFoliageScaling();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_EVertexColorMaskChannel();
	FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_FoliageVertexColorMask();
	FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	static UEnum* EFoliageScaling_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Foliage_EFoliageScaling, Z_Construct_UPackage__Script_Foliage(), TEXT("EFoliageScaling"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFoliageScaling(EFoliageScaling_StaticEnum, TEXT("/Script/Foliage"), TEXT("EFoliageScaling"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Foliage_EFoliageScaling_CRC() { return 359508817U; }
	UEnum* Z_Construct_UEnum_Foliage_EFoliageScaling()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFoliageScaling"), 0, Get_Z_Construct_UEnum_Foliage_EFoliageScaling_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFoliageScaling::Uniform", (int64)EFoliageScaling::Uniform },
				{ "EFoliageScaling::Free", (int64)EFoliageScaling::Free },
				{ "EFoliageScaling::LockXY", (int64)EFoliageScaling::LockXY },
				{ "EFoliageScaling::LockXZ", (int64)EFoliageScaling::LockXZ },
				{ "EFoliageScaling::LockYZ", (int64)EFoliageScaling::LockYZ },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Free.ToolTip", "Foliage instances will have random X,Y and Z scales." },
				{ "LockXY.ToolTip", "Locks the X and Y axis scale." },
				{ "LockXZ.ToolTip", "Locks the X and Z axis scale." },
				{ "LockYZ.ToolTip", "Locks the Y and Z axis scale." },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Uniform.ToolTip", "Foliage instances will have uniform X,Y and Z scales." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFoliageScaling",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EFoliageScaling",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVertexColorMaskChannel_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Foliage_EVertexColorMaskChannel, Z_Construct_UPackage__Script_Foliage(), TEXT("EVertexColorMaskChannel"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVertexColorMaskChannel(EVertexColorMaskChannel_StaticEnum, TEXT("/Script/Foliage"), TEXT("EVertexColorMaskChannel"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_CRC() { return 1752076355U; }
	UEnum* Z_Construct_UEnum_Foliage_EVertexColorMaskChannel()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVertexColorMaskChannel"), 0, Get_Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVertexColorMaskChannel::Red", (int64)EVertexColorMaskChannel::Red },
				{ "EVertexColorMaskChannel::Green", (int64)EVertexColorMaskChannel::Green },
				{ "EVertexColorMaskChannel::Blue", (int64)EVertexColorMaskChannel::Blue },
				{ "EVertexColorMaskChannel::Alpha", (int64)EVertexColorMaskChannel::Alpha },
				{ "EVertexColorMaskChannel::MAX_None", (int64)EVertexColorMaskChannel::MAX_None },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MAX_None.Hidden", "" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVertexColorMaskChannel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVertexColorMaskChannel",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* FoliageVertexColorMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Foliage_FoliageVertexColorMask, Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageVertexColorMask"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_FoliageVertexColorMask(FoliageVertexColorMask_StaticEnum, TEXT("/Script/Foliage"), TEXT("FoliageVertexColorMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Foliage_FoliageVertexColorMask_CRC() { return 3719460126U; }
	UEnum* Z_Construct_UEnum_Foliage_FoliageVertexColorMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("FoliageVertexColorMask"), 0, Get_Z_Construct_UEnum_Foliage_FoliageVertexColorMask_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FOLIAGEVERTEXCOLORMASK_Disabled", (int64)FOLIAGEVERTEXCOLORMASK_Disabled },
				{ "FOLIAGEVERTEXCOLORMASK_Red", (int64)FOLIAGEVERTEXCOLORMASK_Red },
				{ "FOLIAGEVERTEXCOLORMASK_Green", (int64)FOLIAGEVERTEXCOLORMASK_Green },
				{ "FOLIAGEVERTEXCOLORMASK_Blue", (int64)FOLIAGEVERTEXCOLORMASK_Blue },
				{ "FOLIAGEVERTEXCOLORMASK_Alpha", (int64)FOLIAGEVERTEXCOLORMASK_Alpha },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FOLIAGEVERTEXCOLORMASK_Alpha.DisplayName", "Alpha" },
				{ "FOLIAGEVERTEXCOLORMASK_Blue.DisplayName", "Blue" },
				{ "FOLIAGEVERTEXCOLORMASK_Disabled.DisplayName", "Disabled" },
				{ "FOLIAGEVERTEXCOLORMASK_Green.DisplayName", "Green" },
				{ "FOLIAGEVERTEXCOLORMASK_Red.DisplayName", "Red" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"FoliageVertexColorMask",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"FoliageVertexColorMask",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FFoliageVertexColorChannelMask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOLIAGE_API uint32 Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask, Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageVertexColorChannelMask"), sizeof(FFoliageVertexColorChannelMask), Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoliageVertexColorChannelMask(FFoliageVertexColorChannelMask::StaticStruct, TEXT("/Script/Foliage"), TEXT("FoliageVertexColorChannelMask"), false, nullptr, nullptr);
static struct FScriptStruct_Foliage_StaticRegisterNativesFFoliageVertexColorChannelMask
{
	FScriptStruct_Foliage_StaticRegisterNativesFFoliageVertexColorChannelMask()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FoliageVertexColorChannelMask")),new UScriptStruct::TCppStructOps<FFoliageVertexColorChannelMask>);
	}
} ScriptStruct_Foliage_StaticRegisterNativesFFoliageVertexColorChannelMask;
	UScriptStruct* Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Foliage();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FoliageVertexColorChannelMask"), sizeof(FFoliageVertexColorChannelMask), Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageVertexColorChannelMask>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertMask_MetaData[] = {
				{ "Category", "VertexColorMask" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "When unchecked, foliage instances will be placed only when the vertex color in the specified channel(s) is above the threshold amount.\nWhen checked, the vertex color must be less than the threshold amount" },
			};
#endif
			auto NewProp_InvertMask_SetBit = [](void* Obj){ ((FFoliageVertexColorChannelMask*)Obj)->InvertMask = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertMask = { UE4CodeGen_Private::EPropertyClass::Bool, "InvertMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFoliageVertexColorChannelMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InvertMask_SetBit)>::SetBit, METADATA_PARAMS(NewProp_InvertMask_MetaData, ARRAY_COUNT(NewProp_InvertMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskThreshold_MetaData[] = {
				{ "Category", "VertexColorMask" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Specifies the threshold value above which the static mesh vertex color value must be, in order for foliage instances to be placed in a specific area" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaskThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "MaskThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FFoliageVertexColorChannelMask, MaskThreshold), METADATA_PARAMS(NewProp_MaskThreshold_MetaData, ARRAY_COUNT(NewProp_MaskThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseMask_MetaData[] = {
				{ "Category", "VertexColorMask" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "When checked, foliage will be masked from this mesh using this color channel" },
			};
#endif
			auto NewProp_UseMask_SetBit = [](void* Obj){ ((FFoliageVertexColorChannelMask*)Obj)->UseMask = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseMask = { UE4CodeGen_Private::EPropertyClass::Bool, "UseMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FFoliageVertexColorChannelMask), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UseMask_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UseMask_MetaData, ARRAY_COUNT(NewProp_UseMask_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InvertMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UseMask,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FoliageVertexColorChannelMask",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFoliageVertexColorChannelMask),
				alignof(FFoliageVertexColorChannelMask),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_CRC() { return 4225539091U; }
	void UFoliageType::StaticRegisterNativesUFoliageType()
	{
	}
	UClass* Z_Construct_UClass_UFoliageType_NoRegister()
	{
		return UFoliageType::StaticClass();
	}
	UClass* Z_Construct_UClass_UFoliageType()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "FoliageType.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxScale = { UE4CodeGen_Private::EPropertyClass::Float, "MaxScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, MaxScale_DEPRECATED), METADATA_PARAMS(NewProp_MaxScale_MetaData, ARRAY_COUNT(NewProp_MaxScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScale = { UE4CodeGen_Private::EPropertyClass::Float, "MinScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, MinScale_DEPRECATED), METADATA_PARAMS(NewProp_MinScale_MetaData, ARRAY_COUNT(NewProp_MinScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinGroundSlope_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinGroundSlope = { UE4CodeGen_Private::EPropertyClass::Float, "MinGroundSlope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, MinGroundSlope_DEPRECATED), METADATA_PARAMS(NewProp_MinGroundSlope_MetaData, ARRAY_COUNT(NewProp_MinGroundSlope_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundSlope_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundSlope = { UE4CodeGen_Private::EPropertyClass::Float, "GroundSlope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, GroundSlope_DEPRECATED), METADATA_PARAMS(NewProp_GroundSlope_MetaData, ARRAY_COUNT(NewProp_GroundSlope_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockScaleZ_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			auto NewProp_LockScaleZ_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->LockScaleZ_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockScaleZ = { UE4CodeGen_Private::EPropertyClass::Bool, "LockScaleZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LockScaleZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_LockScaleZ_MetaData, ARRAY_COUNT(NewProp_LockScaleZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockScaleY_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			auto NewProp_LockScaleY_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->LockScaleY_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockScaleY = { UE4CodeGen_Private::EPropertyClass::Bool, "LockScaleY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LockScaleY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_LockScaleY_MetaData, ARRAY_COUNT(NewProp_LockScaleY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockScaleX_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			auto NewProp_LockScaleX_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->LockScaleX_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockScaleX = { UE4CodeGen_Private::EPropertyClass::Bool, "LockScaleX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LockScaleX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_LockScaleX_MetaData, ARRAY_COUNT(NewProp_LockScaleX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniformScale_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			auto NewProp_UniformScale_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->UniformScale_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UniformScale = { UE4CodeGen_Private::EPropertyClass::Bool, "UniformScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_UniformScale_SetBit)>::SetBit, METADATA_PARAMS(NewProp_UniformScale_MetaData, ARRAY_COUNT(NewProp_UniformScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EndCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "EndCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, EndCullDistance_DEPRECATED), METADATA_PARAMS(NewProp_EndCullDistance_MetaData, ARRAY_COUNT(NewProp_EndCullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartCullDistance = { UE4CodeGen_Private::EPropertyClass::Int, "StartCullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, StartCullDistance_DEPRECATED), METADATA_PARAMS(NewProp_StartCullDistance_MetaData, ARRAY_COUNT(NewProp_StartCullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffsetMax_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZOffsetMax = { UE4CodeGen_Private::EPropertyClass::Float, "ZOffsetMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, ZOffsetMax_DEPRECATED), METADATA_PARAMS(NewProp_ZOffsetMax_MetaData, ARRAY_COUNT(NewProp_ZOffsetMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffsetMin_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZOffsetMin = { UE4CodeGen_Private::EPropertyClass::Float, "ZOffsetMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, ZOffsetMin_DEPRECATED), METADATA_PARAMS(NewProp_ZOffsetMin_MetaData, ARRAY_COUNT(NewProp_ZOffsetMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightMax_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightMax = { UE4CodeGen_Private::EPropertyClass::Float, "HeightMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, HeightMax_DEPRECATED), METADATA_PARAMS(NewProp_HeightMax_MetaData, ARRAY_COUNT(NewProp_HeightMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightMin_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightMin = { UE4CodeGen_Private::EPropertyClass::Float, "HeightMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, HeightMin_DEPRECATED), METADATA_PARAMS(NewProp_HeightMin_MetaData, ARRAY_COUNT(NewProp_HeightMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxZ_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxZ = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMaxZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleMaxZ_DEPRECATED), METADATA_PARAMS(NewProp_ScaleMaxZ_MetaData, ARRAY_COUNT(NewProp_ScaleMaxZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxY_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxY = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMaxY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleMaxY_DEPRECATED), METADATA_PARAMS(NewProp_ScaleMaxY_MetaData, ARRAY_COUNT(NewProp_ScaleMaxY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxX_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxX = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMaxX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleMaxX_DEPRECATED), METADATA_PARAMS(NewProp_ScaleMaxX_MetaData, ARRAY_COUNT(NewProp_ScaleMaxX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMinZ_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMinZ = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMinZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleMinZ_DEPRECATED), METADATA_PARAMS(NewProp_ScaleMinZ_MetaData, ARRAY_COUNT(NewProp_ScaleMinZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMinY_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMinY = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMinY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleMinY_DEPRECATED), METADATA_PARAMS(NewProp_ScaleMinY_MetaData, ARRAY_COUNT(NewProp_ScaleMinY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleMinX_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Deprecated since FFoliageCustomVersion::FoliageTypeCustomization" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleMinX = { UE4CodeGen_Private::EPropertyClass::Float, "ScaleMinX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000820000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleMinX_DEPRECATED), METADATA_PARAMS(NewProp_ScaleMinX_MetaData, ARRAY_COUNT(NewProp_ScaleMinX_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[] = {
				{ "Category", "Scalability" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Whether this foliage type should be affected by the Engine Scalability system's Foliage scalability setting.\nEnable for detail meshes that don't really affect the game. Disable for anything important.\nTypically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)" },
			};
#endif
			auto NewProp_bEnableDensityScaling_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bEnableDensityScaling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableDensityScaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableDensityScaling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableDensityScaling_MetaData, ARRAY_COUNT(NewProp_bEnableDensityScaling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyVertexColorMask_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances no longer matching the vertex color constraint will be removed by the Reapply too" },
			};
#endif
			auto NewProp_ReapplyVertexColorMask_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyVertexColorMask = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyVertexColorMask = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyVertexColorMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyVertexColorMask_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyVertexColorMask_MetaData, ARRAY_COUNT(NewProp_ReapplyVertexColorMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyCollisionWithWorld_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances will have an overlap test with the world reapplied, and overlapping instances will be removed by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyCollisionWithWorld_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyCollisionWithWorld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyCollisionWithWorld = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyCollisionWithWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyCollisionWithWorld_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyCollisionWithWorld_MetaData, ARRAY_COUNT(NewProp_ReapplyCollisionWithWorld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyZOffset_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances will have their Z offset adjusted by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyZOffset_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyZOffset = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyZOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyZOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyZOffset_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyZOffset_MetaData, ARRAY_COUNT(NewProp_ReapplyZOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyLandscapeLayers_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances painted on areas that do not have the appropriate landscape layer painted will be removed by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyLandscapeLayers_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyLandscapeLayers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyLandscapeLayers = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyLandscapeLayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyLandscapeLayers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyLandscapeLayers_MetaData, ARRAY_COUNT(NewProp_ReapplyLandscapeLayers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyHeight_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances not meeting the valid Z height condition will be removed by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyHeight_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyHeight = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyHeight = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyHeight_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyHeight_MetaData, ARRAY_COUNT(NewProp_ReapplyHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyGroundSlope_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances not meeting the ground slope condition will be removed by the Reapply too" },
			};
#endif
			auto NewProp_ReapplyGroundSlope_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyGroundSlope = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyGroundSlope = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyGroundSlope", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyGroundSlope_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyGroundSlope_MetaData, ARRAY_COUNT(NewProp_ReapplyGroundSlope_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyRandomPitchAngle_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances will have their pitch adjusted by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyRandomPitchAngle_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyRandomPitchAngle = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyRandomPitchAngle = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyRandomPitchAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyRandomPitchAngle_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyRandomPitchAngle_MetaData, ARRAY_COUNT(NewProp_ReapplyRandomPitchAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaleZ_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances will have their Z scale adjusted by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyScaleZ_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyScaleZ = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaleZ = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyScaleZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyScaleZ_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyScaleZ_MetaData, ARRAY_COUNT(NewProp_ReapplyScaleZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaleY_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances will have their Y scale adjusted by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyScaleY_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyScaleY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaleY = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyScaleY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyScaleY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyScaleY_MetaData, ARRAY_COUNT(NewProp_ReapplyScaleY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaleX_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances will have their X scale adjusted by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyScaleX_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyScaleX = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaleX = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyScaleX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyScaleX_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyScaleX_MetaData, ARRAY_COUNT(NewProp_ReapplyScaleX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaling_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances will have their scale adjusted to fit the specified scaling behavior by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyScaling_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyScaling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyScaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyScaling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyScaling_MetaData, ARRAY_COUNT(NewProp_ReapplyScaling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyRandomYaw_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances will have their yaw adjusted by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyRandomYaw_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyRandomYaw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyRandomYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyRandomYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyRandomYaw_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyRandomYaw_MetaData, ARRAY_COUNT(NewProp_ReapplyRandomYaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyAlignToNormal_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances will have their normal alignment adjusted by the Reapply tool" },
			};
#endif
			auto NewProp_ReapplyAlignToNormal_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyAlignToNormal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyAlignToNormal = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyAlignToNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyAlignToNormal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyAlignToNormal_MetaData, ARRAY_COUNT(NewProp_ReapplyAlignToNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyRadius_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, foliage instances not meeting the new Radius constraint will be removed" },
			};
#endif
			auto NewProp_ReapplyRadius_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyRadius = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyRadius = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyRadius_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyRadius_MetaData, ARRAY_COUNT(NewProp_ReapplyRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReapplyDensity_MetaData[] = {
				{ "Category", "Reapply" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If checked, the density of foliage instances already placed will be adjusted by the density adjustment factor." },
			};
#endif
			auto NewProp_ReapplyDensity_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->ReapplyDensity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReapplyDensity = { UE4CodeGen_Private::EPropertyClass::Bool, "ReapplyDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReapplyDensity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReapplyDensity_MetaData, ARRAY_COUNT(NewProp_ReapplyDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangeCount_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ChangeCount = { UE4CodeGen_Private::EPropertyClass::Int, "ChangeCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, ChangeCount), METADATA_PARAMS(NewProp_ChangeCount_MetaData, ARRAY_COUNT(NewProp_ChangeCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Growth" },
				{ "ToolTip", "Instance scale factor as a function of normalized age (i.e. Current Age / Max Age).\nX = 0 corresponds to Age = 0, X = 1 corresponds to Age = Max Age.\nY = 0 corresponds to Min Scale, Y = 1 corresponds to Max Scale." },
				{ "XAxisName", "Normalized Age" },
				{ "YAxisName", "Scale Factor" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(NewProp_ScaleCurve_MetaData, ARRAY_COUNT(NewProp_ScaleCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProceduralScale_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Growth" },
				{ "ToolTip", "The scale range of this type when being procedurally generated. Configured with the Scale Curve." },
				{ "UIMin", "0.001" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProceduralScale = { UE4CodeGen_Private::EPropertyClass::Struct, "ProceduralScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, ProceduralScale), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_ProceduralScale_MetaData, ARRAY_COUNT(NewProp_ProceduralScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapPriority_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Growth" },
				{ "ToolTip", "When two instances overlap we must determine which instance to remove.\nThe instance with a lower OverlapPriority will be removed.\nIn the case where OverlapPriority is the same regular simulation rules apply." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverlapPriority = { UE4CodeGen_Private::EPropertyClass::Float, "OverlapPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, OverlapPriority), METADATA_PARAMS(NewProp_OverlapPriority_MetaData, ARRAY_COUNT(NewProp_OverlapPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAge_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Growth" },
				{ "ToolTip", "Specifies the oldest a seed can be. After reaching this age the instance will still spread seeds, but will not get any older" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAge = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, MaxAge), METADATA_PARAMS(NewProp_MaxAge_MetaData, ARRAY_COUNT(NewProp_MaxAge_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInitialAge_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Growth" },
				{ "ToolTip", "Allows a new seed to be older than 0 when created. New seeds will be randomly assigned an age in the range [0,MaxInitialAge]" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInitialAge = { UE4CodeGen_Private::EPropertyClass::Float, "MaxInitialAge", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, MaxInitialAge), METADATA_PARAMS(NewProp_MaxInitialAge_MetaData, ARRAY_COUNT(NewProp_MaxInitialAge_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnsInShade_MetaData[] = {
				{ "Category", "Procedural" },
				{ "EditCondition", "bCanGrowInShade" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Growth" },
				{ "ToolTip", "Whether new seeds are spawned exclusively in shade. Occurs in a second pass after all types that do not spawn in shade have been simulated.\nOnly valid when CanGrowInShade is true." },
			};
#endif
			auto NewProp_bSpawnsInShade_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bSpawnsInShade = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnsInShade = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpawnsInShade", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSpawnsInShade_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSpawnsInShade_MetaData, ARRAY_COUNT(NewProp_bSpawnsInShade_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanGrowInShade_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Growth" },
				{ "ToolTip", "If true, seeds of this type will ignore shade radius during overlap tests with other types." },
			};
#endif
			auto NewProp_bCanGrowInShade_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bCanGrowInShade = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanGrowInShade = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanGrowInShade", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCanGrowInShade_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCanGrowInShade_MetaData, ARRAY_COUNT(NewProp_bCanGrowInShade_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInitialSeedOffset_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Clustering" },
				{ "ToolTip", "The seed that determines placement of initial seeds." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInitialSeedOffset = { UE4CodeGen_Private::EPropertyClass::Float, "MaxInitialSeedOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, MaxInitialSeedOffset), METADATA_PARAMS(NewProp_MaxInitialSeedOffset_MetaData, ARRAY_COUNT(NewProp_MaxInitialSeedOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistributionSeed_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Clustering" },
				{ "ToolTip", "The seed that determines placement of initial seeds." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DistributionSeed = { UE4CodeGen_Private::EPropertyClass::Int, "DistributionSeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, DistributionSeed), METADATA_PARAMS(NewProp_DistributionSeed_MetaData, ARRAY_COUNT(NewProp_DistributionSeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeedsPerStep_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Clustering" },
				{ "ToolTip", "The number of seeds an instance will spread in a single step of the simulation." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeedsPerStep = { UE4CodeGen_Private::EPropertyClass::Int, "SeedsPerStep", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, SeedsPerStep), METADATA_PARAMS(NewProp_SeedsPerStep_MetaData, ARRAY_COUNT(NewProp_SeedsPerStep_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpreadVariance_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Clustering" },
				{ "ToolTip", "Specifies how much seed distance varies from the average. For example, a tree with an AverageSpreadDistance 10 and a SpreadVariance 1 will produce seeds with an average distance of 10cm plus or minus 1cm" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpreadVariance = { UE4CodeGen_Private::EPropertyClass::Float, "SpreadVariance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, SpreadVariance), METADATA_PARAMS(NewProp_SpreadVariance_MetaData, ARRAY_COUNT(NewProp_SpreadVariance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AverageSpreadDistance_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Clustering" },
				{ "ToolTip", "The average distance between the spreading instance and its seeds. For example, a tree with an AverageSpreadDistance 10 will ensure the average distance between the tree and its seeds is 10cm" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AverageSpreadDistance = { UE4CodeGen_Private::EPropertyClass::Float, "AverageSpreadDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, AverageSpreadDistance), METADATA_PARAMS(NewProp_AverageSpreadDistance_MetaData, ARRAY_COUNT(NewProp_AverageSpreadDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialSeedDensity_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Clustering" },
				{ "ToolTip", "Specifies the number of seeds to populate along 10 meters. The number is implicitly squared to cover a 10m x 10m area" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InitialSeedDensity = { UE4CodeGen_Private::EPropertyClass::Float, "InitialSeedDensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, InitialSeedDensity), METADATA_PARAMS(NewProp_InitialSeedDensity_MetaData, ARRAY_COUNT(NewProp_InitialSeedDensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Clustering" },
				{ "ToolTip", "The number of times we age the species and spread its seeds." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumSteps = { UE4CodeGen_Private::EPropertyClass::Int, "NumSteps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, NumSteps), METADATA_PARAMS(NewProp_NumSteps_MetaData, ARRAY_COUNT(NewProp_NumSteps_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadeRadius_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Collision" },
				{ "ToolTip", "The ShadeRadius determines when two instances overlap. If an instance can grow in the shade this radius is ignored." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShadeRadius = { UE4CodeGen_Private::EPropertyClass::Float, "ShadeRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, ShadeRadius), METADATA_PARAMS(NewProp_ShadeRadius_MetaData, ARRAY_COUNT(NewProp_ShadeRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[] = {
				{ "Category", "Procedural" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "Subcategory", "Collision" },
				{ "ToolTip", "The CollisionRadius determines when two instances overlap. When two instances overlap a winner will be picked based on rules and priority." },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, CollisionRadius), METADATA_PARAMS(NewProp_CollisionRadius_MetaData, ARRAY_COUNT(NewProp_CollisionRadius_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSelected_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			auto NewProp_IsSelected_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->IsSelected = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSelected = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSelected", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSelected_SetBit)>::SetBit, METADATA_PARAMS(NewProp_IsSelected_MetaData, ARRAY_COUNT(NewProp_IsSelected_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenEditorViews_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Bitflag to represent in which editor views this foliage mesh is hidden." },
			};
#endif
			static const UE4CodeGen_Private::FUInt64PropertyParams NewProp_HiddenEditorViews = { UE4CodeGen_Private::EPropertyClass::UInt64, "HiddenEditorViews", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UFoliageType, HiddenEditorViews), METADATA_PARAMS(NewProp_HiddenEditorViews_MetaData, ARRAY_COUNT(NewProp_HiddenEditorViews_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "DisplayName", "CustomDepth Stencil Value" },
				{ "editcondition", "bRenderCustomDepth" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
				{ "UIMax", "255" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue = { UE4CodeGen_Private::EPropertyClass::Int, "CustomDepthStencilValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UFoliageType, CustomDepthStencilValue), METADATA_PARAMS(NewProp_CustomDepthStencilValue_MetaData, ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "DisplayName", "Render CustomDepth Pass" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines)" },
			};
#endif
			auto NewProp_bRenderCustomDepth_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bRenderCustomDepth = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderCustomDepth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderCustomDepth_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderCustomDepth_MetaData, ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels = { UE4CodeGen_Private::EPropertyClass::Struct, "LightingChannels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, STRUCT_OFFSET(UFoliageType, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(NewProp_LightingChannels_MetaData, ARRAY_COUNT(NewProp_LightingChannels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomNavigableGeometry_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "HideObjectType", "TRUE" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Force navmesh" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomNavigableGeometry = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomNavigableGeometry", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, CustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(NewProp_CustomNavigableGeometry_MetaData, ARRAY_COUNT(NewProp_CustomNavigableGeometry_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "HideObjectType", "TRUE" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Custom collision for foliage" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BodyInstance = { UE4CodeGen_Private::EPropertyClass::Struct, "BodyInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(NewProp_BodyInstance_MetaData, ARRAY_COUNT(NewProp_BodyInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows\nit to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact." },
			};
#endif
			auto NewProp_bUseAsOccluder_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bUseAsOccluder = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAsOccluder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAsOccluder_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAsOccluder_MetaData, ARRAY_COUNT(NewProp_bUseAsOccluder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "DisplayName", "Light Map Resolution" },
				{ "EditCondition", "bOverrideLightMapRes" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Overrides the lightmap resolution defined in the static mesh" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes = { UE4CodeGen_Private::EPropertyClass::Int, "OverriddenLightMapRes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UFoliageType, OverriddenLightMapRes), METADATA_PARAMS(NewProp_OverriddenLightMapRes_MetaData, ARRAY_COUNT(NewProp_OverriddenLightMapRes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "InlineEditConditionToggle", "" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Whether to override the lightmap resolution defined in the static mesh." },
			};
#endif
			auto NewProp_bOverrideLightMapRes_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bOverrideLightMapRes = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideLightMapRes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideLightMapRes_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideLightMapRes_MetaData, ARRAY_COUNT(NewProp_bOverrideLightMapRes_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Whether the foliage receives decals." },
			};
#endif
			auto NewProp_bReceivesDecals_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bReceivesDecals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals = { UE4CodeGen_Private::EPropertyClass::Bool, "bReceivesDecals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReceivesDecals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReceivesDecals_MetaData, ARRAY_COUNT(NewProp_bReceivesDecals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "EditCondition", "bCastDynamicShadow" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Whether this foliage should cast dynamic shadows as if it were a two sided material." },
			};
#endif
			auto NewProp_bCastShadowAsTwoSided_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bCastShadowAsTwoSided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastShadowAsTwoSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastShadowAsTwoSided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastShadowAsTwoSided_MetaData, ARRAY_COUNT(NewProp_bCastShadowAsTwoSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "EditCondition", "CastShadow" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Whether the foliage should cast a static shadow from shadow casting lights.  This flag is only used if CastShadow is true." },
			};
#endif
			auto NewProp_bCastStaticShadow_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bCastStaticShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastStaticShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastStaticShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastStaticShadow_MetaData, ARRAY_COUNT(NewProp_bCastStaticShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "EditCondition", "CastShadow" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Controls whether the foliage should cast shadows in the case of non precomputed shadowing.  This flag is only used if CastShadow is true." },
			};
#endif
			auto NewProp_bCastDynamicShadow_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bCastDynamicShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "bCastDynamicShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCastDynamicShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCastDynamicShadow_MetaData, ARRAY_COUNT(NewProp_bCastDynamicShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "EditCondition", "CastShadow" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true." },
			};
#endif
			auto NewProp_bAffectDistanceFieldLighting_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bAffectDistanceFieldLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectDistanceFieldLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectDistanceFieldLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectDistanceFieldLighting_MetaData, ARRAY_COUNT(NewProp_bAffectDistanceFieldLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "EditCondition", "CastShadow" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true." },
			};
#endif
			auto NewProp_bAffectDynamicIndirectLighting_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bAffectDynamicIndirectLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bAffectDynamicIndirectLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAffectDynamicIndirectLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAffectDynamicIndirectLighting_MetaData, ARRAY_COUNT(NewProp_bAffectDynamicIndirectLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastShadow_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Controls whether the foliage should cast a shadow or not." },
			};
#endif
			auto NewProp_CastShadow_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->CastShadow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CastShadow = { UE4CodeGen_Private::EPropertyClass::Bool, "CastShadow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CastShadow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CastShadow_MetaData, ARRAY_COUNT(NewProp_CastShadow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableStaticLighting_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Deprecated. Now use the Mobility setting to control static/dynamic lighting" },
			};
#endif
			auto NewProp_bEnableStaticLighting_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->bEnableStaticLighting_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStaticLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableStaticLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableStaticLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableStaticLighting_MetaData, ARRAY_COUNT(NewProp_bEnableStaticLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables.\nWhen the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CullDistance = { UE4CodeGen_Private::EPropertyClass::Struct, "CullDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, CullDistance), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(NewProp_CullDistance_MetaData, ARRAY_COUNT(NewProp_CullDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[] = {
				{ "Category", "InstanceSettings" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Mobility property to apply to foliage components" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mobility = { UE4CodeGen_Private::EPropertyClass::Byte, "Mobility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UFoliageType, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(NewProp_Mobility_MetaData, ARRAY_COUNT(NewProp_Mobility_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowBoundOriginRadius_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "X, Y is origin position and Z is radius..." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LowBoundOriginRadius = { UE4CodeGen_Private::EPropertyClass::Struct, "LowBoundOriginRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, LowBoundOriginRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LowBoundOriginRadius_MetaData, ARRAY_COUNT(NewProp_LowBoundOriginRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshBounds_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshBounds = { UE4CodeGen_Private::EPropertyClass::Struct, "MeshBounds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, MeshBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(NewProp_MeshBounds_MetaData, ARRAY_COUNT(NewProp_MeshBounds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumLayerWeight_MetaData[] = {
				{ "Category", "Placement" },
				{ "HideBehind", "LandscapeLayers" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Specifies the minimum value above which the landscape layer weight value must be, in order for foliage instances to be placed in a specific area" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumLayerWeight = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumLayerWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, MinimumLayerWeight), METADATA_PARAMS(NewProp_MinimumLayerWeight_MetaData, ARRAY_COUNT(NewProp_MinimumLayerWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionScale_MetaData[] = {
				{ "Category", "Placement" },
				{ "HideBehind", "CollisionWithWorld" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "The foliage instance's collision bounding box will be scaled by the specified amount before performing the overlap check" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionScale = { UE4CodeGen_Private::EPropertyClass::Struct, "CollisionScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, CollisionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_CollisionScale_MetaData, ARRAY_COUNT(NewProp_CollisionScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionWithWorld_MetaData[] = {
				{ "Category", "Placement" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyCollisionWithWorld" },
				{ "ToolTip", "If checked, an overlap test with existing world geometry is performed before each instance is placed" },
			};
#endif
			auto NewProp_CollisionWithWorld_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->CollisionWithWorld = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CollisionWithWorld = { UE4CodeGen_Private::EPropertyClass::Bool, "CollisionWithWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_CollisionWithWorld_SetBit)>::SetBit, METADATA_PARAMS(NewProp_CollisionWithWorld_MetaData, ARRAY_COUNT(NewProp_CollisionWithWorld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayer_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LandscapeLayer = { UE4CodeGen_Private::EPropertyClass::Name, "LandscapeLayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, LandscapeLayer_DEPRECATED), METADATA_PARAMS(NewProp_LandscapeLayer_MetaData, ARRAY_COUNT(NewProp_LandscapeLayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayers_MetaData[] = {
				{ "Category", "Placement" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyLandscapeLayers" },
				{ "ToolTip", "If a layer name is specified, painting on landscape will limit the foliage to areas of landscape with the specified layer painted" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayers = { UE4CodeGen_Private::EPropertyClass::Array, "LandscapeLayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, LandscapeLayers), METADATA_PARAMS(NewProp_LandscapeLayers_MetaData, ARRAY_COUNT(NewProp_LandscapeLayers_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LandscapeLayers_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "LandscapeLayers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "Category", "Placement" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyHeight" },
				{ "ToolTip", "The valid altitude range where foliage instances will be placed, specified using minimum and maximum world coordinate Z values" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Struct, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, Height), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundSlopeAngle_MetaData[] = {
				{ "Category", "Placement" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyGroundSlope" },
				{ "ToolTip", "Foliage instances will only be placed on surfaces sloping in the specified angle range from the horizontal" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundSlopeAngle = { UE4CodeGen_Private::EPropertyClass::Struct, "GroundSlopeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, GroundSlopeAngle), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_GroundSlopeAngle_MetaData, ARRAY_COUNT(NewProp_GroundSlopeAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomPitchAngle_MetaData[] = {
				{ "Category", "Placement" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyRandomPitchAngle" },
				{ "ToolTip", "A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomPitchAngle = { UE4CodeGen_Private::EPropertyClass::Float, "RandomPitchAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, RandomPitchAngle), METADATA_PARAMS(NewProp_RandomPitchAngle_MetaData, ARRAY_COUNT(NewProp_RandomPitchAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomYaw_MetaData[] = {
				{ "Category", "Placement" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyRandomYaw" },
				{ "ToolTip", "If selected, foliage instances will have a random yaw rotation around their vertical axis applied" },
			};
#endif
			auto NewProp_RandomYaw_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->RandomYaw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RandomYaw = { UE4CodeGen_Private::EPropertyClass::Bool, "RandomYaw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RandomYaw_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RandomYaw_MetaData, ARRAY_COUNT(NewProp_RandomYaw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignMaxAngle_MetaData[] = {
				{ "Category", "Placement" },
				{ "HideBehind", "AlignToNormal" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "The maximum angle in degrees that foliage instances will be adjusted away from the vertical" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlignMaxAngle = { UE4CodeGen_Private::EPropertyClass::Float, "AlignMaxAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, AlignMaxAngle), METADATA_PARAMS(NewProp_AlignMaxAngle_MetaData, ARRAY_COUNT(NewProp_AlignMaxAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlignToNormal_MetaData[] = {
				{ "Category", "Placement" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyAlignToNormal" },
				{ "ToolTip", "Whether foliage instances should have their angle adjusted away from vertical to match the normal of the surface they're painted on\nIf AlignToNormal is enabled and RandomYaw is disabled, the instance will be rotated so that the +X axis points down-slope" },
			};
#endif
			auto NewProp_AlignToNormal_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->AlignToNormal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AlignToNormal = { UE4CodeGen_Private::EPropertyClass::Bool, "AlignToNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_AlignToNormal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_AlignToNormal_MetaData, ARRAY_COUNT(NewProp_AlignToNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
				{ "Category", "Placement" },
				{ "DisplayName", "Z Offset" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyZOffset" },
				{ "ToolTip", "Specifies a range from minimum to maximum of the offset to apply to a foliage instance's Z location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "ZOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, ZOffset), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_ZOffset_MetaData, ARRAY_COUNT(NewProp_ZOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaskInvert_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "When unchecked, foliage instances will be placed only when the vertex color in the specified channel(s) is above the threshold amount.\nWhen checked, the vertex color must be less than the threshold amount" },
			};
#endif
			auto NewProp_VertexColorMaskInvert_SetBit = [](void* Obj){ ((UFoliageType*)Obj)->VertexColorMaskInvert_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VertexColorMaskInvert = { UE4CodeGen_Private::EPropertyClass::Bool, "VertexColorMaskInvert", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UFoliageType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_VertexColorMaskInvert_SetBit)>::SetBit, METADATA_PARAMS(NewProp_VertexColorMaskInvert_MetaData, ARRAY_COUNT(NewProp_VertexColorMaskInvert_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaskThreshold_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Specifies the threshold value above which the static mesh vertex color value must be, in order for foliage instances to be placed in a specific area" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VertexColorMaskThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "VertexColorMaskThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, VertexColorMaskThreshold_DEPRECATED), METADATA_PARAMS(NewProp_VertexColorMaskThreshold_MetaData, ARRAY_COUNT(NewProp_VertexColorMaskThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMask_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "When painting on static meshes, foliage instance placement can be limited to areas where the static mesh has values in the selected vertex color channel(s).\nThis allows a static mesh to mask out certain areas to prevent foliage from being placed there" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_VertexColorMask = { UE4CodeGen_Private::EPropertyClass::Byte, "VertexColorMask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, VertexColorMask_DEPRECATED), Z_Construct_UEnum_Foliage_FoliageVertexColorMask, METADATA_PARAMS(NewProp_VertexColorMask_MetaData, ARRAY_COUNT(NewProp_VertexColorMask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaskByChannel_MetaData[] = {
				{ "ArraySizeEnum", "/Script/Foliage.EVertexColorMaskChannel" },
				{ "Category", "Painting" },
				{ "HideBehind", "VertexColorMask" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColorMaskByChannel = { UE4CodeGen_Private::EPropertyClass::Struct, "VertexColorMaskByChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, CPP_ARRAY_DIM(VertexColorMaskByChannel, UFoliageType), nullptr, STRUCT_OFFSET(UFoliageType, VertexColorMaskByChannel), Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask, METADATA_PARAMS(NewProp_VertexColorMaskByChannel_MetaData, ARRAY_COUNT(NewProp_VertexColorMaskByChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[] = {
				{ "Category", "Painting" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyScaleZ" },
				{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's Z Scale property" },
				{ "UIMin", "0.001" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleZ = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleZ), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_ScaleZ_MetaData, ARRAY_COUNT(NewProp_ScaleZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[] = {
				{ "Category", "Painting" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyScaleY" },
				{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's Y Scale property" },
				{ "UIMin", "0.001" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleY = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleY), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_ScaleY_MetaData, ARRAY_COUNT(NewProp_ScaleY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[] = {
				{ "Category", "Painting" },
				{ "ClampMin", "0.001" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyScaleX" },
				{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's X Scale property" },
				{ "UIMin", "0.001" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScaleX = { UE4CodeGen_Private::EPropertyClass::Struct, "ScaleX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, ScaleX), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(NewProp_ScaleX_MetaData, ARRAY_COUNT(NewProp_ScaleX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
				{ "Category", "Painting" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyScaling" },
				{ "ToolTip", "Specifies foliage instance scaling behavior when painting." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Scaling = { UE4CodeGen_Private::EPropertyClass::Enum, "Scaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, Scaling), Z_Construct_UEnum_Foliage_EFoliageScaling, METADATA_PARAMS(NewProp_Scaling_MetaData, ARRAY_COUNT(NewProp_Scaling_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "Painting" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyRadius" },
				{ "ToolTip", "The minimum distance between foliage instances" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityAdjustmentFactor_MetaData[] = {
				{ "Category", "Painting" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ReapplyCondition", "ReapplyDensity" },
				{ "ToolTip", "The factor by which to adjust the density of instances. Values >1 will increase density while values <1 will decrease it." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityAdjustmentFactor = { UE4CodeGen_Private::EPropertyClass::Float, "DensityAdjustmentFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, DensityAdjustmentFactor), METADATA_PARAMS(NewProp_DensityAdjustmentFactor_MetaData, ARRAY_COUNT(NewProp_DensityAdjustmentFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
				{ "Category", "Painting" },
				{ "ClampMin", "0" },
				{ "DisplayName", "Density / 1Kuu" },
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "Foliage instances will be placed at this density, specified in instances per 1000x1000 unit area" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Density = { UE4CodeGen_Private::EPropertyClass::Float, "Density", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UFoliageType, Density), METADATA_PARAMS(NewProp_Density_MetaData, ARRAY_COUNT(NewProp_Density_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateGuid_MetaData[] = {
				{ "ModuleRelativePath", "Public/FoliageType.h" },
				{ "ToolTip", "A GUID that is updated every time the foliage type is modified,\n         so foliage placed in the level can detect the FoliageType has changed." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UpdateGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "UpdateGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UFoliageType, UpdateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_UpdateGuid_MetaData, ARRAY_COUNT(NewProp_UpdateGuid_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinGroundSlope,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroundSlope,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockScaleZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockScaleY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LockScaleX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniformScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EndCullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartCullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZOffsetMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZOffsetMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeightMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMaxZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMaxY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMaxX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMinZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMinY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleMinX,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableDensityScaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyVertexColorMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyCollisionWithWorld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyZOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyLandscapeLayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyGroundSlope,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyRandomPitchAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyScaleZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyScaleY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyScaleX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyScaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyRandomYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyAlignToNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReapplyDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChangeCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProceduralScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverlapPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxAge,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxInitialAge,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSpawnsInShade,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCanGrowInShade,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxInitialSeedOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistributionSeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SeedsPerStep,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpreadVariance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AverageSpreadDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InitialSeedDensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumSteps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShadeRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionRadius,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSelected,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HiddenEditorViews,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomDepthStencilValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderCustomDepth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightingChannels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomNavigableGeometry,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodyInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAsOccluder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverriddenLightMapRes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideLightMapRes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReceivesDecals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastShadowAsTwoSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastStaticShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCastDynamicShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectDistanceFieldLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAffectDynamicIndirectLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CastShadow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableStaticLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CullDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mobility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LowBoundOriginRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshBounds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinimumLayerWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionWithWorld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeLayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeLayers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeLayers_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroundSlopeAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomPitchAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomYaw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlignMaxAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlignToNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexColorMaskInvert,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexColorMaskThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexColorMask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VertexColorMaskByChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScaleX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Scaling_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DensityAdjustmentFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Density,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateGuid,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFoliageType>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFoliageType::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00081080u,
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
	IMPLEMENT_CLASS(UFoliageType, 2571007848);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageType(Z_Construct_UClass_UFoliageType, &UFoliageType::StaticClass, TEXT("/Script/Foliage"), TEXT("UFoliageType"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
