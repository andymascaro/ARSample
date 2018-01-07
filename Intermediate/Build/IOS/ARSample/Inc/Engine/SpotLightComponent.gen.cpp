// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/SpotLightComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle();
	ENGINE_API UFunction* Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle();
// End Cross Module References
	void USpotLightComponent::StaticRegisterNativesUSpotLightComponent()
	{
		UClass* Class = USpotLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInnerConeAngle", (Native)&USpotLightComponent::execSetInnerConeAngle },
			{ "SetOuterConeAngle", (Native)&USpotLightComponent::execSetOuterConeAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle()
	{
		struct SpotLightComponent_eventSetInnerConeAngle_Parms
		{
			float NewInnerConeAngle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewInnerConeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "NewInnerConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpotLightComponent_eventSetInnerConeAngle_Parms, NewInnerConeAngle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewInnerConeAngle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USpotLightComponent, "SetInnerConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpotLightComponent_eventSetInnerConeAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle()
	{
		struct SpotLightComponent_eventSetOuterConeAngle_Parms
		{
			float NewOuterConeAngle;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewOuterConeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "NewOuterConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SpotLightComponent_eventSetOuterConeAngle_Parms, NewOuterConeAngle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewOuterConeAngle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Lighting" },
				{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USpotLightComponent, "SetOuterConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SpotLightComponent_eventSetOuterConeAngle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USpotLightComponent_NoRegister()
	{
		return USpotLightComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USpotLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPointLightComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USpotLightComponent_SetInnerConeAngle, "SetInnerConeAngle" }, // 3144425963
				{ &Z_Construct_UFunction_USpotLightComponent_SetOuterConeAngle, "SetOuterConeAngle" }, // 4152759214
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "Lights" },
				{ "HideCategories", "Object Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
				{ "IncludePath", "Components/SpotLightComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
				{ "ToolTip", "A spot light component emits a directional cone shaped light (Eg a Torch)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightShaftConeAngle_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
				{ "ToolTip", "EditAnywhere, BlueprintReadOnly, Category=LightShaft, meta=(UIMin = \"1.0\", UIMax = \"180.0\")" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightShaftConeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "LightShaftConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(USpotLightComponent, LightShaftConeAngle), METADATA_PARAMS(NewProp_LightShaftConeAngle_MetaData, ARRAY_COUNT(NewProp_LightShaftConeAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OuterConeAngle_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
				{ "ToolTip", "Degrees." },
				{ "UIMax", "80.0" },
				{ "UIMin", "1.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OuterConeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "OuterConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USpotLightComponent, OuterConeAngle), METADATA_PARAMS(NewProp_OuterConeAngle_MetaData, ARRAY_COUNT(NewProp_OuterConeAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InnerConeAngle_MetaData[] = {
				{ "Category", "Light" },
				{ "ModuleRelativePath", "Classes/Components/SpotLightComponent.h" },
				{ "ToolTip", "Degrees." },
				{ "UIMax", "80.0" },
				{ "UIMin", "1.0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InnerConeAngle = { UE4CodeGen_Private::EPropertyClass::Float, "InnerConeAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USpotLightComponent, InnerConeAngle), METADATA_PARAMS(NewProp_InnerConeAngle_MetaData, ARRAY_COUNT(NewProp_InnerConeAngle_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LightShaftConeAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OuterConeAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InnerConeAngle,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USpotLightComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USpotLightComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B01080u,
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
	IMPLEMENT_CLASS(USpotLightComponent, 1009310246);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpotLightComponent(Z_Construct_UClass_USpotLightComponent, &USpotLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USpotLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpotLightComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
