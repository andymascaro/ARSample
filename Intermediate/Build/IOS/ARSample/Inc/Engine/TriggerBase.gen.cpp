// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/TriggerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
// End Cross Module References
	void ATriggerBase::StaticRegisterNativesATriggerBase()
	{
	}
	UClass* Z_Construct_UClass_ATriggerBase_NoRegister()
	{
		return ATriggerBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ATriggerBase()
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
				{ "ClassGroupNames", "Common" },
				{ "IncludePath", "Engine/TriggerBase.h" },
				{ "IsConversionRoot", "true" },
				{ "ModuleRelativePath", "Classes/Engine/TriggerBase.h" },
				{ "ToolTip", "An actor used to generate collision events (begin/end overlap) in the level." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/TriggerBase.h" },
				{ "ToolTip", "Billboard used to see the trigger in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ATriggerBase, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "TriggerBase" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Engine/TriggerBase.h" },
				{ "ToolTip", "Shape component used for collision" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ATriggerBase, CollisionComponent), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(NewProp_CollisionComponent_MetaData, ARRAY_COUNT(NewProp_CollisionComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CollisionComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATriggerBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATriggerBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880081u,
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
	IMPLEMENT_CLASS(ATriggerBase, 3882258055);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerBase(Z_Construct_UClass_ATriggerBase, &ATriggerBase::StaticClass, TEXT("/Script/Engine"), TEXT("ATriggerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
