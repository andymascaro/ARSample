// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionScreenPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionScreenPosition() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialExpressionScreenPositionMapping();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* EMaterialExpressionScreenPositionMapping_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialExpressionScreenPositionMapping, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialExpressionScreenPositionMapping"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialExpressionScreenPositionMapping(EMaterialExpressionScreenPositionMapping_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialExpressionScreenPositionMapping"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialExpressionScreenPositionMapping_CRC() { return 2025615757U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialExpressionScreenPositionMapping()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialExpressionScreenPositionMapping"), 0, Get_Z_Construct_UEnum_Engine_EMaterialExpressionScreenPositionMapping_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MESP_SceneTextureUV", (int64)MESP_SceneTextureUV },
				{ "MESP_ViewportUV", (int64)MESP_ViewportUV },
				{ "MESP_Max", (int64)MESP_Max },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MESP_SceneTextureUV.DisplayName", "SceneTextureUV" },
				{ "MESP_SceneTextureUV.ToolTip", "A UV in the 0..1 range for use with the ScreeTnexture material expression." },
				{ "MESP_ViewportUV.DisplayName", "ViewportUV" },
				{ "MESP_ViewportUV.ToolTip", "A UV in the 0..1 range that maps to the local viewport" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScreenPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialExpressionScreenPositionMapping",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialExpressionScreenPositionMapping",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionScreenPosition::StaticRegisterNativesUMaterialExpressionScreenPosition()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition_NoRegister()
	{
		return UMaterialExpressionScreenPosition::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionScreenPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Object" },
				{ "IncludePath", "Materials/MaterialExpressionScreenPosition.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScreenPosition.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mapping_MetaData[] = {
				{ "Category", "UMaterialExpressionScreenPosition" },
				{ "DisplayName", "Mapping" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionScreenPosition.h" },
				{ "ToolTip", "View input property to be accessed" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Mapping = { UE4CodeGen_Private::EPropertyClass::Byte, "Mapping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionScreenPosition, Mapping), Z_Construct_UEnum_Engine_EMaterialExpressionScreenPositionMapping, METADATA_PARAMS(NewProp_Mapping_MetaData, ARRAY_COUNT(NewProp_Mapping_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mapping,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionScreenPosition>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionScreenPosition::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00002080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionScreenPosition, 1473456508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionScreenPosition(Z_Construct_UClass_UMaterialExpressionScreenPosition, &UMaterialExpressionScreenPosition::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionScreenPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionScreenPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
