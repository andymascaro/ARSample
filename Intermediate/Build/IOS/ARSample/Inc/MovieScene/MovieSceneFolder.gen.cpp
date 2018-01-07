// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MovieSceneFolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneFolder() {}
// Cross Module References
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneFolder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MovieScene();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneTrack_NoRegister();
// End Cross Module References
	void UMovieSceneFolder::StaticRegisterNativesUMovieSceneFolder()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneFolder_NoRegister()
	{
		return UMovieSceneFolder::StaticClass();
	}
	UClass* Z_Construct_UClass_UMovieSceneFolder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MovieScene,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MovieSceneFolder.h" },
				{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
				{ "ToolTip", "Reprents a folder used for organizing objects in tracks in a movie scene." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderColor_MetaData[] = {
				{ "Category", "General" },
				{ "DisplayName", "Color" },
				{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
				{ "ToolTip", "This folder's color" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FolderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "FolderColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800000001, 1, nullptr, STRUCT_OFFSET(UMovieSceneFolder, FolderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_FolderColor_MetaData, ARRAY_COUNT(NewProp_FolderColor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildObjectBindingStrings_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
				{ "ToolTip", "The guid strings used to serialize the guids for the object bindings contained by this folder." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildObjectBindingStrings = { UE4CodeGen_Private::EPropertyClass::Array, "ChildObjectBindingStrings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneFolder, ChildObjectBindingStrings), METADATA_PARAMS(NewProp_ChildObjectBindingStrings_MetaData, ARRAY_COUNT(NewProp_ChildObjectBindingStrings_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ChildObjectBindingStrings_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ChildObjectBindingStrings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildMasterTracks_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
				{ "ToolTip", "The master tracks contained by this folder." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildMasterTracks = { UE4CodeGen_Private::EPropertyClass::Array, "ChildMasterTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneFolder, ChildMasterTracks), METADATA_PARAMS(NewProp_ChildMasterTracks_MetaData, ARRAY_COUNT(NewProp_ChildMasterTracks_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildMasterTracks_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ChildMasterTracks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneTrack_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildFolders_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
				{ "ToolTip", "The folders contained by this folder." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildFolders = { UE4CodeGen_Private::EPropertyClass::Array, "ChildFolders", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneFolder, ChildFolders), METADATA_PARAMS(NewProp_ChildFolders_MetaData, ARRAY_COUNT(NewProp_ChildFolders_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildFolders_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ChildFolders", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[] = {
				{ "ModuleRelativePath", "Public/MovieSceneFolder.h" },
				{ "ToolTip", "The name of this folder." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_FolderName = { UE4CodeGen_Private::EPropertyClass::Name, "FolderName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneFolder, FolderName), METADATA_PARAMS(NewProp_FolderName_MetaData, ARRAY_COUNT(NewProp_FolderName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FolderColor,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildObjectBindingStrings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildObjectBindingStrings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildMasterTracks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildMasterTracks_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildFolders,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildFolders_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FolderName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMovieSceneFolder>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMovieSceneFolder::StaticClass,
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
	IMPLEMENT_CLASS(UMovieSceneFolder, 337110010);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneFolder(Z_Construct_UClass_UMovieSceneFolder, &UMovieSceneFolder::StaticClass, TEXT("/Script/MovieScene"), TEXT("UMovieSceneFolder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneFolder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
