// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionTransformPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTransformPosition() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialPositionTransformSource();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EMaterialPositionTransformSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialPositionTransformSource, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialPositionTransformSource"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialPositionTransformSource(EMaterialPositionTransformSource_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialPositionTransformSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_CRC() { return 3768070978U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialPositionTransformSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialPositionTransformSource"), 0, Get_Z_Construct_UEnum_Engine_EMaterialPositionTransformSource_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TRANSFORMPOSSOURCE_Local", (int64)TRANSFORMPOSSOURCE_Local },
				{ "TRANSFORMPOSSOURCE_World", (int64)TRANSFORMPOSSOURCE_World },
				{ "TRANSFORMPOSSOURCE_TranslatedWorld", (int64)TRANSFORMPOSSOURCE_TranslatedWorld },
				{ "TRANSFORMPOSSOURCE_View", (int64)TRANSFORMPOSSOURCE_View },
				{ "TRANSFORMPOSSOURCE_Camera", (int64)TRANSFORMPOSSOURCE_Camera },
				{ "TRANSFORMPOSSOURCE_Particle", (int64)TRANSFORMPOSSOURCE_Particle },
				{ "TRANSFORMPOSSOURCE_MAX", (int64)TRANSFORMPOSSOURCE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
				{ "TRANSFORMPOSSOURCE_Camera.DisplayName", "Camera Space" },
				{ "TRANSFORMPOSSOURCE_Camera.ToolTip", "Camera space" },
				{ "TRANSFORMPOSSOURCE_Local.DisplayName", "Local Space" },
				{ "TRANSFORMPOSSOURCE_Local.ToolTip", "Local space" },
				{ "TRANSFORMPOSSOURCE_Particle.DisplayName", "Mesh Particle Space" },
				{ "TRANSFORMPOSSOURCE_Particle.ToolTip", "Particle space" },
				{ "TRANSFORMPOSSOURCE_TranslatedWorld.DisplayName", "Camera Relative World Space" },
				{ "TRANSFORMPOSSOURCE_TranslatedWorld.ToolTip", "Camera relative world space" },
				{ "TRANSFORMPOSSOURCE_View.DisplayName", "View Space" },
				{ "TRANSFORMPOSSOURCE_View.ToolTip", "View space (differs from camera space in the shadow passes)" },
				{ "TRANSFORMPOSSOURCE_World.DisplayName", "Absolute World Space" },
				{ "TRANSFORMPOSSOURCE_World.ToolTip", "Absolute world space" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialPositionTransformSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialPositionTransformSource",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionTransformPosition::StaticRegisterNativesUMaterialExpressionTransformPosition()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition_NoRegister()
	{
		return UMaterialExpressionTransformPosition::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTransformPosition()
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
				{ "IncludePath", "Materials/MaterialExpressionTransformPosition.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[] = {
				{ "Category", "MaterialExpressionTransformPosition" },
				{ "DisplayName", "Destination" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
				{ "ToolTip", "type of transform to apply to the input expression" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformType = { UE4CodeGen_Private::EPropertyClass::Byte, "TransformType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTransformPosition, TransformType), Z_Construct_UEnum_Engine_EMaterialPositionTransformSource, METADATA_PARAMS(NewProp_TransformType_MetaData, ARRAY_COUNT(NewProp_TransformType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformSourceType_MetaData[] = {
				{ "Category", "MaterialExpressionTransformPosition" },
				{ "DisplayName", "Source" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
				{ "ToolTip", "source format of the position that will be transformed" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformSourceType = { UE4CodeGen_Private::EPropertyClass::Byte, "TransformSourceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTransformPosition, TransformSourceType), Z_Construct_UEnum_Engine_EMaterialPositionTransformSource, METADATA_PARAMS(NewProp_TransformSourceType_MetaData, ARRAY_COUNT(NewProp_TransformSourceType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTransformPosition.h" },
				{ "ToolTip", "input expression for this transform" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTransformPosition, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TransformSourceType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionTransformPosition>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionTransformPosition::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionTransformPosition, 604426476);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTransformPosition(Z_Construct_UClass_UMaterialExpressionTransformPosition, &UMaterialExpressionTransformPosition::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTransformPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTransformPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
