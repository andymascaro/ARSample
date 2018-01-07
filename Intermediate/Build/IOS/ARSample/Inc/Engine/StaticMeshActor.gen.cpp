// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/StaticMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AStaticMeshActor::StaticRegisterNativesAStaticMeshActor()
	{
	}
	UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister()
	{
		return AStaticMeshActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AStaticMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ChildCanTick", "" },
				{ "HideCategories", "Input" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Engine/StaticMeshActor.h" },
				{ "IsConversionRoot", "true" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "StaticMeshActor is an instance of a UStaticMesh in the world.\nStatic meshes are geometry that do not animate or otherwise deform, and are more efficient to render than other types of geometry.\nStatic meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/StaticMeshActor/\n@see UStaticMesh" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavigationGeometryGatheringMode_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NavigationGeometryGatheringMode = { UE4CodeGen_Private::EPropertyClass::Enum, "NavigationGeometryGatheringMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(AStaticMeshActor, NavigationGeometryGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringMode, METADATA_PARAMS(NewProp_NavigationGeometryGatheringMode_MetaData, ARRAY_COUNT(NewProp_NavigationGeometryGatheringMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NavigationGeometryGatheringMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshReplicateMovement_MetaData[] = {
				{ "Category", "Actor" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
				{ "ToolTip", "This static mesh should replicate movement. Automatically sets the RemoteRole and bReplicateMovement flags. Meant to be edited on placed actors (those other two properties are not)" },
			};
#endif
			auto NewProp_bStaticMeshReplicateMovement_SetBit = [](void* Obj){ ((AStaticMeshActor*)Obj)->bStaticMeshReplicateMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshReplicateMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bStaticMeshReplicateMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AStaticMeshActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStaticMeshReplicateMovement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStaticMeshReplicateMovement_MetaData, ARRAY_COUNT(NewProp_bStaticMeshReplicateMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "StaticMeshActor" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AStaticMeshActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationGeometryGatheringMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NavigationGeometryGatheringMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStaticMeshReplicateMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AStaticMeshActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AStaticMeshActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AStaticMeshActor, 2299731746);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStaticMeshActor(Z_Construct_UClass_AStaticMeshActor, &AStaticMeshActor::StaticClass, TEXT("/Script/Engine"), TEXT("AStaticMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
