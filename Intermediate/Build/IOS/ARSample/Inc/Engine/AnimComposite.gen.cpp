// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Animation/AnimComposite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimComposite() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimComposite_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimComposite();
	ENGINE_API UClass* Z_Construct_UClass_UAnimCompositeBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimTrack();
// End Cross Module References
	void UAnimComposite::StaticRegisterNativesUAnimComposite()
	{
	}
	UClass* Z_Construct_UClass_UAnimComposite_NoRegister()
	{
		return UAnimComposite::StaticClass();
	}
	UClass* Z_Construct_UClass_UAnimComposite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UAnimCompositeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "UObject" },
				{ "IncludePath", "Animation/AnimComposite.h" },
				{ "ModuleRelativePath", "Classes/Animation/AnimComposite.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewBasePose_MetaData[] = {
				{ "Category", "AdditiveSettings" },
				{ "ModuleRelativePath", "Classes/Animation/AnimComposite.h" },
				{ "ToolTip", "Preview Base pose for additive BlendSpace *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewBasePose = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewBasePose", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UAnimComposite, PreviewBasePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(NewProp_PreviewBasePose_MetaData, ARRAY_COUNT(NewProp_PreviewBasePose_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationTrack_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Animation/AnimComposite.h" },
				{ "ToolTip", "Serializable data that stores section/anim pairing *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationTrack = { UE4CodeGen_Private::EPropertyClass::Struct, "AnimationTrack", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UAnimComposite, AnimationTrack), Z_Construct_UScriptStruct_FAnimTrack, METADATA_PARAMS(NewProp_AnimationTrack_MetaData, ARRAY_COUNT(NewProp_AnimationTrack_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewBasePose,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimationTrack,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAnimComposite>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAnimComposite::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimComposite, 3944169935);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimComposite(Z_Construct_UClass_UAnimComposite, &UAnimComposite::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimComposite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimComposite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
