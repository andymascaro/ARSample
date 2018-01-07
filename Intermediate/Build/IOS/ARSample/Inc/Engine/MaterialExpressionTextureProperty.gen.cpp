// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionTextureProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureProperty() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EMaterialExposedTextureProperty_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialExposedTextureProperty"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialExposedTextureProperty(EMaterialExposedTextureProperty_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialExposedTextureProperty"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_CRC() { return 3245614653U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialExposedTextureProperty"), 0, Get_Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TMTM_TextureSize", (int64)TMTM_TextureSize },
				{ "TMTM_TexelSize", (int64)TMTM_TexelSize },
				{ "TMTM_MAX", (int64)TMTM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
				{ "TMTM_TexelSize.DisplayName", "Texel Size" },
				{ "TMTM_TexelSize.ToolTip", "The texture's texel size in the UV space (1 / Texture Size)" },
				{ "TMTM_TextureSize.DisplayName", "Texture Size" },
				{ "TMTM_TextureSize.ToolTip", "The texture's size." },
				{ "ToolTip", "Selects the texture property to output" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMaterialExposedTextureProperty",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EMaterialExposedTextureProperty",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionTextureProperty::StaticRegisterNativesUMaterialExpressionTextureProperty()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty_NoRegister()
	{
		return UMaterialExpressionTextureProperty::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionTextureProperty()
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
				{ "IncludePath", "Materials/MaterialExpressionTextureProperty.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[] = {
				{ "Category", "UMaterialExpressionTextureProperty" },
				{ "DisplayName", "Texture Property" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
				{ "ToolTip", "Texture property to be accessed" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Property = { UE4CodeGen_Private::EPropertyClass::Byte, "Property", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureProperty, Property), Z_Construct_UEnum_Engine_EMaterialExposedTextureProperty, METADATA_PARAMS(NewProp_Property_MetaData, ARRAY_COUNT(NewProp_Property_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureProperty.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Texture Object to access the property from." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureObject = { UE4CodeGen_Private::EPropertyClass::Struct, "TextureObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureProperty, TextureObject), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_TextureObject_MetaData, ARRAY_COUNT(NewProp_TextureObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Property,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureObject,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionTextureProperty>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionTextureProperty::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00102080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionTextureProperty, 4001725490);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionTextureProperty(Z_Construct_UClass_UMaterialExpressionTextureProperty, &UMaterialExpressionTextureProperty::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionTextureProperty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureProperty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
