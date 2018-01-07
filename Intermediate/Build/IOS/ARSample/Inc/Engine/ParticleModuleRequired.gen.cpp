// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/ParticleModuleRequired.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleRequired() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEmitterNormalsMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSortMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleUVFlipMode();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleRequired();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModule();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EOpacitySourceMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParticleBurst();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleBurstMethod();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleScreenAlignment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* EEmitterNormalsMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEmitterNormalsMode, Z_Construct_UPackage__Script_Engine(), TEXT("EEmitterNormalsMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEmitterNormalsMode(EEmitterNormalsMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EEmitterNormalsMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEmitterNormalsMode_CRC() { return 4205378000U; }
	UEnum* Z_Construct_UEnum_Engine_EEmitterNormalsMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEmitterNormalsMode"), 0, Get_Z_Construct_UEnum_Engine_EEmitterNormalsMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENM_CameraFacing", (int64)ENM_CameraFacing },
				{ "ENM_Spherical", (int64)ENM_Spherical },
				{ "ENM_Cylindrical", (int64)ENM_Cylindrical },
				{ "ENM_MAX", (int64)ENM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ENM_CameraFacing.ToolTip", "Default mode, normals are based on the camera facing geometry." },
				{ "ENM_Cylindrical.ToolTip", "Normals are generated from a cylinder going through NormalsSphereCenter, in the direction NormalsCylinderDirection." },
				{ "ENM_Spherical.ToolTip", "Normals are generated from a sphere centered at NormalsSphereCenter." },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEmitterNormalsMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EEmitterNormalsMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EParticleSortMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleSortMode, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleSortMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleSortMode(EParticleSortMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleSortMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleSortMode_CRC() { return 3869308423U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleSortMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleSortMode"), 0, Get_Z_Construct_UEnum_Engine_EParticleSortMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PSORTMODE_None", (int64)PSORTMODE_None },
				{ "PSORTMODE_ViewProjDepth", (int64)PSORTMODE_ViewProjDepth },
				{ "PSORTMODE_DistanceToView", (int64)PSORTMODE_DistanceToView },
				{ "PSORTMODE_Age_OldestFirst", (int64)PSORTMODE_Age_OldestFirst },
				{ "PSORTMODE_Age_NewestFirst", (int64)PSORTMODE_Age_NewestFirst },
				{ "PSORTMODE_MAX", (int64)PSORTMODE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleSortMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EParticleSortMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EParticleUVFlipMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EParticleUVFlipMode, Z_Construct_UPackage__Script_Engine(), TEXT("EParticleUVFlipMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EParticleUVFlipMode(EParticleUVFlipMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EParticleUVFlipMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EParticleUVFlipMode_CRC() { return 439661482U; }
	UEnum* Z_Construct_UEnum_Engine_EParticleUVFlipMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EParticleUVFlipMode"), 0, Get_Z_Construct_UEnum_Engine_EParticleUVFlipMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EParticleUVFlipMode::None", (int64)EParticleUVFlipMode::None },
				{ "EParticleUVFlipMode::FlipUV", (int64)EParticleUVFlipMode::FlipUV },
				{ "EParticleUVFlipMode::FlipUOnly", (int64)EParticleUVFlipMode::FlipUOnly },
				{ "EParticleUVFlipMode::FlipVOnly", (int64)EParticleUVFlipMode::FlipVOnly },
				{ "EParticleUVFlipMode::RandomFlipUV", (int64)EParticleUVFlipMode::RandomFlipUV },
				{ "EParticleUVFlipMode::RandomFlipUOnly", (int64)EParticleUVFlipMode::RandomFlipUOnly },
				{ "EParticleUVFlipMode::RandomFlipVOnly", (int64)EParticleUVFlipMode::RandomFlipVOnly },
				{ "EParticleUVFlipMode::RandomFlipUVIndependent", (int64)EParticleUVFlipMode::RandomFlipUVIndependent },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "FlipUOnly.ToolTip", "Flips U only on all particles." },
				{ "FlipUV.ToolTip", "Flips UV on all particles." },
				{ "FlipVOnly.ToolTip", "Flips V only on all particles." },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "None.ToolTip", "Flips UV on all particles." },
				{ "RandomFlipUOnly.ToolTip", "Flips U only randomly for each particle on spawn." },
				{ "RandomFlipUV.ToolTip", "Flips UV randomly for each particle on spawn." },
				{ "RandomFlipUVIndependent.ToolTip", "Flips U and V independently at random for each particle on spawn." },
				{ "RandomFlipVOnly.ToolTip", "Flips V only randomly for each particle on spawn." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EParticleUVFlipMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EParticleUVFlipMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleRequired::StaticRegisterNativesUParticleModuleRequired()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleRequired_NoRegister()
	{
		return UParticleModuleRequired::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleRequired()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModule,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Required" },
				{ "HideCategories", "Object Cascade Object" },
				{ "IncludePath", "Particles/ParticleModuleRequired.h" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamedMaterialOverrides_MetaData[] = {
				{ "Category", "Materials" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Named material overrides for this emitter.\nOverrides this emitter's material(s) with those in the correspondingly named slot(s) of the owning system." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NamedMaterialOverrides = { UE4CodeGen_Private::EPropertyClass::Array, "NamedMaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, NamedMaterialOverrides), METADATA_PARAMS(NewProp_NamedMaterialOverrides_MetaData, ARRAY_COUNT(NewProp_NamedMaterialOverrides_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_NamedMaterialOverrides_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "NamedMaterialOverrides", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Ensures that movement generated from the orbit module is applied to velocity-aligned particles" },
			};
#endif
			auto NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bOrbitModuleAffectsVelocityAlignment = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrbitModuleAffectsVelocityAlignment = { UE4CodeGen_Private::EPropertyClass::Bool, "bOrbitModuleAffectsVelocityAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOrbitModuleAffectsVelocityAlignment_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData, ARRAY_COUNT(NewProp_bOrbitModuleAffectsVelocityAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsCylinderDirection_MetaData[] = {
				{ "Category", "Normals" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "When EmitterNormalsMode is ENM_Cylindrical,\nparticle normals are created to face away from the cylinder going through NormalsSphereCenter in the direction NormalsCylinderDirection.\nNormalsCylinderDirection is in local space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalsCylinderDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalsCylinderDirection", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, NormalsCylinderDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NormalsCylinderDirection_MetaData, ARRAY_COUNT(NewProp_NormalsCylinderDirection_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalsSphereCenter_MetaData[] = {
				{ "Category", "Normals" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "When EmitterNormalsMode is ENM_Spherical, particle normals are created to face away from NormalsSphereCenter.\nNormalsSphereCenter is in local space." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalsSphereCenter = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalsSphereCenter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, NormalsSphereCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NormalsSphereCenter_MetaData, ARRAY_COUNT(NewProp_NormalsSphereCenter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterNormalsMode_MetaData[] = {
				{ "Category", "Normals" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Normal generation mode for this emitter LOD." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmitterNormalsMode = { UE4CodeGen_Private::EPropertyClass::Byte, "EmitterNormalsMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterNormalsMode), Z_Construct_UEnum_Engine_EEmitterNormalsMode, METADATA_PARAMS(NewProp_EmitterNormalsMode_MetaData, ARRAY_COUNT(NewProp_EmitterNormalsMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaThreshold_MetaData[] = {
				{ "Category", "ParticleCutout" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Alpha channel values larger than the threshold are considered occupied and will be contained in the bounding geometry.\nRaising this threshold slightly can reduce overdraw in particles using this animation asset." },
				{ "UIMax", "1" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "AlphaThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, AlphaThreshold), METADATA_PARAMS(NewProp_AlphaThreshold_MetaData, ARRAY_COUNT(NewProp_AlphaThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacitySourceMode_MetaData[] = {
				{ "Category", "ParticleCutout" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpacitySourceMode = { UE4CodeGen_Private::EPropertyClass::Byte, "OpacitySourceMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, OpacitySourceMode), Z_Construct_UEnum_Engine_EOpacitySourceMode, METADATA_PARAMS(NewProp_OpacitySourceMode_MetaData, ARRAY_COUNT(NewProp_OpacitySourceMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundingMode_MetaData[] = {
				{ "Category", "ParticleCutout" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "More bounding vertices results in reduced overdraw, but adds more triangle overhead.\nThe eight vertex mode is best used when the SubUV texture has a lot of space to cut out that is not captured by the four vertex version,\nand when the particles using the texture will be few and large." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoundingMode = { UE4CodeGen_Private::EPropertyClass::Byte, "BoundingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, BoundingMode), Z_Construct_UEnum_Engine_ESubUVBoundingVertexCount, METADATA_PARAMS(NewProp_BoundingMode_MetaData, ARRAY_COUNT(NewProp_BoundingMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CutoutTexture_MetaData[] = {
				{ "Category", "ParticleCutout" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Texture to generate bounding geometry from." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CutoutTexture = { UE4CodeGen_Private::EPropertyClass::Object, "CutoutTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, CutoutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(NewProp_CutoutTexture_MetaData, ARRAY_COUNT(NewProp_CutoutTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVFlippingMode_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Controls UV Flipping for this emitter." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_UVFlippingMode = { UE4CodeGen_Private::EPropertyClass::Enum, "UVFlippingMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, UVFlippingMode), Z_Construct_UEnum_Engine_EParticleUVFlipMode, METADATA_PARAMS(NewProp_UVFlippingMode_MetaData, ARRAY_COUNT(NewProp_UVFlippingMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_UVFlippingMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDrawCount_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The maximum number of particles to DRAW for this emitter.\nIf set to 0, it will use whatever number are present." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDrawCount = { UE4CodeGen_Private::EPropertyClass::Int, "MaxDrawCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MaxDrawCount), METADATA_PARAMS(NewProp_MaxDrawCount_MetaData, ARRAY_COUNT(NewProp_MaxDrawCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseMaxDrawCount_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, use the MaxDrawCount to limit the number of particles rendered.\nNOTE: This does not limit the number spawned/updated, only what is drawn." },
			};
#endif
			auto NewProp_bUseMaxDrawCount_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bUseMaxDrawCount = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseMaxDrawCount = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseMaxDrawCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseMaxDrawCount_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseMaxDrawCount_MetaData, ARRAY_COUNT(NewProp_bUseMaxDrawCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroUVRadius_MetaData[] = {
				{ "Category", "MacroUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "World space radius that UVs generated with the ParticleMacroUV material node will tile based on." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MacroUVRadius = { UE4CodeGen_Private::EPropertyClass::Float, "MacroUVRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MacroUVRadius), METADATA_PARAMS(NewProp_MacroUVRadius_MetaData, ARRAY_COUNT(NewProp_MacroUVRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MacroUVPosition_MetaData[] = {
				{ "Category", "MacroUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Local space position that UVs generated with the ParticleMacroUV material node will be centered on." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MacroUVPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "MacroUVPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MacroUVPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MacroUVPosition_MetaData, ARRAY_COUNT(NewProp_MacroUVPosition_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideSystemMacroUV_MetaData[] = {
				{ "Category", "MacroUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Override the system MacroUV settings" },
			};
#endif
			auto NewProp_bOverrideSystemMacroUV_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bOverrideSystemMacroUV = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideSystemMacroUV = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideSystemMacroUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOverrideSystemMacroUV_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOverrideSystemMacroUV_MetaData, ARRAY_COUNT(NewProp_bOverrideSystemMacroUV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomImageChanges_MetaData[] = {
				{ "Category", "SubUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The number of times to change a random image over the life of the particle." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomImageChanges = { UE4CodeGen_Private::EPropertyClass::Int, "RandomImageChanges", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, RandomImageChanges), METADATA_PARAMS(NewProp_RandomImageChanges_MetaData, ARRAY_COUNT(NewProp_RandomImageChanges_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomImageTime_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The amount of time (particle-relative, 0.0 to 1.0) to 'lock' on a random sub image\n    0.0 = change every frame\n1.0 = select a random image at spawn and hold for the life of the particle" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomImageTime = { UE4CodeGen_Private::EPropertyClass::Float, "RandomImageTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, RandomImageTime), METADATA_PARAMS(NewProp_RandomImageTime_MetaData, ARRAY_COUNT(NewProp_RandomImageTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScaleUV_MetaData[] = {
				{ "Category", "SubUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Whether to scale the UV or not - ie, the model wasn't setup with sub uvs" },
			};
#endif
			auto NewProp_bScaleUV_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bScaleUV = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScaleUV = { UE4CodeGen_Private::EPropertyClass::Bool, "bScaleUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bScaleUV_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bScaleUV_MetaData, ARRAY_COUNT(NewProp_bScaleUV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImages_Vertical_MetaData[] = {
				{ "Category", "SubUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The number of sub-images vertically in the texture" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImages_Vertical = { UE4CodeGen_Private::EPropertyClass::Int, "SubImages_Vertical", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, SubImages_Vertical), METADATA_PARAMS(NewProp_SubImages_Vertical_MetaData, ARRAY_COUNT(NewProp_SubImages_Vertical_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubImages_Horizontal_MetaData[] = {
				{ "Category", "SubUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The number of sub-images horizontally in the texture" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubImages_Horizontal = { UE4CodeGen_Private::EPropertyClass::Int, "SubImages_Horizontal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, SubImages_Horizontal), METADATA_PARAMS(NewProp_SubImages_Horizontal_MetaData, ARRAY_COUNT(NewProp_SubImages_Horizontal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationMethod_MetaData[] = {
				{ "Category", "SubUV" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The interpolation method to used for the SubUV image selection.\nOne of the following:\nPSUVIM_None                     - Do not apply SubUV modules to this emitter.\nPSUVIM_Linear           - Smoothly transition between sub-images in the given order,\n                                          with no blending between the current and the next\nPSUVIM_Linear_Blend     - Smoothly transition between sub-images in the given order,\n                                          blending between the current and the next\nPSUVIM_Random           - Pick the next image at random, with no blending between\n                                          the current and the next\nPSUVIM_Random_Blend     - Pick the next image at random, blending between the current\n                                          and the next" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpolationMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "InterpolationMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, InterpolationMethod), Z_Construct_UEnum_Engine_EParticleSubUVInterpMethod, METADATA_PARAMS(NewProp_InterpolationMethod_MetaData, ARRAY_COUNT(NewProp_InterpolationMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDelayFirstLoopOnly_MetaData[] = {
				{ "Category", "Delay" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, the emitter will be delayed only on the first loop." },
			};
#endif
			auto NewProp_bDelayFirstLoopOnly_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bDelayFirstLoopOnly = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDelayFirstLoopOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bDelayFirstLoopOnly", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDelayFirstLoopOnly_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDelayFirstLoopOnly_MetaData, ARRAY_COUNT(NewProp_bDelayFirstLoopOnly_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmitterDelayUseRange_MetaData[] = {
				{ "Category", "Delay" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, select the emitter delay from the range\n        [EmitterDelayLow..EmitterDelay]" },
			};
#endif
			auto NewProp_bEmitterDelayUseRange_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bEmitterDelayUseRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmitterDelayUseRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bEmitterDelayUseRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEmitterDelayUseRange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEmitterDelayUseRange_MetaData, ARRAY_COUNT(NewProp_bEmitterDelayUseRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterDelayLow_MetaData[] = {
				{ "Category", "Delay" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The low end of the emitter delay if using a range." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterDelayLow = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterDelayLow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterDelayLow), METADATA_PARAMS(NewProp_EmitterDelayLow_MetaData, ARRAY_COUNT(NewProp_EmitterDelayLow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterDelay_MetaData[] = {
				{ "Category", "Delay" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "Indicates the time (in seconds) that this emitter should be delayed in the particle system." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterDelay = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterDelay), METADATA_PARAMS(NewProp_EmitterDelay_MetaData, ARRAY_COUNT(NewProp_EmitterDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurstList_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The array of burst entries." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BurstList = { UE4CodeGen_Private::EPropertyClass::Array, "BurstList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000002000008, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, BurstList), METADATA_PARAMS(NewProp_BurstList_MetaData, ARRAY_COUNT(NewProp_BurstList_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurstList_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "BurstList", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000008, 1, nullptr, 0, Z_Construct_UScriptStruct_FParticleBurst, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleBurstMethod_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The method to utilize when burst-emitting particles" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ParticleBurstMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "ParticleBurstMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, ParticleBurstMethod), Z_Construct_UEnum_Engine_EParticleBurstMethod, METADATA_PARAMS(NewProp_ParticleBurstMethod_MetaData, ARRAY_COUNT(NewProp_ParticleBurstMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The rate at which to spawn particles" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnRate = { UE4CodeGen_Private::EPropertyClass::Struct, "SpawnRate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, SpawnRate), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(NewProp_SpawnRate_MetaData, ARRAY_COUNT(NewProp_SpawnRate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterLoops_MetaData[] = {
				{ "Category", "Duration" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The number of times to loop the emitter.\n    0 indicates loop continuously" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_EmitterLoops = { UE4CodeGen_Private::EPropertyClass::Int, "EmitterLoops", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterLoops), METADATA_PARAMS(NewProp_EmitterLoops_MetaData, ARRAY_COUNT(NewProp_EmitterLoops_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDurationRecalcEachLoop_MetaData[] = {
				{ "Category", "Duration" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, recalculate the emitter duration on each loop." },
			};
#endif
			auto NewProp_bDurationRecalcEachLoop_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bDurationRecalcEachLoop = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDurationRecalcEachLoop = { UE4CodeGen_Private::EPropertyClass::Bool, "bDurationRecalcEachLoop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDurationRecalcEachLoop_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDurationRecalcEachLoop_MetaData, ARRAY_COUNT(NewProp_bDurationRecalcEachLoop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmitterDurationUseRange_MetaData[] = {
				{ "Category", "Duration" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, select the emitter duration from the range\n        [EmitterDurationLow..EmitterDuration]" },
			};
#endif
			auto NewProp_bEmitterDurationUseRange_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bEmitterDurationUseRange = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmitterDurationUseRange = { UE4CodeGen_Private::EPropertyClass::Bool, "bEmitterDurationUseRange", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEmitterDurationUseRange_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEmitterDurationUseRange_MetaData, ARRAY_COUNT(NewProp_bEmitterDurationUseRange_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterDurationLow_MetaData[] = {
				{ "Category", "Duration" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The low end of the emitter duration if using a range." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterDurationLow = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterDurationLow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterDurationLow), METADATA_PARAMS(NewProp_EmitterDurationLow_MetaData, ARRAY_COUNT(NewProp_EmitterDurationLow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterDuration_MetaData[] = {
				{ "Category", "Duration" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "How long, in seconds, the emitter will run before looping." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterDuration = { UE4CodeGen_Private::EPropertyClass::Float, "EmitterDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterDuration), METADATA_PARAMS(NewProp_EmitterDuration_MetaData, ARRAY_COUNT(NewProp_EmitterDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveHMDRoll_MetaData[] = {
				{ "Category", "Emitter" },
				{ "DisplayName", "Remove HMD Roll" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, removes the HMD view roll (e.g. in VR)" },
			};
#endif
			auto NewProp_bRemoveHMDRoll_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bRemoveHMDRoll = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveHMDRoll = { UE4CodeGen_Private::EPropertyClass::Bool, "bRemoveHMDRoll", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRemoveHMDRoll_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRemoveHMDRoll_MetaData, ARRAY_COUNT(NewProp_bRemoveHMDRoll_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyEmitterTime_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, the EmitterTime for the emitter will be calculated by\nmodulating the SecondsSinceCreation by the EmitterDuration. As\nthis can lead to issues w/ looping and variable duration, a new\napproach has been implemented.\nIf false, this new approach is utilized, and the EmitterTime is\nsimply incremented by DeltaTime each tick. When the emitter\nloops, it adjusts the EmitterTime by the current EmitterDuration\nresulting in proper looping/delay behavior." },
			};
#endif
			auto NewProp_bUseLegacyEmitterTime_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bUseLegacyEmitterTime = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyEmitterTime = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLegacyEmitterTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLegacyEmitterTime_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLegacyEmitterTime_MetaData, ARRAY_COUNT(NewProp_bUseLegacyEmitterTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortMode_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The sorting mode to use for this emitter.\nPSORTMODE_None                          - No sorting required.\nPSORTMODE_ViewProjDepth         - Sort by view projected depth of the particle.\nPSORTMODE_DistanceToView        - Sort by distance of particle to view in world space.\nPSORTMODE_Age_OldestFirst       - Sort by age, oldest drawn first.\nPSORTMODE_Age_NewestFirst       - Sort by age, newest drawn first." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMode = { UE4CodeGen_Private::EPropertyClass::Byte, "SortMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, SortMode), Z_Construct_UEnum_Engine_EParticleSortMode, METADATA_PARAMS(NewProp_SortMode_MetaData, ARRAY_COUNT(NewProp_SortMode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKillOnCompleted_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, kill the emitter when it completes" },
			};
#endif
			auto NewProp_bKillOnCompleted_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bKillOnCompleted = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKillOnCompleted = { UE4CodeGen_Private::EPropertyClass::Bool, "bKillOnCompleted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bKillOnCompleted_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bKillOnCompleted_MetaData, ARRAY_COUNT(NewProp_bKillOnCompleted_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKillOnDeactivate_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, kill the emitter when the particle system is deactivated" },
			};
#endif
			auto NewProp_bKillOnDeactivate_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bKillOnDeactivate = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKillOnDeactivate = { UE4CodeGen_Private::EPropertyClass::Bool, "bKillOnDeactivate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bKillOnDeactivate_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bKillOnDeactivate_MetaData, ARRAY_COUNT(NewProp_bKillOnDeactivate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseLocalSpace_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "If true, update the emitter in local space" },
			};
#endif
			auto NewProp_bUseLocalSpace_SetBit = [](void* Obj){ ((UParticleModuleRequired*)Obj)->bUseLocalSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseLocalSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseLocalSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleRequired), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseLocalSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseLocalSpace_MetaData, ARRAY_COUNT(NewProp_bUseLocalSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxFacingCameraBlendDistance_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_FacingCameraPosition" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxFacingCameraBlendDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxFacingCameraBlendDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MaxFacingCameraBlendDistance), METADATA_PARAMS(NewProp_MaxFacingCameraBlendDistance_MetaData, ARRAY_COUNT(NewProp_MaxFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFacingCameraBlendDistance_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The distance at which PSA_FacingCameraDistanceBlend    is fully PSA_Square" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFacingCameraBlendDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MinFacingCameraBlendDistance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, MinFacingCameraBlendDistance), METADATA_PARAMS(NewProp_MinFacingCameraBlendDistance_MetaData, ARRAY_COUNT(NewProp_MinFacingCameraBlendDistance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenAlignment_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The screen alignment to utilize for the emitter at this LOD level.\nOne of the following:\nPSA_FacingCameraPosition - Faces the camera position, but is not dependent on the camera rotation.\n                                                        This method produces more stable particles under camera rotation.\nPSA_Square                      - Uniform scale (via SizeX) facing the camera\nPSA_Rectangle           - Non-uniform scale (via SizeX and SizeY) facing the camera\nPSA_Velocity            - Orient the particle towards both the camera and the direction\n                                          the particle is moving. Non-uniform scaling is allowed.\nPSA_TypeSpecific        - Use the alignment method indicated in the type data module.\nPSA_FacingCameraDistanceBlend - Blends between PSA_FacingCameraPosition and PSA_Square over specified distance." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ScreenAlignment = { UE4CodeGen_Private::EPropertyClass::Byte, "ScreenAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, ScreenAlignment), Z_Construct_UEnum_Engine_EParticleScreenAlignment, METADATA_PARAMS(NewProp_ScreenAlignment_MetaData, ARRAY_COUNT(NewProp_ScreenAlignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterRotation_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "EmitterRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_EmitterRotation_MetaData, ARRAY_COUNT(NewProp_EmitterRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterOrigin_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterOrigin = { UE4CodeGen_Private::EPropertyClass::Struct, "EmitterOrigin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, EmitterOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_EmitterOrigin_MetaData, ARRAY_COUNT(NewProp_EmitterOrigin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "Emitter" },
				{ "ModuleRelativePath", "Classes/Particles/ParticleModuleRequired.h" },
				{ "ToolTip", "The material to utilize for the emitter at this LOD level." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleRequired, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NamedMaterialOverrides,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NamedMaterialOverrides_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOrbitModuleAffectsVelocityAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalsCylinderDirection,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalsSphereCenter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterNormalsMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AlphaThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpacitySourceMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CutoutTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVFlippingMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVFlippingMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxDrawCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseMaxDrawCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MacroUVRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MacroUVPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOverrideSystemMacroUV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomImageChanges,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomImageTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bScaleUV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubImages_Vertical,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubImages_Horizontal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpolationMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDelayFirstLoopOnly,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEmitterDelayUseRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterDelayLow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstList,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BurstList_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParticleBurstMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpawnRate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterLoops,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDurationRecalcEachLoop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEmitterDurationUseRange,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterDurationLow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRemoveHMDRoll,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLegacyEmitterTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bKillOnCompleted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bKillOnDeactivate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseLocalSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxFacingCameraBlendDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinFacingCameraBlendDistance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenAlignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EmitterOrigin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleRequired>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleRequired::StaticClass,
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
	IMPLEMENT_CLASS(UParticleModuleRequired, 92596561);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleRequired(Z_Construct_UClass_UParticleModuleRequired, &UParticleModuleRequired::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleRequired"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleRequired);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
