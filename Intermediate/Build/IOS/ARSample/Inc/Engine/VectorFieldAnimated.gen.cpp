// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VectorField/VectorFieldAnimated.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldAnimated() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorFieldConstructionOp();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldAnimated_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldAnimated();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldStatic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static UEnum* EVectorFieldConstructionOp_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorFieldConstructionOp, Z_Construct_UPackage__Script_Engine(), TEXT("EVectorFieldConstructionOp"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVectorFieldConstructionOp(EVectorFieldConstructionOp_StaticEnum, TEXT("/Script/Engine"), TEXT("EVectorFieldConstructionOp"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_CRC() { return 2359183970U; }
	UEnum* Z_Construct_UEnum_Engine_EVectorFieldConstructionOp()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVectorFieldConstructionOp"), 0, Get_Z_Construct_UEnum_Engine_EVectorFieldConstructionOp_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VFCO_Extrude", (int64)VFCO_Extrude },
				{ "VFCO_Revolve", (int64)VFCO_Revolve },
				{ "VFCO_MAX", (int64)VFCO_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "Operation used to construct the vector field from a 2D texture." },
				{ "VFCO_Extrude.DisplayName", "Extrude" },
				{ "VFCO_Revolve.DisplayName", "Revolve" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVectorFieldConstructionOp",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EVectorFieldConstructionOp",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UVectorFieldAnimated::StaticRegisterNativesUVectorFieldAnimated()
	{
	}
	UClass* Z_Construct_UClass_UVectorFieldAnimated_NoRegister()
	{
		return UVectorFieldAnimated::StaticClass();
	}
	UClass* Z_Construct_UClass_UVectorFieldAnimated()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UVectorField,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VectorField/VectorFieldAnimated.h" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseMax_MetaData[] = {
				{ "Category", "Noise" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The maximum magnitude of noise vectors to apply." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseMax = { UE4CodeGen_Private::EPropertyClass::Float, "NoiseMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, NoiseMax), METADATA_PARAMS(NewProp_NoiseMax_MetaData, ARRAY_COUNT(NewProp_NoiseMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[] = {
				{ "Category", "Noise" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "Scale to apply to vectors in the noise field." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoiseScale = { UE4CodeGen_Private::EPropertyClass::Float, "NoiseScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, NoiseScale), METADATA_PARAMS(NewProp_NoiseScale_MetaData, ARRAY_COUNT(NewProp_NoiseScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoiseField_MetaData[] = {
				{ "Category", "Noise" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "A static vector field used to add noise." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoiseField = { UE4CodeGen_Private::EPropertyClass::Object, "NoiseField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, NoiseField), Z_Construct_UClass_UVectorFieldStatic_NoRegister, METADATA_PARAMS(NewProp_NoiseField_MetaData, ARRAY_COUNT(NewProp_NoiseField_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "Whether or not the simulation should loop." },
			};
#endif
			auto NewProp_bLoop_SetBit = [](void* Obj){ ((UVectorFieldAnimated*)Obj)->bLoop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "bLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UVectorFieldAnimated), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLoop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLoop_MetaData, ARRAY_COUNT(NewProp_bLoop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The rate at which to interpolate between frames." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FramesPerSecond = { UE4CodeGen_Private::EPropertyClass::Float, "FramesPerSecond", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, FramesPerSecond), METADATA_PARAMS(NewProp_FramesPerSecond_MetaData, ARRAY_COUNT(NewProp_FramesPerSecond_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[] = {
				{ "Category", "Reconstruction" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The number of frames in the atlas." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FrameCount = { UE4CodeGen_Private::EPropertyClass::Int, "FrameCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, FrameCount), METADATA_PARAMS(NewProp_FrameCount_MetaData, ARRAY_COUNT(NewProp_FrameCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImagesY_MetaData[] = {
				{ "Category", "Reconstruction" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The number of vertical subimages in the texture atlas." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImagesY = { UE4CodeGen_Private::EPropertyClass::Int, "SubImagesY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, SubImagesY), METADATA_PARAMS(NewProp_SubImagesY_MetaData, ARRAY_COUNT(NewProp_SubImagesY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImagesX_MetaData[] = {
				{ "Category", "Reconstruction" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The number of horizontal subimages in the texture atlas." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImagesX = { UE4CodeGen_Private::EPropertyClass::Int, "SubImagesX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, SubImagesX), METADATA_PARAMS(NewProp_SubImagesX_MetaData, ARRAY_COUNT(NewProp_SubImagesX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeZ_MetaData[] = {
				{ "Category", "Reconstruction" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VolumeSizeZ = { UE4CodeGen_Private::EPropertyClass::Int, "VolumeSizeZ", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeZ), METADATA_PARAMS(NewProp_VolumeSizeZ_MetaData, ARRAY_COUNT(NewProp_VolumeSizeZ_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeY_MetaData[] = {
				{ "Category", "Reconstruction" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VolumeSizeY = { UE4CodeGen_Private::EPropertyClass::Int, "VolumeSizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeY), METADATA_PARAMS(NewProp_VolumeSizeY_MetaData, ARRAY_COUNT(NewProp_VolumeSizeY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumeSizeX_MetaData[] = {
				{ "Category", "Reconstruction" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The size of the volume. Valid sizes: 16, 32, 64." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_VolumeSizeX = { UE4CodeGen_Private::EPropertyClass::Int, "VolumeSizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, VolumeSizeX), METADATA_PARAMS(NewProp_VolumeSizeX_MetaData, ARRAY_COUNT(NewProp_VolumeSizeX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstructionOp_MetaData[] = {
				{ "Category", "Reconstruction" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The operation used to construct the vector field." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConstructionOp = { UE4CodeGen_Private::EPropertyClass::Byte, "ConstructionOp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, ConstructionOp), Z_Construct_UEnum_Engine_EVectorFieldConstructionOp, METADATA_PARAMS(NewProp_ConstructionOp_MetaData, ARRAY_COUNT(NewProp_ConstructionOp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "Category", "Reconstruction" },
				{ "ModuleRelativePath", "Classes/VectorField/VectorFieldAnimated.h" },
				{ "ToolTip", "The texture from which to create the vector field." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVectorFieldAnimated, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NoiseField,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FramesPerSecond,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FrameCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubImagesY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubImagesX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeSizeZ,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeSizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VolumeSizeX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstructionOp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVectorFieldAnimated>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVectorFieldAnimated::StaticClass,
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
	IMPLEMENT_CLASS(UVectorFieldAnimated, 1887913173);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVectorFieldAnimated(Z_Construct_UClass_UVectorFieldAnimated, &UVectorFieldAnimated::StaticClass, TEXT("/Script/Engine"), TEXT("UVectorFieldAnimated"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldAnimated);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
