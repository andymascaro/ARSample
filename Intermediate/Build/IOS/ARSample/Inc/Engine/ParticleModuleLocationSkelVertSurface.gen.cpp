// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationSkelVertSurface() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	static UEnum* ELocationSkelVertSurfaceSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource, Z_Construct_UPackage__Script_Engine(), TEXT("ELocationSkelVertSurfaceSource"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationSkelVertSurfaceSource(ELocationSkelVertSurfaceSource_StaticEnum, TEXT("/Script/Engine"), TEXT("ELocationSkelVertSurfaceSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_CRC() { return 1017457580U; }
	UEnum* Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationSkelVertSurfaceSource"), 0, Get_Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "VERTSURFACESOURCE_Vert", (int64)VERTSURFACESOURCE_Vert },
				{ "VERTSURFACESOURCE_Surface", (int64)VERTSURFACESOURCE_Surface },
				{ "VERTSURFACESOURCE_MAX", (int64)VERTSURFACESOURCE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "VERTSURFACESOURCE_Surface.DisplayName", "Surfaces" },
				{ "VERTSURFACESOURCE_Vert.DisplayName", "Vertices" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELocationSkelVertSurfaceSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELocationSkelVertSurfaceSource",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UParticleModuleLocationSkelVertSurface::StaticRegisterNativesUParticleModuleLocationSkelVertSurface()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface_NoRegister()
	{
		return UParticleModuleLocationSkelVertSurface::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationSkelVertSurface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Skel Vert/Surf Location" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritUVChannel_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "UV channel to inherit from the spawn mesh, internally clamped to those available." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InheritUVChannel = { UE4CodeGen_Private::EPropertyClass::UInt32, "InheritUVChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, InheritUVChannel), METADATA_PARAMS(NewProp_InheritUVChannel_MetaData, ARRAY_COUNT(NewProp_InheritUVChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritUV_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "If true, particles inherit the associated UV data on spawn. Accessed through dynamic parameter module X and Y, must be a \"Spawn Time Only\" parameter on \"AutoSet\" mode. This feature is not supported for GPU particles." },
			};
#endif
			auto NewProp_bInheritUV_SetBit = [](void* Obj){ ((UParticleModuleLocationSkelVertSurface*)Obj)->bInheritUV = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritUV = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritUV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationSkelVertSurface), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritUV_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritUV_MetaData, ARRAY_COUNT(NewProp_bInheritUV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritVertexColor_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "If true, particles inherit the associated vertex color on spawn. This feature is not supported for GPU particles." },
			};
