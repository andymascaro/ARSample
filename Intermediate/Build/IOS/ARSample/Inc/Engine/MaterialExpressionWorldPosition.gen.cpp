// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionWorldPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionWorldPosition() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
// End Cross Module References
	static UEnum* EWorldPositionIncludedOffsets_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets, Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPositionIncludedOffsets"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWorldPositionIncludedOffsets(EWorldPositionIncludedOffsets_StaticEnum, TEXT("/Script/Engine"), TEXT("EWorldPositionIncludedOffsets"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_CRC() { return 518307584U; }
	UEnum* Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWorldPositionIncludedOffsets"), 0, Get_Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "WPT_Default", (int64)WPT_Default },
				{ "WPT_ExcludeAllShaderOffsets", (int64)WPT_ExcludeAllShaderOffsets },
				{ "WPT_CameraRelative", (int64)WPT_CameraRelative },
				{ "WPT_CameraRelativeNoOffsets", (int64)WPT_CameraRelativeNoOffsets },
				{ "WPT_MAX", (int64)WPT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWorldPosition.h" },
				{ "ToolTip", "Specifies which shader generated offsets should included in the world position (displacement/WPO etc.)" },
				{ "WPT_CameraRelative.DisplayName", "Camera Relative World Position (Including Material Shader Offsets)" },
				{ "WPT_CameraRelative.ToolTip", "Camera relative world position with all material shader offsets applied" },
				{ "WPT_CameraRelativeNoOffsets.DisplayName", "Camera Relative World Position (Excluding Material Shader Offsets)" },
				{ "WPT_CameraRelativeNoOffsets.ToolTip", "Camera relative world position with no material shader offsets applied" },
				{ "WPT_Default.DisplayName", "Absolute World Position (Including Material Shader Offsets)" },
				{ "WPT_Default.ToolTip", "Absolute world position with all material shader offsets applied" },
				{ "WPT_ExcludeAllShaderOffsets.DisplayName", "Absolute World Position (Excluding Material Shader Offsets)" },
				{ "WPT_ExcludeAllShaderOffsets.ToolTip", "Absolute world position with no material shader offsets applied" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWorldPositionIncludedOffsets",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EWorldPositionIncludedOffsets",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionWorldPosition::StaticRegisterNativesUMaterialExpressionWorldPosition()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition_NoRegister()
	{
		return UMaterialExpressionWorldPosition::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionWorldPosition()
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
				{ "IncludePath", "Materials/MaterialExpressionWorldPosition.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWorldPosition.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPositionShaderOffset_MetaData[] = {
				{ "Category", "UMaterialExpressionWorldPosition" },
				{ "DisplayName", "Shader Offsets" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionWorldPosition.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_WorldPositionShaderOffset = { UE4CodeGen_Private::EPropertyClass::Byte, "WorldPositionShaderOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionWorldPosition, WorldPositionShaderOffset), Z_Construct_UEnum_Engine_EWorldPositionIncludedOffsets, METADATA_PARAMS(NewProp_WorldPositionShaderOffset_MetaData, ARRAY_COUNT(NewProp_WorldPositionShaderOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldPositionShaderOffset,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionWorldPosition>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionWorldPosition::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00082080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionWorldPosition, 2632944011);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionWorldPosition(Z_Construct_UClass_UMaterialExpressionWorldPosition, &UMaterialExpressionWorldPosition::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionWorldPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionWorldPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
