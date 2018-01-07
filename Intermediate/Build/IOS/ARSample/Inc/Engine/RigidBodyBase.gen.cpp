// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/RigidBodyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigidBodyBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ARigidBodyBase::StaticRegisterNativesARigidBodyBase()
	{
	}
	UClass* Z_Construct_UClass_ARigidBodyBase_NoRegister()
	{
		return ARigidBodyBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ARigidBodyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "Physics" },
				{ "IncludePath", "PhysicsEngine/RigidBodyBase.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RigidBodyBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARigidBodyBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARigidBodyBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARigidBodyBase, 206120826);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARigidBodyBase(Z_Construct_UClass_ARigidBodyBase, &ARigidBodyBase::StaticClass, TEXT("/Script/Engine"), TEXT("ARigidBodyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARigidBodyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
