// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/PlayerStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStart() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	void APlayerStart::StaticRegisterNativesAPlayerStart()
	{
	}
	UClass* Z_Construct_UClass_APlayerStart_NoRegister()
	{
		return APlayerStart::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayerStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ANavigationObjectBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Common" },
				{ "HideCategories", "Collision Lighting LightColor Force" },
				{ "IncludePath", "GameFramework/PlayerStart.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerStart.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
				{ "ToolTip", "This class indicates a location where a player can spawn when the game begins\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/PlayerStart/" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerStart.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(APlayerStart, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(NewProp_ArrowComponent_MetaData, ARRAY_COUNT(NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStartTag_MetaData[] = {
				{ "Category", "Object" },
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerStart.h" },
				{ "ToolTip", "Used when searching for which playerstart to use." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerStartTag = { UE4CodeGen_Private::EPropertyClass::Name, "PlayerStartTag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(APlayerStart, PlayerStartTag), METADATA_PARAMS(NewProp_PlayerStartTag_MetaData, ARRAY_COUNT(NewProp_PlayerStartTag_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerStartTag,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APlayerStart>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APlayerStart::StaticClass,
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
	IMPLEMENT_CLASS(APlayerStart, 1263380666);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerStart(Z_Construct_UClass_APlayerStart, &APlayerStart::StaticClass, TEXT("/Script/Engine"), TEXT("APlayerStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