#endif
			auto NewProp_bInheritVertexColor_SetBit = [](void* Obj){ ((UParticleModuleLocationSkelVertSurface*)Obj)->bInheritVertexColor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritVertexColor = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritVertexColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationSkelVertSurface), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritVertexColor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritVertexColor_MetaData, ARRAY_COUNT(NewProp_bInheritVertexColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidMaterialIndices_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "Array of material indices that are valid materials to spawn from.\nIf empty, any material will be considered valid" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidMaterialIndices = { UE4CodeGen_Private::EPropertyClass::Array, "ValidMaterialIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, ValidMaterialIndices), METADATA_PARAMS(NewProp_ValidMaterialIndices_MetaData, ARRAY_COUNT(NewProp_ValidMaterialIndices_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValidMaterialIndices_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ValidMaterialIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalCheckTolerance_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "Normal tolerance.  Value between 1.0 and -1.0 with 1.0 being exact match, 0.0 being everything up to\n              perpendicular and -1.0 being any direction or don't restrict at all." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalCheckTolerance = { UE4CodeGen_Private::EPropertyClass::Float, "NormalCheckTolerance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, NormalCheckTolerance), METADATA_PARAMS(NewProp_NormalCheckTolerance_MetaData, ARRAY_COUNT(NewProp_NormalCheckTolerance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalCheckToleranceDegrees_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "Normal tolerance.  0 degrees means it must be an exact match, 180 degrees means it can be any angle." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalCheckToleranceDegrees = { UE4CodeGen_Private::EPropertyClass::Float, "NormalCheckToleranceDegrees", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, NormalCheckToleranceDegrees), METADATA_PARAMS(NewProp_NormalCheckToleranceDegrees_MetaData, ARRAY_COUNT(NewProp_NormalCheckToleranceDegrees_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalToCompare_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "Use this normal to restrict spawning locations" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalToCompare = { UE4CodeGen_Private::EPropertyClass::Struct, "NormalToCompare", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, NormalToCompare), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_NormalToCompare_MetaData, ARRAY_COUNT(NewProp_NormalToCompare_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnforceNormalCheck_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "When true use the RestrictToNormal and NormalTolerance values to check surface normals" },
			};
#endif
			auto NewProp_bEnforceNormalCheck_SetBit = [](void* Obj){ ((UParticleModuleLocationSkelVertSurface*)Obj)->bEnforceNormalCheck = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnforceNormalCheck = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnforceNormalCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationSkelVertSurface), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnforceNormalCheck_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnforceNormalCheck_MetaData, ARRAY_COUNT(NewProp_bEnforceNormalCheck_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidAssociatedBones_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "This module will only spawn from verts or surfaces associated with the bones in this list" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ValidAssociatedBones = { UE4CodeGen_Private::EPropertyClass::Array, "ValidAssociatedBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, ValidAssociatedBones), METADATA_PARAMS(NewProp_ValidAssociatedBones_MetaData, ARRAY_COUNT(NewProp_ValidAssociatedBones_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ValidAssociatedBones_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ValidAssociatedBones", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSkelMesh_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "The name of the skeletal mesh to use in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorSkelMesh = { UE4CodeGen_Private::EPropertyClass::Object, "EditorSkelMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, EditorSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_EditorSkelMesh_MetaData, ARRAY_COUNT(NewProp_EditorSkelMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMeshActorParamName_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkelMeshActorParamName = { UE4CodeGen_Private::EPropertyClass::Name, "SkelMeshActorParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, SkelMeshActorParamName), METADATA_PARAMS(NewProp_SkelMeshActorParamName_MetaData, ARRAY_COUNT(NewProp_SkelMeshActorParamName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "A scale on how much of the bone's velocity a particle will inherit." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InheritVelocityScale = { UE4CodeGen_Private::EPropertyClass::Float, "InheritVelocityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, InheritVelocityScale), METADATA_PARAMS(NewProp_InheritVelocityScale_MetaData, ARRAY_COUNT(NewProp_InheritVelocityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritBoneVelocity_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "If true, particles inherit the associated bone velocity when spawned" },
			};
#endif
			auto NewProp_bInheritBoneVelocity_SetBit = [](void* Obj){ ((UParticleModuleLocationSkelVertSurface*)Obj)->bInheritBoneVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritBoneVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritBoneVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationSkelVertSurface), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritBoneVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritBoneVelocity_MetaData, ARRAY_COUNT(NewProp_bInheritBoneVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientMeshEmitters_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "If true, rotate mesh emitter meshes to orient w/ the vert/surface" },
			};
#endif
			auto NewProp_bOrientMeshEmitters_SetBit = [](void* Obj){ ((UParticleModuleLocationSkelVertSurface*)Obj)->bOrientMeshEmitters = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientMeshEmitters = { UE4CodeGen_Private::EPropertyClass::Bool, "bOrientMeshEmitters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationSkelVertSurface), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOrientMeshEmitters_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOrientMeshEmitters_MetaData, ARRAY_COUNT(NewProp_bOrientMeshEmitters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatePositionEachFrame_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "If true, update the particle locations each frame with that of the vert/surface" },
			};
#endif
			auto NewProp_bUpdatePositionEachFrame_SetBit = [](void* Obj){ ((UParticleModuleLocationSkelVertSurface*)Obj)->bUpdatePositionEachFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePositionEachFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdatePositionEachFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationSkelVertSurface), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdatePositionEachFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdatePositionEachFrame_MetaData, ARRAY_COUNT(NewProp_bUpdatePositionEachFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniversalOffset_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "An offset to apply to each vert/surface" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniversalOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "UniversalOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, UniversalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_UniversalOffset_MetaData, ARRAY_COUNT(NewProp_UniversalOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
				{ "Category", "VertSurface" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h" },
				{ "ToolTip", "Whether the module uses Verts or Surfaces for locations.\n\nVERTSURFACESOURCE_Vert          - Use Verts as the source locations.\nVERTSURFACESOURCE_Surface       - Use Surfaces as the source locations." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType = { UE4CodeGen_Private::EPropertyClass::Byte, "SourceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationSkelVertSurface, SourceType), Z_Construct_UEnum_Engine_ELocationSkelVertSurfaceSource, METADATA_PARAMS(NewProp_SourceType_MetaData, ARRAY_COUNT(NewProp_SourceType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InheritUVChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritUV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritVertexColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValidMaterialIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValidMaterialIndices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalCheckTolerance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalCheckToleranceDegrees,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NormalToCompare,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnforceNormalCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValidAssociatedBones,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ValidAssociatedBones_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorSkelMesh,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelMeshActorParamName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InheritVelocityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritBoneVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOrientMeshEmitters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdatePositionEachFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniversalOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationSkelVertSurface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationSkelVertSurface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UParticleModuleLocationSkelVertSurface, 2669153797);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationSkelVertSurface(Z_Construct_UClass_UParticleModuleLocationSkelVertSurface, &UParticleModuleLocationSkelVertSurface::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationSkelVertSurface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationSkelVertSurface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
