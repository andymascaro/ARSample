// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LandscapeInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeInfo() {}
// Cross Module References
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
// End Cross Module References
class UScriptStruct* FLandscapeInfoLayerSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeInfoLayerSettings"), sizeof(FLandscapeInfoLayerSettings), Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeInfoLayerSettings(FLandscapeInfoLayerSettings::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeInfoLayerSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeInfoLayerSettings
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeInfoLayerSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeInfoLayerSettings")),new UScriptStruct::TCppStructOps<FLandscapeInfoLayerSettings>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeInfoLayerSettings;
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeInfoLayerSettings"), sizeof(FLandscapeInfoLayerSettings), Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeInfoLayerSettings>(); };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			auto NewProp_bValid_SetBit = [](void* Obj){ ((FLandscapeInfoLayerSettings*)Obj)->bValid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValid = { UE4CodeGen_Private::EPropertyClass::Bool, "bValid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FLandscapeInfoLayerSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bValid_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bValid_MetaData, ARRAY_COUNT(NewProp_bValid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugColorChannel_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_DebugColorChannel = { UE4CodeGen_Private::EPropertyClass::Int, "DebugColorChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(FLandscapeInfoLayerSettings, DebugColorChannel), METADATA_PARAMS(NewProp_DebugColorChannel_MetaData, ARRAY_COUNT(NewProp_DebugColorChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner = { UE4CodeGen_Private::EPropertyClass::Object, "Owner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FLandscapeInfoLayerSettings, Owner), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(NewProp_Owner_MetaData, ARRAY_COUNT(NewProp_Owner_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailMIC_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailMIC = { UE4CodeGen_Private::EPropertyClass::Object, "ThumbnailMIC", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(FLandscapeInfoLayerSettings, ThumbnailMIC), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(NewProp_ThumbnailMIC_MetaData, ARRAY_COUNT(NewProp_ThumbnailMIC_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName = { UE4CodeGen_Private::EPropertyClass::Name, "LayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeInfoLayerSettings, LayerName), METADATA_PARAMS(NewProp_LayerName_MetaData, ARRAY_COUNT(NewProp_LayerName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObj_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObj = { UE4CodeGen_Private::EPropertyClass::Object, "LayerInfoObj", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FLandscapeInfoLayerSettings, LayerInfoObj), Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(NewProp_LayerInfoObj_MetaData, ARRAY_COUNT(NewProp_LayerInfoObj_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bValid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DebugColorChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Owner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThumbnailMIC,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerInfoObj,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LandscapeInfoLayerSettings",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLandscapeInfoLayerSettings),
				alignof(FLandscapeInfoLayerSettings),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings_CRC() { return 3520907243U; }
	void ULandscapeInfo::StaticRegisterNativesULandscapeInfo()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeInfo_NoRegister()
	{
		return ULandscapeInfo::StaticClass();
	}
	UClass* Z_Construct_UClass_ULandscapeInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LandscapeInfo.h" },
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proxies_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FSetPropertyParams NewProp_Proxies = { UE4CodeGen_Private::EPropertyClass::Set, "Proxies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeInfo, Proxies), METADATA_PARAMS(NewProp_Proxies_MetaData, ARRAY_COUNT(NewProp_Proxies_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Proxies_ElementProp = { UE4CodeGen_Private::EPropertyClass::Object, "Proxies", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ALandscapeStreamingProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Layers = { UE4CodeGen_Private::EPropertyClass::Array, "Layers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(ULandscapeInfo, Layers), METADATA_PARAMS(NewProp_Layers_MetaData, ARRAY_COUNT(NewProp_Layers_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Layers_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Layers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawScale_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawScale = { UE4CodeGen_Private::EPropertyClass::Struct, "DrawScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeInfo, DrawScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_DrawScale_MetaData, ARRAY_COUNT(NewProp_DrawScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentNumSubsections_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentNumSubsections = { UE4CodeGen_Private::EPropertyClass::Int, "ComponentNumSubsections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeInfo, ComponentNumSubsections), METADATA_PARAMS(NewProp_ComponentNumSubsections_MetaData, ARRAY_COUNT(NewProp_ComponentNumSubsections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsectionSizeQuads_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubsectionSizeQuads = { UE4CodeGen_Private::EPropertyClass::Int, "SubsectionSizeQuads", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeInfo, SubsectionSizeQuads), METADATA_PARAMS(NewProp_SubsectionSizeQuads_MetaData, ARRAY_COUNT(NewProp_SubsectionSizeQuads_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentSizeQuads_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ComponentSizeQuads = { UE4CodeGen_Private::EPropertyClass::Int, "ComponentSizeQuads", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeInfo, ComponentSizeQuads), METADATA_PARAMS(NewProp_ComponentSizeQuads_MetaData, ARRAY_COUNT(NewProp_ComponentSizeQuads_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "LandscapeGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeInfo, LandscapeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_LandscapeGuid_MetaData, ARRAY_COUNT(NewProp_LandscapeGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeActor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/LandscapeInfo.h" },
			};
#endif
			static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_LandscapeActor = { UE4CodeGen_Private::EPropertyClass::LazyObject, "LandscapeActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000000, 1, nullptr, STRUCT_OFFSET(ULandscapeInfo, LandscapeActor), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(NewProp_LandscapeActor_MetaData, ARRAY_COUNT(NewProp_LandscapeActor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Proxies,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Proxies_ElementProp,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Layers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Layers_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentNumSubsections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SubsectionSizeQuads,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ComponentSizeQuads,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LandscapeActor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULandscapeInfo>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULandscapeInfo::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000088u,
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
	IMPLEMENT_CLASS(ULandscapeInfo, 508205535);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeInfo(Z_Construct_UClass_ULandscapeInfo, &ULandscapeInfo::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
