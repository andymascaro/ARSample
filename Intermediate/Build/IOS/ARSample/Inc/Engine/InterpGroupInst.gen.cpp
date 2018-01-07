// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpGroupInst.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpGroupInst() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroupInst();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpGroup_NoRegister();
// End Cross Module References
	void UInterpGroupInst::StaticRegisterNativesUInterpGroupInst()
	{
	}
	UClass* Z_Construct_UClass_UInterpGroupInst_NoRegister()
	{
		return UInterpGroupInst::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpGroupInst()
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
				{ "IncludePath", "Matinee/InterpGroupInst.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackInst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
				{ "ToolTip", "Array if InterpTrack instances. TrackInst.Num() == UInterpGroup.InterpTrack.Num() must be true." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackInst = { UE4CodeGen_Private::EPropertyClass::Array, "TrackInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpGroupInst, TrackInst), METADATA_PARAMS(NewProp_TrackInst_MetaData, ARRAY_COUNT(NewProp_TrackInst_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackInst_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TrackInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UInterpTrackInst_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
				{ "ToolTip", "Actor that this Group instance is acting upon.\nNB: that this may be set to NULL at any time as a result of the  AActor  being destroyed." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GroupActor = { UE4CodeGen_Private::EPropertyClass::Object, "GroupActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpGroupInst, GroupActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_GroupActor_MetaData, ARRAY_COUNT(NewProp_GroupActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpGroupInst.h" },
				{ "ToolTip", "UInterpGroup within the InterpData that this is an instance of." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Group = { UE4CodeGen_Private::EPropertyClass::Object, "Group", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpGroupInst, Group), Z_Construct_UClass_UInterpGroup_NoRegister, METADATA_PARAMS(NewProp_Group_MetaData, ARRAY_COUNT(NewProp_Group_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackInst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrackInst_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GroupActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Group,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpGroupInst>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpGroupInst::StaticClass,
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
	IMPLEMENT_CLASS(UInterpGroupInst, 2919212945);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpGroupInst(Z_Construct_UClass_UInterpGroupInst, &UInterpGroupInst::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpGroupInst"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpGroupInst);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
