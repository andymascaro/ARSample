// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/ChildConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChildConnection() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChildConnection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildConnection();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
// End Cross Module References
	void UChildConnection::StaticRegisterNativesUChildConnection()
	{
	}
	UClass* Z_Construct_UClass_UChildConnection_NoRegister()
	{
		return UChildConnection::StaticClass();
	}
	UClass* Z_Construct_UClass_UChildConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNetConnection,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/ChildConnection.h" },
				{ "ModuleRelativePath", "Classes/Engine/ChildConnection.h" },
				{ "ToolTip", "Represents a secondary split screen connection that reroutes calls to the parent connection." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/ChildConnection.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Parent = { UE4CodeGen_Private::EPropertyClass::Object, "Parent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UChildConnection, Parent), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(NewProp_Parent_MetaData, ARRAY_COUNT(NewProp_Parent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Parent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UChildConnection>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UChildConnection::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0008008Cu,
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
	IMPLEMENT_CLASS(UChildConnection, 3156468741);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChildConnection(Z_Construct_UClass_UChildConnection, &UChildConnection::StaticClass, TEXT("/Script/Engine"), TEXT("UChildConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChildConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
