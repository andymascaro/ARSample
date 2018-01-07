// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/VectorFieldComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorFieldComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorFieldComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UVectorFieldComponent_SetIntensity();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
// End Cross Module References
	void UVectorFieldComponent::StaticRegisterNativesUVectorFieldComponent()
	{
		UClass* Class = UVectorFieldComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetIntensity", (Native)&UVectorFieldComponent::execSetIntensity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVectorFieldComponent_SetIntensity()
	{
		struct VectorFieldComponent_eventSetIntensity_Parms
		{
			float NewIntensity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIntensity = { UE4CodeGen_Private::EPropertyClass::Float, "NewIntensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VectorFieldComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewIntensity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Effects|Components|VectorField" },
				{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
				{ "ToolTip", "Set the intensity of the vector field.\n@param NewIntensity - The new intensity of the vector field." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVectorFieldComponent, "SetIntensity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VectorFieldComponent_eventSetIntensity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVectorFieldComponent_NoRegister()
	{
		return UVectorFieldComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UVectorFieldComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVectorFieldComponent_SetIntensity, "SetIntensity" }, // 1715625149
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object Mobility Trigger" },
				{ "IncludePath", "Components/VectorFieldComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
				{ "ToolTip", "A Component referencing a vector field." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewVectorField_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
				{ "ToolTip", "If true, the vector field is only used for preview visualizations." },
			};
#endif
			auto NewProp_bPreviewVectorField_SetBit = [](void* Obj){ ((UVectorFieldComponent*)Obj)->bPreviewVectorField = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewVectorField = { UE4CodeGen_Private::EPropertyClass::Bool, "bPreviewVectorField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UVectorFieldComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPreviewVectorField_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPreviewVectorField_MetaData, ARRAY_COUNT(NewProp_bPreviewVectorField_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[] = {
				{ "Category", "VectorFieldComponent" },
				{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
				{ "ToolTip", "How tightly particles follow the vector field." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tightness = { UE4CodeGen_Private::EPropertyClass::Float, "Tightness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVectorFieldComponent, Tightness), METADATA_PARAMS(NewProp_Tightness_MetaData, ARRAY_COUNT(NewProp_Tightness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
				{ "Category", "VectorFieldComponent" },
				{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
				{ "ToolTip", "The intensity at which the vector field is applied." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity = { UE4CodeGen_Private::EPropertyClass::Float, "Intensity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UVectorFieldComponent, Intensity), METADATA_PARAMS(NewProp_Intensity_MetaData, ARRAY_COUNT(NewProp_Intensity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorField_MetaData[] = {
				{ "Category", "VectorFieldComponent" },
				{ "ModuleRelativePath", "Classes/Components/VectorFieldComponent.h" },
				{ "ToolTip", "The vector field asset." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VectorField = { UE4CodeGen_Private::EPropertyClass::Object, "VectorField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UVectorFieldComponent, VectorField), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(NewProp_VectorField_MetaData, ARRAY_COUNT(NewProp_VectorField_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPreviewVectorField,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tightness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Intensity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorField,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVectorFieldComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVectorFieldComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A80080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UVectorFieldComponent, 700614333);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVectorFieldComponent(Z_Construct_UClass_UVectorFieldComponent, &UVectorFieldComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UVectorFieldComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVectorFieldComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
