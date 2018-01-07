// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Matinee/InterpTrackInstProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpTrackInstProperty() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstProperty();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInst();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UProperty();
// End Cross Module References
	void UInterpTrackInstProperty::StaticRegisterNativesUInterpTrackInstProperty()
	{
	}
	UClass* Z_Construct_UClass_UInterpTrackInstProperty_NoRegister()
	{
		return UInterpTrackInstProperty::StaticClass();
	}
	UClass* Z_Construct_UClass_UInterpTrackInstProperty()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterpTrackInst,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Matinee/InterpTrackInstProperty.h" },
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstProperty.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyOuterObjectInst_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstProperty.h" },
				{ "ToolTip", "Pointer to the UObject instance that is the outer of the color property we are interpolating on, this is used to process the property update callback." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PropertyOuterObjectInst = { UE4CodeGen_Private::EPropertyClass::Object, "PropertyOuterObjectInst", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstProperty, PropertyOuterObjectInst), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_PropertyOuterObjectInst_MetaData, ARRAY_COUNT(NewProp_PropertyOuterObjectInst_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpProperty_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Matinee/InterpTrackInstProperty.h" },
				{ "ToolTip", "Function to call after updating the value of the color property." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterpProperty = { UE4CodeGen_Private::EPropertyClass::Object, "InterpProperty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UInterpTrackInstProperty, InterpProperty), Z_Construct_UClass_UProperty, METADATA_PARAMS(NewProp_InterpProperty_MetaData, ARRAY_COUNT(NewProp_InterpProperty_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyOuterObjectInst,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InterpProperty,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UInterpTrackInstProperty>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UInterpTrackInstProperty::StaticClass,
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
	IMPLEMENT_CLASS(UInterpTrackInstProperty, 219525399);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterpTrackInstProperty(Z_Construct_UClass_UInterpTrackInstProperty, &UInterpTrackInstProperty::StaticClass, TEXT("/Script/Engine"), TEXT("UInterpTrackInstProperty"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpTrackInstProperty);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
