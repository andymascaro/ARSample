// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialInstanceConstant.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceConstant() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	void UMaterialInstanceConstant::StaticRegisterNativesUMaterialInstanceConstant()
	{
	}
	UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister()
	{
		return UMaterialInstanceConstant::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialInstanceConstant()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/MaterialInstanceConstant.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
				{ "ToolTip", "Material Instances may be used to change the appearance of a material without incurring an expensive recompilation of the material.\nGeneral modification of the material cannot be supported without recompilation, so the instances are limited to changing the values of\npredefined material parameters. The parameters are statically defined in the compiled material by a unique name, type and default value." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterStateId_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceConstant.h" },
				{ "ToolTip", "Unique ID for this material instance's parameter set\nUpdated on changes in the editor to allow those changes to be detected" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterStateId = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterStateId", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMaterialInstanceConstant, ParameterStateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_ParameterStateId_MetaData, ARRAY_COUNT(NewProp_ParameterStateId_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterStateId,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialInstanceConstant>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialInstanceConstant::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00882080u,
				nullptr, 0,
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInstanceConstant, 993321079);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInstanceConstant(Z_Construct_UClass_UMaterialInstanceConstant, &UMaterialInstanceConstant::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInstanceConstant"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceConstant);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
