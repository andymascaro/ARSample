// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/SkeletalMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0();
	ENGINE_API UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1();
	ENGINE_API UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh();
	ENGINE_API UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMatineeAnimInterface_NoRegister();
// End Cross Module References
	void ASkeletalMeshActor::StaticRegisterNativesASkeletalMeshActor()
	{
		UClass* Class = ASkeletalMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedMaterial0", (Native)&ASkeletalMeshActor::execOnRep_ReplicatedMaterial0 },
			{ "OnRep_ReplicatedMaterial1", (Native)&ASkeletalMeshActor::execOnRep_ReplicatedMaterial1 },
			{ "OnRep_ReplicatedMesh", (Native)&ASkeletalMeshActor::execOnRep_ReplicatedMesh },
			{ "OnRep_ReplicatedPhysAsset", (Native)&ASkeletalMeshActor::execOnRep_ReplicatedPhysAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkeletalMeshActor, "OnRep_ReplicatedMaterial0", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkeletalMeshActor, "OnRep_ReplicatedMaterial1", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
				{ "ToolTip", "Replication Notification Callbacks" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkeletalMeshActor, "OnRep_ReplicatedMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkeletalMeshActor, "OnRep_ReplicatedPhysAsset", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASkeletalMeshActor_NoRegister()
	{
		return ASkeletalMeshActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASkeletalMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial0, "OnRep_ReplicatedMaterial0" }, // 249812153
				{ &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMaterial1, "OnRep_ReplicatedMaterial1" }, // 587863644
				{ &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedMesh, "OnRep_ReplicatedMesh" }, // 3824897546
				{ &Z_Construct_UFunction_ASkeletalMeshActor_OnRep_ReplicatedPhysAsset, "OnRep_ReplicatedPhysAsset" }, // 3721170626
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChildCanTick", "" },
				{ "ClassGroupNames", "ISkeletalMeshes" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "Animation/SkeletalMeshActor.h" },
				{ "IsBlueprintBase", "true" },
				{ "IsConversionRoot", "true" },
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
				{ "ToolTip", "SkeletalMeshActor is an instance of a USkeletalMesh in the world.\nSkeletal meshes are deformable meshes that can be animated and change their geometry at run-time.\nSkeletal meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/\n@see USkeletalMesh" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMaterial1_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedMaterial1 = { UE4CodeGen_Private::EPropertyClass::Object, "ReplicatedMaterial1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_ReplicatedMaterial1", STRUCT_OFFSET(ASkeletalMeshActor, ReplicatedMaterial1), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_ReplicatedMaterial1_MetaData, ARRAY_COUNT(NewProp_ReplicatedMaterial1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMaterial0_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
				{ "ToolTip", "used to replicate the material in index 0" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedMaterial0 = { UE4CodeGen_Private::EPropertyClass::Object, "ReplicatedMaterial0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100000020, 1, "OnRep_ReplicatedMaterial0", STRUCT_OFFSET(ASkeletalMeshActor, ReplicatedMaterial0), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_ReplicatedMaterial0_MetaData, ARRAY_COUNT(NewProp_ReplicatedMaterial0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedPhysAsset_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
				{ "ToolTip", "Used to replicate physics asset to clients" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedPhysAsset = { UE4CodeGen_Private::EPropertyClass::Object, "ReplicatedPhysAsset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100002020, 1, "OnRep_ReplicatedPhysAsset", STRUCT_OFFSET(ASkeletalMeshActor, ReplicatedPhysAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(NewProp_ReplicatedPhysAsset_MetaData, ARRAY_COUNT(NewProp_ReplicatedPhysAsset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
				{ "ToolTip", "Used to replicate mesh to clients" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedMesh = { UE4CodeGen_Private::EPropertyClass::Object, "ReplicatedMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000100002020, 1, "OnRep_ReplicatedMesh", STRUCT_OFFSET(ASkeletalMeshActor, ReplicatedMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_ReplicatedMesh_MetaData, ARRAY_COUNT(NewProp_ReplicatedMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "SkeletalMeshActor" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Mesh,Components|SkeletalMesh,Animation,Physics" },
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ASkeletalMeshActor, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWakeOnLevelStart_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
			};
#endif
			auto NewProp_bWakeOnLevelStart_SetBit = [](void* Obj){ ((ASkeletalMeshActor*)Obj)->bWakeOnLevelStart_DEPRECATED = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWakeOnLevelStart = { UE4CodeGen_Private::EPropertyClass::Bool, "bWakeOnLevelStart", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ASkeletalMeshActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWakeOnLevelStart_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWakeOnLevelStart_MetaData, ARRAY_COUNT(NewProp_bWakeOnLevelStart_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldDoAnimNotifies_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Classes/Animation/SkeletalMeshActor.h" },
				{ "ToolTip", "Whether or not this actor should respond to anim notifies - CURRENTLY ONLY AFFECTS PlayParticleEffect NOTIFIES*" },
			};
#endif
			auto NewProp_bShouldDoAnimNotifies_SetBit = [](void* Obj){ ((ASkeletalMeshActor*)Obj)->bShouldDoAnimNotifies = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDoAnimNotifies = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldDoAnimNotifies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(ASkeletalMeshActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShouldDoAnimNotifies_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShouldDoAnimNotifies_MetaData, ARRAY_COUNT(NewProp_bShouldDoAnimNotifies_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedMaterial1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedMaterial0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedPhysAsset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReplicatedMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWakeOnLevelStart,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShouldDoAnimNotifies,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UMatineeAnimInterface_NoRegister, (int32)VTABLE_OFFSET(ASkeletalMeshActor, IMatineeAnimInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASkeletalMeshActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASkeletalMeshActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASkeletalMeshActor, 3970067771);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASkeletalMeshActor(Z_Construct_UClass_ASkeletalMeshActor, &ASkeletalMeshActor::StaticClass, TEXT("/Script/Engine"), TEXT("ASkeletalMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkeletalMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
