// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/StaticMeshSocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshSocket() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshSocket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UStaticMeshSocket::StaticRegisterNativesUStaticMeshSocket()
	{
	}
	UClass* Z_Construct_UClass_UStaticMeshSocket_NoRegister()
	{
		return UStaticMeshSocket::StaticClass();
	}
	UClass* Z_Construct_UClass_UStaticMeshSocket()
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
				{ "HideCategories", "Object Actor" },
				{ "IncludePath", "Engine/StaticMeshSocket.h" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSocketCreatedAtImport_MetaData[] = {
				{ "Category", "StaticMeshSocket" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
				{ "ToolTip", "Weather the socket was imported with the asset or create in the editor. Importer will remove/modify only imported socket and will not touch any editor created socket." },
			};
#endif
			auto NewProp_bSocketCreatedAtImport_SetBit = [](void* Obj){ ((UStaticMeshSocket*)Obj)->bSocketCreatedAtImport = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSocketCreatedAtImport = { UE4CodeGen_Private::EPropertyClass::Bool, "bSocketCreatedAtImport", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040800020001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UStaticMeshSocket), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSocketCreatedAtImport_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSocketCreatedAtImport_MetaData, ARRAY_COUNT(NewProp_bSocketCreatedAtImport_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewStaticMesh_MetaData[] = {
				{ "Category", "StaticMeshSocket" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewStaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PreviewStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UStaticMeshSocket, PreviewStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_PreviewStaticMesh_MetaData, ARRAY_COUNT(NewProp_PreviewStaticMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
				{ "Category", "StaticMeshSocket" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Str, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UStaticMeshSocket, Tag), METADATA_PARAMS(NewProp_Tag_MetaData, ARRAY_COUNT(NewProp_Tag_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[] = {
				{ "Category", "StaticMeshSocket" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeScale = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UStaticMeshSocket, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RelativeScale_MetaData, ARRAY_COUNT(NewProp_RelativeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[] = {
				{ "Category", "StaticMeshSocket" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UStaticMeshSocket, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_RelativeRotation_MetaData, ARRAY_COUNT(NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[] = {
				{ "Category", "StaticMeshSocket" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UStaticMeshSocket, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RelativeLocation_MetaData, ARRAY_COUNT(NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
				{ "Category", "StaticMeshSocket" },
				{ "ModuleRelativePath", "Classes/Engine/StaticMeshSocket.h" },
				{ "ToolTip", "Defines a named attachment location on the UStaticMesh.\nThese are set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the StaticMeshComponent.\nThe Outer of a StaticMeshSocket should always be the UStaticMesh." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000014, 1, nullptr, STRUCT_OFFSET(UStaticMeshSocket, SocketName), METADATA_PARAMS(NewProp_SocketName_MetaData, ARRAY_COUNT(NewProp_SocketName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSocketCreatedAtImport,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewStaticMesh,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStaticMeshSocket>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStaticMeshSocket::StaticClass,
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
	IMPLEMENT_CLASS(UStaticMeshSocket, 2369425669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStaticMeshSocket(Z_Construct_UClass_UStaticMeshSocket, &UStaticMeshSocket::StaticClass, TEXT("/Script/Engine"), TEXT("UStaticMeshSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshSocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
