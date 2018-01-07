// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/PostProcessComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePostProcessComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPostProcessComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister();
// End Cross Module References
	void UPostProcessComponent::StaticRegisterNativesUPostProcessComponent()
	{
		UClass* Class = UPostProcessComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", (Native)&UPostProcessComponent::execAddOrUpdateBlendable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable()
	{
		struct PostProcessComponent_eventAddOrUpdateBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
			float InWeight;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InWeight = { UE4CodeGen_Private::EPropertyClass::Float, "InWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PostProcessComponent_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject = { UE4CodeGen_Private::EPropertyClass::Interface, "InBlendableObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(PostProcessComponent_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBlendableObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "CPP_Default_InWeight", "1.000000" },
				{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
				{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPostProcessComponent, "AddOrUpdateBlendable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020403, sizeof(PostProcessComponent_eventAddOrUpdateBlendable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPostProcessComponent_NoRegister()
	{
		return UPostProcessComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPostProcessComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPostProcessComponent_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 1612348185
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object Trigger PhysicsVolume" },
				{ "IncludePath", "Components/PostProcessComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
				{ "ToolTip", "PostProcessComponent. Enables Post process controls for blueprints.\n   Will use a parent UShapeComponent to provide volume data if available." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnbound_MetaData[] = {
				{ "Category", "PostProcessVolume" },
				{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
				{ "ToolTip", "set this to false to use the parent shape component as volume bounds. True affects the whole world regardless." },
			};
#endif
			auto NewProp_bUnbound_SetBit = [](void* Obj){ ((UPostProcessComponent*)Obj)->bUnbound = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnbound = { UE4CodeGen_Private::EPropertyClass::Bool, "bUnbound", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPostProcessComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUnbound_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUnbound_MetaData, ARRAY_COUNT(NewProp_bUnbound_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
				{ "Category", "PostProcessVolume" },
				{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
				{ "ToolTip", "Whether this volume is enabled or not." },
			};
#endif
			auto NewProp_bEnabled_SetBit = [](void* Obj){ ((UPostProcessComponent*)Obj)->bEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UPostProcessComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnabled_MetaData, ARRAY_COUNT(NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[] = {
				{ "Category", "PostProcessVolume" },
				{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
				{ "ToolTip", "0:no effect, 1:full effect" },
				{ "UIMax", "1.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "BlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UPostProcessComponent, BlendWeight), METADATA_PARAMS(NewProp_BlendWeight_MetaData, ARRAY_COUNT(NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendRadius_MetaData[] = {
				{ "Category", "PostProcessVolume" },
				{ "ClampMin", "0.0" },
				{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
				{ "ToolTip", "World space radius around the volume that is used for blending (only if not unbound)." },
				{ "UIMax", "6000.0" },
				{ "UIMin", "0.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendRadius = { UE4CodeGen_Private::EPropertyClass::Float, "BlendRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UPostProcessComponent, BlendRadius), METADATA_PARAMS(NewProp_BlendRadius_MetaData, ARRAY_COUNT(NewProp_BlendRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "Category", "PostProcessVolume" },
				{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
				{ "ToolTip", "Priority of this volume. In the case of overlapping volumes the one with the highest priority\noverrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Float, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPostProcessComponent, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
				{ "Category", "PostProcessVolume" },
				{ "ModuleRelativePath", "Classes/Components/PostProcessComponent.h" },
				{ "ShowOnlyInnerProperties", "" },
				{ "ToolTip", "Post process settings to use for this volume." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings = { UE4CodeGen_Private::EPropertyClass::Struct, "Settings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(UPostProcessComponent, Settings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(NewProp_Settings_MetaData, ARRAY_COUNT(NewProp_Settings_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUnbound,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendWeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Settings,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UInterface_PostProcessVolume_NoRegister, (int32)VTABLE_OFFSET(UPostProcessComponent, IInterface_PostProcessVolume), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPostProcessComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPostProcessComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00A83080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPostProcessComponent, 2294094732);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPostProcessComponent(Z_Construct_UClass_UPostProcessComponent, &UPostProcessComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPostProcessComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPostProcessComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
