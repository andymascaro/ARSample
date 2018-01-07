// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/DecalComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDecalComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UDecalComponent_GetDecalMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeDuration();
	ENGINE_API UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay();
	ENGINE_API UFunction* Z_Construct_UFunction_UDecalComponent_SetDecalMaterial();
	ENGINE_API UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeOut();
	ENGINE_API UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UDecalComponent_SetSortOrder();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UDecalComponent::StaticRegisterNativesUDecalComponent()
	{
		UClass* Class = UDecalComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateDynamicMaterialInstance", (Native)&UDecalComponent::execCreateDynamicMaterialInstance },
			{ "GetDecalMaterial", (Native)&UDecalComponent::execGetDecalMaterial },
			{ "GetFadeDuration", (Native)&UDecalComponent::execGetFadeDuration },
			{ "GetFadeStartDelay", (Native)&UDecalComponent::execGetFadeStartDelay },
			{ "SetDecalMaterial", (Native)&UDecalComponent::execSetDecalMaterial },
			{ "SetFadeOut", (Native)&UDecalComponent::execSetFadeOut },
			{ "SetFadeScreenSize", (Native)&UDecalComponent::execSetFadeScreenSize },
			{ "SetSortOrder", (Native)&UDecalComponent::execSetSortOrder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance()
	{
		struct DecalComponent_eventCreateDynamicMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DecalComponent_eventCreateDynamicMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Utility to allocate a new Dynamic Material Instance, set its parent to the currently applied material, and assign it" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, "CreateDynamicMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(DecalComponent_eventCreateDynamicMaterialInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDecalComponent_GetDecalMaterial()
	{
		struct DecalComponent_eventGetDecalMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DecalComponent_eventGetDecalMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Accessor for decal material" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, "GetDecalMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(DecalComponent_eventGetDecalMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeDuration()
	{
		struct DecalComponent_eventGetFadeDuration_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DecalComponent_eventGetFadeDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, "GetFadeDuration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(DecalComponent_eventGetFadeDuration_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay()
	{
		struct DecalComponent_eventGetFadeStartDelay_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(DecalComponent_eventGetFadeStartDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, "GetFadeStartDelay", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(DecalComponent_eventGetFadeStartDelay_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDecalComponent_SetDecalMaterial()
	{
		struct DecalComponent_eventSetDecalMaterial_Parms
		{
			UMaterialInterface* NewDecalMaterial;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDecalMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "NewDecalMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DecalComponent_eventSetDecalMaterial_Parms, NewDecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewDecalMaterial,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "setting decal material on decal component. This will force the decal to reattach" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, "SetDecalMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DecalComponent_eventSetDecalMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeOut()
	{
		struct DecalComponent_eventSetFadeOut_Parms
		{
			float StartDelay;
			float Duration;
			bool DestroyOwnerAfterFade;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_DestroyOwnerAfterFade_SetBit = [](void* Obj){ ((DecalComponent_eventSetFadeOut_Parms*)Obj)->DestroyOwnerAfterFade = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyOwnerAfterFade = { UE4CodeGen_Private::EPropertyClass::Bool, "DestroyOwnerAfterFade", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(DecalComponent_eventSetFadeOut_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_DestroyOwnerAfterFade_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration = { UE4CodeGen_Private::EPropertyClass::Float, "Duration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DecalComponent_eventSetFadeOut_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDelay = { UE4CodeGen_Private::EPropertyClass::Float, "StartDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DecalComponent_eventSetFadeOut_Parms, StartDelay), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestroyOwnerAfterFade,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Duration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StartDelay,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Decal" },
				{ "CPP_Default_DestroyOwnerAfterFade", "true" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Sets the decal's fade start time, duration and if the owning actor should be destroyed after the decal is fully faded out.\nThe default value of 0 for FadeStartDelay and FadeDuration makes the decal persistent. See DecalLifetimeOpacity material\nnode to control the look of \"fading out.\"\n\n@param StartDelay - Time in seconds to wait before beginning to fade out the decal.\n@param Duration - Time in second for the decal to fade out.\n@param DestroyOwnerAfterFade - Should the owning actor automatically be destroyed after it is completely faded out." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, "SetFadeOut", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DecalComponent_eventSetFadeOut_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize()
	{
		struct DecalComponent_eventSetFadeScreenSize_Parms
		{
			float NewFadeScreenSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFadeScreenSize = { UE4CodeGen_Private::EPropertyClass::Float, "NewFadeScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DecalComponent_eventSetFadeScreenSize_Parms, NewFadeScreenSize), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewFadeScreenSize,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Set the FadeScreenSize for this decal component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, "SetFadeScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DecalComponent_eventSetFadeScreenSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UDecalComponent_SetSortOrder()
	{
		struct DecalComponent_eventSetSortOrder_Parms
		{
			int32 Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(DecalComponent_eventSetSortOrder_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Sets the sort order for the decal component. Higher values draw later (on top). This will force the decal to reattach" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UDecalComponent, "SetSortOrder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(DecalComponent_eventSetSortOrder_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDecalComponent_NoRegister()
	{
		return UDecalComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UDecalComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UDecalComponent_CreateDynamicMaterialInstance, "CreateDynamicMaterialInstance" }, // 4007392889
				{ &Z_Construct_UFunction_UDecalComponent_GetDecalMaterial, "GetDecalMaterial" }, // 2265877327
				{ &Z_Construct_UFunction_UDecalComponent_GetFadeDuration, "GetFadeDuration" }, // 2137099332
				{ &Z_Construct_UFunction_UDecalComponent_GetFadeStartDelay, "GetFadeStartDelay" }, // 4190307609
				{ &Z_Construct_UFunction_UDecalComponent_SetDecalMaterial, "SetDecalMaterial" }, // 1028583144
				{ &Z_Construct_UFunction_UDecalComponent_SetFadeOut, "SetFadeOut" }, // 1221317075
				{ &Z_Construct_UFunction_UDecalComponent_SetFadeScreenSize, "SetFadeScreenSize" }, // 1438100436
				{ &Z_Construct_UFunction_UDecalComponent_SetSortOrder, "SetSortOrder" }, // 1932599973
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Collision Object Physics SceneComponent Activation Components|Activation Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "Components/DecalComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "A material that is rendered onto the surface of a mesh. A kind of 'bumper sticker' for a model.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/DecalActor\n@see UDecalActor" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalSize_MetaData[] = {
				{ "AllowPreserveRatio", "true" },
				{ "Category", "Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Decal size in local space (does not include the component scale), technically redundant but there for convenience" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalSize = { UE4CodeGen_Private::EPropertyClass::Struct, "DecalSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDecalComponent, DecalSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_DecalSize_MetaData, ARRAY_COUNT(NewProp_DecalSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOwnerAfterFade_MetaData[] = {
				{ "Category", "Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Automatically destroys the owning actor after fully fading out." },
			};
#endif
			auto NewProp_bDestroyOwnerAfterFade_SetBit = [](void* Obj){ ((UDecalComponent*)Obj)->bDestroyOwnerAfterFade = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOwnerAfterFade = { UE4CodeGen_Private::EPropertyClass::Bool, "bDestroyOwnerAfterFade", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UDecalComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDestroyOwnerAfterFade_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDestroyOwnerAfterFade_MetaData, ARRAY_COUNT(NewProp_bDestroyOwnerAfterFade_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeDuration_MetaData[] = {
				{ "Category", "Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Time in seconds for the decal to fade out. Set fade duration and start delay to 0 to make persistent. Only fades in active simulation or game." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeDuration = { UE4CodeGen_Private::EPropertyClass::Float, "FadeDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDecalComponent, FadeDuration), METADATA_PARAMS(NewProp_FadeDuration_MetaData, ARRAY_COUNT(NewProp_FadeDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeStartDelay_MetaData[] = {
				{ "Category", "Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Time in seconds to wait before beginning to fade out the decal. Set fade duration and start delay to 0 to make persistent." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeStartDelay = { UE4CodeGen_Private::EPropertyClass::Float, "FadeStartDelay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDecalComponent, FadeStartDelay), METADATA_PARAMS(NewProp_FadeStartDelay_MetaData, ARRAY_COUNT(NewProp_FadeStartDelay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeScreenSize_MetaData[] = {
				{ "Category", "Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeScreenSize = { UE4CodeGen_Private::EPropertyClass::Float, "FadeScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDecalComponent, FadeScreenSize), METADATA_PARAMS(NewProp_FadeScreenSize_MetaData, ARRAY_COUNT(NewProp_FadeScreenSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[] = {
				{ "Category", "Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Controls the order in which decal elements are rendered.  Higher values draw later (on top).\nSetting many different sort orders on many different decals prevents sorting by state and can reduce performance." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortOrder = { UE4CodeGen_Private::EPropertyClass::Int, "SortOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDecalComponent, SortOrder), METADATA_PARAMS(NewProp_SortOrder_MetaData, ARRAY_COUNT(NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[] = {
				{ "Category", "Decal" },
				{ "ModuleRelativePath", "Classes/Components/DecalComponent.h" },
				{ "ToolTip", "Decal material." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "DecalMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UDecalComponent, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_DecalMaterial_MetaData, ARRAY_COUNT(NewProp_DecalMaterial_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecalSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDestroyOwnerAfterFade,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeStartDelay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FadeScreenSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortOrder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecalMaterial,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UDecalComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UDecalComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UDecalComponent, 1021114395);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDecalComponent(Z_Construct_UClass_UDecalComponent, &UDecalComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UDecalComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDecalComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
