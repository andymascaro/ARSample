// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/LevelCapture.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelCapture() {}
// Cross Module References
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_ULevelCapture_NoRegister();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_ULevelCapture();
	MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneCapture();
	UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void ULevelCapture::StaticRegisterNativesULevelCapture()
	{
	}
	UClass* Z_Construct_UClass_ULevelCapture_NoRegister()
	{
		return ULevelCapture::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelCapture()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMovieSceneCapture,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LevelCapture.h" },
				{ "ModuleRelativePath", "Public/LevelCapture.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrerequisiteActorId_MetaData[] = {
				{ "ModuleRelativePath", "Public/LevelCapture.h" },
				{ "ToolTip", "Copy of the ID from PrerequisiteActor. Required because JSON serialization exports the path of the object, rather that its GUID" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrerequisiteActorId = { UE4CodeGen_Private::EPropertyClass::Struct, "PrerequisiteActorId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(ULevelCapture, PrerequisiteActorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_PrerequisiteActorId_MetaData, ARRAY_COUNT(NewProp_PrerequisiteActorId_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoStartCapture_MetaData[] = {
				{ "Category", "General" },
				{ "ModuleRelativePath", "Public/LevelCapture.h" },
				{ "ToolTip", "Specifies whether the capture should start immediately, or whether it will be invoked externally (through StartMovieCapture/StopMovieCapture exec commands)" },
			};
#endif
			auto NewProp_bAutoStartCapture_SetBit = [](void* Obj){ ((ULevelCapture*)Obj)->bAutoStartCapture = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoStartCapture = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoStartCapture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ULevelCapture), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoStartCapture_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoStartCapture_MetaData, ARRAY_COUNT(NewProp_bAutoStartCapture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrerequisiteActorId,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoStartCapture,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelCapture>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelCapture::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"EditorPerProjectUserSettings",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelCapture, 3403088315);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelCapture(Z_Construct_UClass_ULevelCapture, &ULevelCapture::StaticClass, TEXT("/Script/MovieSceneCapture"), TEXT("ULevelCapture"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelCapture);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
