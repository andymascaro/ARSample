// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Atmosphere/AtmosphericFog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtmosphericFog() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AAtmosphericFog();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister();
// End Cross Module References
	void AAtmosphericFog::StaticRegisterNativesAAtmosphericFog()
	{
	}
	UClass* Z_Construct_UClass_AAtmosphericFog_NoRegister()
	{
		return AAtmosphericFog::StaticClass();
	}
	UClass* Z_Construct_UClass_AAtmosphericFog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AInfo,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "Fog" },
				{ "HideCategories", "Info Object Input Input Collision" },
				{ "IncludePath", "Atmosphere/AtmosphericFog.h" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
				{ "ToolTip", "A placeable fog actor that simulates atmospheric light scattering\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/FogEffects/AtmosphericFog/index.html" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
				{ "ToolTip", "Arrow component to indicate default sun rotation" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ArrowComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(AAtmosphericFog, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(NewProp_ArrowComponent_MetaData, ARRAY_COUNT(NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphericFogComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Atmosphere" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFog.h" },
				{ "ToolTip", "Main fog component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AtmosphericFogComponent = { UE4CodeGen_Private::EPropertyClass::Object, "AtmosphericFogComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AAtmosphericFog, AtmosphericFogComponent), Z_Construct_UClass_UAtmosphericFogComponent_NoRegister, METADATA_PARAMS(NewProp_AtmosphericFogComponent_MetaData, ARRAY_COUNT(NewProp_AtmosphericFogComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AtmosphericFogComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAtmosphericFog>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAtmosphericFog::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(AAtmosphericFog, 891335206);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtmosphericFog(Z_Construct_UClass_AAtmosphericFog, &AAtmosphericFog::StaticClass, TEXT("/Script/Engine"), TEXT("AAtmosphericFog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtmosphericFog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
