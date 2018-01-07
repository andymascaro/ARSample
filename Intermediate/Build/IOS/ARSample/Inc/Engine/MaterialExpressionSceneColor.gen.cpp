// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionSceneColor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionSceneColor() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneColor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionSceneColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EMaterialSceneAttributeInputMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialSceneAttributeInputMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialSceneAttributeInputMode(EMaterialSceneAttributeInputMode_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialSceneAttributeInputMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_CRC() { return 1429951053U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialSceneAttributeInputMode"), 0, Get_Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMaterialSceneAttributeInputMode::Coordinates", (int64)EMaterialSceneAttributeInputMode::Coordinates },
				{ "EMaterialSceneAttributeInputMode::OffsetFraction", (int64)EMaterialSceneAttributeInputMode::OffsetFraction },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialSceneAttributeInputMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EMaterialSceneAttributeInputMode::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionSceneColor::StaticRegisterNativesUMaterialExpressionSceneColor()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSceneColor_NoRegister()
	{
		return UMaterialExpressionSceneColor::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionSceneColor()
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
				{ "IncludePath", "Materials/MaterialExpressionSceneColor.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConstInput_MetaData[] = {
				{ "Category", "MaterialExpressionSceneColor" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
				{ "ToolTip", "only used if Input is not hooked up" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConstInput = { UE4CodeGen_Private::EPropertyClass::Struct, "ConstInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneColor, ConstInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_ConstInput_MetaData, ARRAY_COUNT(NewProp_ConstInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetFraction_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetFraction = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000020000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneColor, OffsetFraction_DEPRECATED), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_OffsetFraction_MetaData, ARRAY_COUNT(NewProp_OffsetFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Defaults to 'ConstInput' if not specified" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Input = { UE4CodeGen_Private::EPropertyClass::Struct, "Input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneColor, Input), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Input_MetaData, ARRAY_COUNT(NewProp_Input_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
				{ "Category", "MaterialExpressionSceneColor" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionSceneColor.h" },
				{ "ToolTip", "Coordinates - UV coordinates to apply to the scene color lookup.\nOffsetFraction -      An offset to apply to the scene color lookup in a 2d fraction of the screen." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputMode = { UE4CodeGen_Private::EPropertyClass::Byte, "InputMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionSceneColor, InputMode), Z_Construct_UEnum_Engine_EMaterialSceneAttributeInputMode, METADATA_PARAMS(NewProp_InputMode_MetaData, ARRAY_COUNT(NewProp_InputMode_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConstInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputMode,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionSceneColor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionSceneColor::StaticClass,
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
	IMPLEMENT_CLASS(UMaterialExpressionSceneColor, 2737706330);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionSceneColor(Z_Construct_UClass_UMaterialExpressionSceneColor, &UMaterialExpressionSceneColor::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionSceneColor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionSceneColor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
