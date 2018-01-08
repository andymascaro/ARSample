// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackFloatAnimBPParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackFloatAnimBPParam() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackFloatBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UInterpTrackFloatAnimBPParam::StaticRegisterNativesUInterpTrackFloatAnimBPParam()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam_NoRegister()
	{
		return UInterpTrackFloatAnimBPParam::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackFloatAnimBPParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackFloatBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Float Anim BP Parameter Track" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Matinee/InterpTrackFloatAnimBPParam.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[] = {
				{ "Category", "InterpTrackFloatAnimBPParam" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
				{ "ToolTip", "Name of parameter in the MaterialInstance which this track will modify over time." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParamName = { UE4CodeGen_Private::EPropertyClass::Name, "ParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackFloatAnimBPParam, ParamName), METADATA_PARAMS(NewProp_ParamName_MetaData, ARRAY_COUNT(NewProp_ParamName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimClass_MetaData[] = {
				{ "Category", "InterpTrackFloatAnimBPParam" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
				{ "ToolTip", "Materials whose parameters we want to change and the references to those materials." },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimClass = { UE4CodeGen_Private::EPropertyClass::Class, "AnimClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackFloatAnimBPParam, AnimClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AnimClass_MetaData, ARRAY_COUNT(NewProp_AnimClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimBlueprintClass_MetaData[] = {
				{ "Category", "InterpTrackFloatAnimBPParam" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackFloatAnimBPParam.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimBlueprintClass = { UE4CodeGen_Private::EPropertyClass::Class, "AnimBlueprintClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UInterpTrackFloatAnimBPParam, AnimBlueprintClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister, METADATA_PARAMS(NewProp_AnimBlueprintClass_MetaData, ARRAY_COUNT(NewProp_AnimBlueprintClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParamName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AnimBlueprintClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackFloatAnimBPParam>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackFloatAnimBPParam::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackFloatAnimBPParam, 1517183450);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackFloatAnimBPParam(Z_Construct_UClass_UInterpTrackFloatAnimBPParam, &UInterpTrackFloatAnimBPParam::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackFloatAnimBPParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackFloatAnimBPParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
