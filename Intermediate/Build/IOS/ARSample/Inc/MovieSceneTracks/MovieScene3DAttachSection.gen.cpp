// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Sections/MovieScene3DAttachSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieScene3DAttachSection() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DAttachSection();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieScene3DConstraintSection();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetachmentRule();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
// End Cross Module References
	void UMovieScene3DAttachSection::StaticRegisterNativesUMovieScene3DAttachSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieScene3DAttachSection_NoRegister()
	{
		return UMovieScene3DAttachSection::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieScene3DAttachSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieScene3DConstraintSection,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sections/MovieScene3DAttachSection.h" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
				{ "ToolTip", "A 3D Attach section" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentScaleRule_MetaData[] = {
				{ "Category", "Attach" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentScaleRule = { UE4CodeGen_Private::EPropertyClass::Enum, "DetachmentScaleRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentScaleRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(NewProp_DetachmentScaleRule_MetaData, ARRAY_COUNT(NewProp_DetachmentScaleRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentScaleRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentRotationRule_MetaData[] = {
				{ "Category", "Attach" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentRotationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "DetachmentRotationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentRotationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(NewProp_DetachmentRotationRule_MetaData, ARRAY_COUNT(NewProp_DetachmentRotationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentRotationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachmentLocationRule_MetaData[] = {
				{ "Category", "Attach" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DetachmentLocationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "DetachmentLocationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, DetachmentLocationRule), Z_Construct_UEnum_Engine_EDetachmentRule, METADATA_PARAMS(NewProp_DetachmentLocationRule_MetaData, ARRAY_COUNT(NewProp_DetachmentLocationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetachmentLocationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentScaleRule_MetaData[] = {
				{ "Category", "Attach" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentScaleRule = { UE4CodeGen_Private::EPropertyClass::Enum, "AttachmentScaleRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(NewProp_AttachmentScaleRule_MetaData, ARRAY_COUNT(NewProp_AttachmentScaleRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentScaleRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentRotationRule_MetaData[] = {
				{ "Category", "Attach" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentRotationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "AttachmentRotationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentRotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(NewProp_AttachmentRotationRule_MetaData, ARRAY_COUNT(NewProp_AttachmentRotationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentRotationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentLocationRule_MetaData[] = {
				{ "Category", "Attach" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AttachmentLocationRule = { UE4CodeGen_Private::EPropertyClass::Enum, "AttachmentLocationRule", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachmentLocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(NewProp_AttachmentLocationRule_MetaData, ARRAY_COUNT(NewProp_AttachmentLocationRule_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttachmentLocationRule_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachComponentName_MetaData[] = {
				{ "Category", "Attach" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachComponentName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachComponentName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachComponentName), METADATA_PARAMS(NewProp_AttachComponentName_MetaData, ARRAY_COUNT(NewProp_AttachComponentName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
				{ "Category", "Attach" },
				{ "ModuleRelativePath", "Public/Sections/MovieScene3DAttachSection.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMovieScene3DAttachSection, AttachSocketName), METADATA_PARAMS(NewProp_AttachSocketName_MetaData, ARRAY_COUNT(NewProp_AttachSocketName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentScaleRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentScaleRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentRotationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentRotationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentLocationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DetachmentLocationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentScaleRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentScaleRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentRotationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentRotationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentLocationRule,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachmentLocationRule_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachComponentName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AttachSocketName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieScene3DAttachSection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieScene3DAttachSection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00280080u,
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
	IMPLEMENT_CLASS(UMovieScene3DAttachSection, 1681160129);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieScene3DAttachSection(Z_Construct_UClass_UMovieScene3DAttachSection, &UMovieScene3DAttachSection::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieScene3DAttachSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieScene3DAttachSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
