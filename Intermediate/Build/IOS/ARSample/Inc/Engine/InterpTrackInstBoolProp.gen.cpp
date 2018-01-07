// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstBoolProp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstBoolProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstBoolProp_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstBoolProp();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UBoolProperty();
// End Cross Module References
	void UInterpTrackInstBoolProp::StaticRegisterNativesUInterpTrackInstBoolProp()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstBoolProp_NoRegister()
	{
		return UInterpTrackInstBoolProp::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstBoolProp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackInstProperty,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Matinee/InterpTrackInstBoolProp.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstBoolProp.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetBool_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstBoolProp.h" },
				{ "ToolTip", "Saved value for restoring state when exiting Matinee." },
			};
#endif
			auto NewProp_ResetBool_SetBit = [](void* Obj){ ((UInterpTrackInstBoolProp*)Obj)->ResetBool = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ResetBool = { UE4CodeGen_Private::EPropertyClass::Bool, "ResetBool", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInterpTrackInstBoolProp), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ResetBool_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ResetBool_MetaData, ARRAY_COUNT(NewProp_ResetBool_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoolProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstBoolProp.h" },
				{ "ToolTip", "Mask that indicates which bit the boolean property actually uses of the value pointed to by BoolProp." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoolProperty = { UE4CodeGen_Private::EPropertyClass::Object, "BoolProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstBoolProp, BoolProperty), Z_Construct_UClass_UBoolProperty, METADATA_PARAMS(NewProp_BoolProperty_MetaData, ARRAY_COUNT(NewProp_BoolProperty_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResetBool,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoolProperty,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstBoolProp>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstBoolProp::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
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
	IMPLEMENT_CLASS(UInterpTrackInstBoolProp, 3890389289);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstBoolProp(Z_Construct_UClass_UInterpTrackInstBoolProp, &UInterpTrackInstBoolProp::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstBoolProp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstBoolProp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
