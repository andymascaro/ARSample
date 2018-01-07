// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MRMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMRMeshComponent() {}
// Cross Module References
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_MRMesh();
	MRMESH_API UFunction* Z_Construct_UFunction_UMRMeshComponent_ConnectReconstructor();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister();
	MRMESH_API UFunction* Z_Construct_UFunction_UMRMeshComponent_GetReconstructor();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UMRMeshComponent::StaticRegisterNativesUMRMeshComponent()
	{
		UClass* Class = UMRMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectReconstructor", (Native)&UMRMeshComponent::execConnectReconstructor },
			{ "GetReconstructor", (Native)&UMRMeshComponent::execGetReconstructor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMRMeshComponent_ConnectReconstructor()
	{
		struct MRMeshComponent_eventConnectReconstructor_Parms
		{
			UMeshReconstructorBase* Reconstructor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Reconstructor = { UE4CodeGen_Private::EPropertyClass::Object, "Reconstructor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MRMeshComponent_eventConnectReconstructor_Parms, Reconstructor), Z_Construct_UClass_UMeshReconstructorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Reconstructor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh Reconstruction" },
				{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, "ConnectReconstructor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MRMeshComponent_eventConnectReconstructor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMRMeshComponent_GetReconstructor()
	{
		struct MRMeshComponent_eventGetReconstructor_Parms
		{
			UMeshReconstructorBase* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MRMeshComponent_eventGetReconstructor_Parms, ReturnValue), Z_Construct_UClass_UMeshReconstructorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh Reconstruction" },
				{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMRMeshComponent, "GetReconstructor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(MRMeshComponent_eventGetReconstructor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister()
	{
		return UMRMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMRMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMRMeshComponent_ConnectReconstructor, "ConnectReconstructor" }, // 171250821
				{ &Z_Construct_UFunction_UMRMeshComponent_GetReconstructor, "GetReconstructor" }, // 689643988
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "Experimental", "" },
				{ "HideCategories", "Mobility Trigger" },
				{ "IncludePath", "MRMeshComponent.h" },
				{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetups_MetaData[] = {
				{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BodySetups = { UE4CodeGen_Private::EPropertyClass::Array, "BodySetups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UMRMeshComponent, BodySetups), METADATA_PARAMS(NewProp_BodySetups_MetaData, ARRAY_COUNT(NewProp_BodySetups_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetups_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableCollision_MetaData[] = {
				{ "Category", "Mesh Reconstruction" },
				{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
			};
#endif
			auto NewProp_bEnableCollision_SetBit = [](void* Obj){ ((UMRMeshComponent*)Obj)->bEnableCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMRMeshComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableCollision_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableCollision_MetaData, ARRAY_COUNT(NewProp_bEnableCollision_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshReconstructor_MetaData[] = {
				{ "Category", "Mesh Reconstruction" },
				{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshReconstructor = { UE4CodeGen_Private::EPropertyClass::Object, "MeshReconstructor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMRMeshComponent, MeshReconstructor), Z_Construct_UClass_UMeshReconstructorBase_NoRegister, METADATA_PARAMS(NewProp_MeshReconstructor_MetaData, ARRAY_COUNT(NewProp_MeshReconstructor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "Appearance" },
				{ "ModuleRelativePath", "Public/MRMeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(UMRMeshComponent, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodySetups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodySetups_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshReconstructor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMRMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMRMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UMRMeshComponent, 4094570395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMRMeshComponent(Z_Construct_UClass_UMRMeshComponent, &UMRMeshComponent::StaticClass, TEXT("/Script/MRMesh"), TEXT("UMRMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMRMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
