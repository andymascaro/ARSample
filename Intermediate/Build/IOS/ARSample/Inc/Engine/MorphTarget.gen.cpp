// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/MorphTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMorphTarget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	void UMorphTarget::StaticRegisterNativesUMorphTarget()
	{
	}
	UClass* Z_Construct_UClass_UMorphTarget_NoRegister()
	{
		return UMorphTarget::StaticClass();
	}
	UClass* Z_Construct_UClass_UMorphTarget()
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
				{ "HideCategories", "Object" },
				{ "IncludePath", "Animation/MorphTarget.h" },
				{ "ModuleRelativePath", "Classes/Animation/MorphTarget.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSkelMesh_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/MorphTarget.h" },
				{ "ToolTip", "USkeletalMesh that this vertex animation works on." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseSkelMesh = { UE4CodeGen_Private::EPropertyClass::Object, "BaseSkelMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010010000000000, 1, nullptr, STRUCT_OFFSET(UMorphTarget, BaseSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_BaseSkelMesh_MetaData, ARRAY_COUNT(NewProp_BaseSkelMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseSkelMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMorphTarget>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMorphTarget::StaticClass,
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
	IMPLEMENT_CLASS(UMorphTarget, 1110961643);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMorphTarget(Z_Construct_UClass_UMorphTarget, &UMorphTarget::StaticClass, TEXT("/Script/Engine"), TEXT("UMorphTarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMorphTarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
