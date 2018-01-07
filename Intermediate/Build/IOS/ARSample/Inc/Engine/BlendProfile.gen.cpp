// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/BlendProfile.h"
#include "Classes/Animation/Skeleton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendProfile() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBlendProfileBoneEntry();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
class UScriptStruct* FBlendProfileBoneEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendProfileBoneEntry, Z_Construct_UPackage__Script_Engine(), TEXT("BlendProfileBoneEntry"), sizeof(FBlendProfileBoneEntry), Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlendProfileBoneEntry(FBlendProfileBoneEntry::StaticStruct, TEXT("/Script/Engine"), TEXT("BlendProfileBoneEntry"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBlendProfileBoneEntry
{
	FScriptStruct_Engine_StaticRegisterNativesFBlendProfileBoneEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlendProfileBoneEntry")),new UScriptStruct::TCppStructOps<FBlendProfileBoneEntry>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBlendProfileBoneEntry;
	UScriptStruct* Z_Construct_UScriptStruct_FBlendProfileBoneEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlendProfileBoneEntry"), sizeof(FBlendProfileBoneEntry), Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
				{ "ToolTip", "A single entry for a blend scale within a profile, mapping a bone to a blendscale" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendProfileBoneEntry>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendScale_MetaData[] = {
				{ "Category", "BoneSettings" },
				{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendScale = { UE4CodeGen_Private::EPropertyClass::Float, "BlendScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendProfileBoneEntry, BlendScale), METADATA_PARAMS(NewProp_BlendScale_MetaData, ARRAY_COUNT(NewProp_BlendScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneReference_MetaData[] = {
				{ "Category", "BoneSettings" },
				{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneReference = { UE4CodeGen_Private::EPropertyClass::Struct, "BoneReference", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FBlendProfileBoneEntry, BoneReference), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(NewProp_BoneReference_MetaData, ARRAY_COUNT(NewProp_BoneReference_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneReference,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BlendProfileBoneEntry",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBlendProfileBoneEntry),
				alignof(FBlendProfileBoneEntry),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlendProfileBoneEntry_CRC() { return 2286291556U; }
	void UBlendProfile::StaticRegisterNativesUBlendProfile()
	{
	}
	UClass* Z_Construct_UClass_UBlendProfile_NoRegister()
	{
		return UBlendProfile::StaticClass();
	}
	UClass* Z_Construct_UClass_UBlendProfile()
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
				{ "IncludePath", "Animation/BlendProfile.h" },
				{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
				{ "ToolTip", "A blend profile is a set of per-bone scales that can be used in transitions and blend lists\nto tweak the weights of specific bones. The scales are applied to the normal weight for that bone" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProfileEntries_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
				{ "ToolTip", "List of blend scale entries" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProfileEntries = { UE4CodeGen_Private::EPropertyClass::Array, "ProfileEntries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlendProfile, ProfileEntries), METADATA_PARAMS(NewProp_ProfileEntries_MetaData, ARRAY_COUNT(NewProp_ProfileEntries_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProfileEntries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ProfileEntries", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBlendProfileBoneEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningSkeleton_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/BlendProfile.h" },
				{ "ToolTip", "The skeleton that owns this profile" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningSkeleton = { UE4CodeGen_Private::EPropertyClass::Object, "OwningSkeleton", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UBlendProfile, OwningSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(NewProp_OwningSkeleton_MetaData, ARRAY_COUNT(NewProp_OwningSkeleton_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProfileEntries,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProfileEntries_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwningSkeleton,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBlendProfile>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBlendProfile::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UBlendProfile, 3336487163);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlendProfile(Z_Construct_UClass_UBlendProfile, &UBlendProfile::StaticClass, TEXT("/Script/Engine"), TEXT("UBlendProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
