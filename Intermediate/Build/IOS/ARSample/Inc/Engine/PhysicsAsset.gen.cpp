// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/PhysicsAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAsset() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationProfile();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationData();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalBodySetup();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup();
// End Cross Module References
class UScriptStruct* FPhysicalAnimationProfile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalAnimationProfile, Z_Construct_UPackage__Script_Engine(), TEXT("PhysicalAnimationProfile"), sizeof(FPhysicalAnimationProfile), Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhysicalAnimationProfile(FPhysicalAnimationProfile::StaticStruct, TEXT("/Script/Engine"), TEXT("PhysicalAnimationProfile"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationProfile
{
	FScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationProfile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhysicalAnimationProfile")),new UScriptStruct::TCppStructOps<FPhysicalAnimationProfile>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFPhysicalAnimationProfile;
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicalAnimationProfile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhysicalAnimationProfile"), sizeof(FPhysicalAnimationProfile), Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicalAnimationProfile>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "Physical animation parameters used to drive animation" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalAnimationData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationProfile, PhysicalAnimationData), Z_Construct_UScriptStruct_FPhysicalAnimationData, METADATA_PARAMS(NewProp_PhysicalAnimationData_MetaData, ARRAY_COUNT(NewProp_PhysicalAnimationData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "Profile name used to identify set of physical animation parameters" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "ProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPhysicalAnimationProfile, ProfileName), METADATA_PARAMS(NewProp_ProfileName_MetaData, ARRAY_COUNT(NewProp_ProfileName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalAnimationData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProfileName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PhysicalAnimationProfile",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPhysicalAnimationProfile),
				alignof(FPhysicalAnimationProfile),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhysicalAnimationProfile_CRC() { return 3634503421U; }
	void UPhysicsAsset::StaticRegisterNativesUPhysicsAsset()
	{
	}
	UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister()
	{
		return UPhysicsAsset::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicsAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "PhysicsEngine/PhysicsAsset.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "PhysicsAsset contains a set of rigid bodies and constraints that make up a single ragdoll.\nThe asset is not limited to human ragdolls, and can be used for any physical simulation using bodies and constraints.\nA SkeletalMesh has a single PhysicsAsset, which allows for easily turning ragdoll physics on or off for many SkeletalMeshComponents\nThe asset can be configured inside the Physics Asset Editor.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Physics/PhAT/Reference/index.html\n@see USkeletalMesh" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BodySetup = { UE4CodeGen_Private::EPropertyClass::Array, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008020000008, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, BodySetup_DEPRECATED), METADATA_PARAMS(NewProp_BodySetup_MetaData, ARRAY_COUNT(NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000020080008, 1, nullptr, 0, Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(NewProp_BodySetup_Inner_MetaData, ARRAY_COUNT(NewProp_BodySetup_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[] = {
				{ "Category", "Thumbnail" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "Information for thumbnail rendering" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x00120000000a0009, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(NewProp_ThumbnailInfo_MetaData, ARRAY_COUNT(NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAsyncScene_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "If true, bodies of the physics asset will be put into the asynchronous physics scene. If false, they will be put into the synchronous physics scene." },
			};
#endif
			auto NewProp_bUseAsyncScene_SetBit = [](void* Obj){ ((UPhysicsAsset*)Obj)->bUseAsyncScene = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAsyncScene = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAsyncScene", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPhysicsAsset), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseAsyncScene_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseAsyncScene_MetaData, ARRAY_COUNT(NewProp_bUseAsyncScene_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "Array of RB_ConstraintSetup objects.\nStores information about a joint between two bodies, such as position relative to each body, joint limits etc." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstraintSetup = { UE4CodeGen_Private::EPropertyClass::Array, "ConstraintSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, ConstraintSetup), METADATA_PARAMS(NewProp_ConstraintSetup_MetaData, ARRAY_COUNT(NewProp_ConstraintSetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "Array of RB_ConstraintSetup objects.\nStores information about a joint between two bodies, such as position relative to each body, joint limits etc." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConstraintSetup_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ConstraintSetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_UPhysicsConstraintTemplate_NoRegister, METADATA_PARAMS(NewProp_ConstraintSetup_Inner_MetaData, ARRAY_COUNT(NewProp_ConstraintSetup_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalBodySetups_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\nDoes not include body position - those are taken from mesh." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkeletalBodySetups = { UE4CodeGen_Private::EPropertyClass::Array, "SkeletalBodySetups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000008, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, SkeletalBodySetups), METADATA_PARAMS(NewProp_SkeletalBodySetups_MetaData, ARRAY_COUNT(NewProp_SkeletalBodySetups_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalBodySetups_Inner_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "Array of SkeletalBodySetup objects. Stores information about collision shape etc. for each body.\nDoes not include body position - those are taken from mesh." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalBodySetups_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalBodySetups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0002000000080008, 1, nullptr, 0, Z_Construct_UClass_USkeletalBodySetup_NoRegister, METADATA_PARAMS(NewProp_SkeletalBodySetups_Inner_MetaData, ARRAY_COUNT(NewProp_SkeletalBodySetups_Inner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundsBodies_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "Index of bodies that are marked bConsiderForBounds" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoundsBodies = { UE4CodeGen_Private::EPropertyClass::Array, "BoundsBodies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, BoundsBodies), METADATA_PARAMS(NewProp_BoundsBodies_MetaData, ARRAY_COUNT(NewProp_BoundsBodies_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_BoundsBodies_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "BoundsBodies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentConstraintProfileName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentConstraintProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "CurrentConstraintProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, CurrentConstraintProfileName), METADATA_PARAMS(NewProp_CurrentConstraintProfileName_MetaData, ARRAY_COUNT(NewProp_CurrentConstraintProfileName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPhysicalAnimationProfileName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentPhysicalAnimationProfileName = { UE4CodeGen_Private::EPropertyClass::Name, "CurrentPhysicalAnimationProfileName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, CurrentPhysicalAnimationProfileName), METADATA_PARAMS(NewProp_CurrentPhysicalAnimationProfileName_MetaData, ARRAY_COUNT(NewProp_CurrentPhysicalAnimationProfileName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstraintProfiles_MetaData[] = {
				{ "Category", "Profiles" },
				{ "DisableCopyPaste", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConstraintProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "ConstraintProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, ConstraintProfiles), METADATA_PARAMS(NewProp_ConstraintProfiles_MetaData, ARRAY_COUNT(NewProp_ConstraintProfiles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ConstraintProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ConstraintProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationProfiles_MetaData[] = {
				{ "Category", "Profiles" },
				{ "DisableCopyPaste", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalAnimationProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "PhysicalAnimationProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, PhysicalAnimationProfiles), METADATA_PARAMS(NewProp_PhysicalAnimationProfiles_MetaData, ARRAY_COUNT(NewProp_PhysicalAnimationProfiles_MetaData)) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PhysicalAnimationProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "PhysicalAnimationProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh = { UE4CodeGen_Private::EPropertyClass::SoftObject, "PreviewSkeletalMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014010800000000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_PreviewSkeletalMesh_MetaData, ARRAY_COUNT(NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSkelMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "Default skeletal mesh to use when previewing this PhysicsAsset etc.\nIs the one that was used as the basis for creating this Asset." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSkelMesh = { UE4CodeGen_Private::EPropertyClass::Object, "DefaultSkelMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UPhysicsAsset, DefaultSkelMesh_DEPRECATED), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_DefaultSkelMesh_MetaData, ARRAY_COUNT(NewProp_DefaultSkelMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodySetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodySetup_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseAsyncScene,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintSetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintSetup_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalBodySetups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkeletalBodySetups_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundsBodies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoundsBodies_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentConstraintProfileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentPhysicalAnimationProfileName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintProfiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstraintProfiles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalAnimationProfiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalAnimationProfiles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewSkeletalMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultSkelMesh,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicsAsset>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicsAsset::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UPhysicsAsset, 4090242882);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsAsset(Z_Construct_UClass_UPhysicsAsset, &UPhysicsAsset::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAsset);
	void USkeletalBodySetup::StaticRegisterNativesUSkeletalBodySetup()
	{
	}
	UClass* Z_Construct_UClass_USkeletalBodySetup_NoRegister()
	{
		return USkeletalBodySetup::StaticClass();
	}
	UClass* Z_Construct_UClass_USkeletalBodySetup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBodySetup,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PhysicsEngine/PhysicsAsset.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalAnimationData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PhysicalAnimationData = { UE4CodeGen_Private::EPropertyClass::Array, "PhysicalAnimationData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(USkeletalBodySetup, PhysicalAnimationData), METADATA_PARAMS(NewProp_PhysicalAnimationData_MetaData, ARRAY_COUNT(NewProp_PhysicalAnimationData_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicalAnimationData_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "PhysicalAnimationData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPhysicalAnimationProfile, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPhysicalAnimationProfile_MetaData[] = {
				{ "Category", "PhysicalAnimation" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsAsset.h" },
				{ "ToolTip", "dummy place for customization inside phat. Profiles are ordered dynamically and we need a static place for detail customization" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentPhysicalAnimationProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentPhysicalAnimationProfile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(USkeletalBodySetup, CurrentPhysicalAnimationProfile), Z_Construct_UScriptStruct_FPhysicalAnimationProfile, METADATA_PARAMS(NewProp_CurrentPhysicalAnimationProfile_MetaData, ARRAY_COUNT(NewProp_CurrentPhysicalAnimationProfile_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalAnimationData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhysicalAnimationData_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentPhysicalAnimationProfile,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USkeletalBodySetup>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USkeletalBodySetup::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(USkeletalBodySetup, 1519477551);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalBodySetup(Z_Construct_UClass_USkeletalBodySetup, &USkeletalBodySetup::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalBodySetup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalBodySetup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
