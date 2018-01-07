// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/BoxComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent();
	ENGINE_API UFunction* Z_Construct_UFunction_UBoxComponent_SetBoxExtent();
// End Cross Module References
	void UBoxComponent::StaticRegisterNativesUBoxComponent()
	{
		UClass* Class = UBoxComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScaledBoxExtent", (Native)&UBoxComponent::execGetScaledBoxExtent },
			{ "GetUnscaledBoxExtent", (Native)&UBoxComponent::execGetUnscaledBoxExtent },
			{ "SetBoxExtent", (Native)&UBoxComponent::execSetBoxExtent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent()
	{
		struct BoxComponent_eventGetScaledBoxExtent_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BoxComponent_eventGetScaledBoxExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Box" },
				{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
				{ "ToolTip", "@return the box extent, scaled by the component scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxComponent, "GetScaledBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(BoxComponent_eventGetScaledBoxExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent()
	{
		struct BoxComponent_eventGetUnscaledBoxExtent_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(BoxComponent_eventGetUnscaledBoxExtent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Box" },
				{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
				{ "ToolTip", "@return the box extent, ignoring component scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxComponent, "GetUnscaledBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(BoxComponent_eventGetUnscaledBoxExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UBoxComponent_SetBoxExtent()
	{
		struct BoxComponent_eventSetBoxExtent_Parms
		{
			FVector InBoxExtent;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((BoxComponent_eventSetBoxExtent_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(BoxComponent_eventSetBoxExtent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "InBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BoxComponent_eventSetBoxExtent_Parms, InBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InBoxExtent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Box" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
				{ "ToolTip", "Change the box extent size. This is the unscaled size, before component scale is applied.\n@param       InBoxExtent: new extent (radius) for the box.\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoxComponent, "SetBoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(BoxComponent_eventSetBoxExtent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBoxComponent_NoRegister()
	{
		return UBoxComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UBoxComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UShapeComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UBoxComponent_GetScaledBoxExtent, "GetScaledBoxExtent" }, // 2497444641
				{ &Z_Construct_UFunction_UBoxComponent_GetUnscaledBoxExtent, "GetUnscaledBoxExtent" }, // 562769802
				{ &Z_Construct_UFunction_UBoxComponent_SetBoxExtent, "SetBoxExtent" }, // 2950663951
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Collision" },
				{ "DisplayName", "Box Collision" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/BoxComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
				{ "ToolTip", "A box generally used for simple collision. Bounds are rendered as lines in the editor." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
				{ "Category", "Shape" },
				{ "ModuleRelativePath", "Classes/Components/BoxComponent.h" },
				{ "ToolTip", "The extents (radii dimensions) of the box *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "BoxExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UBoxComponent, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_BoxExtent_MetaData, ARRAY_COUNT(NewProp_BoxExtent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoxExtent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBoxComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBoxComponent::StaticClass,
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
	IMPLEMENT_CLASS(UBoxComponent, 2403721131);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBoxComponent(Z_Construct_UClass_UBoxComponent, &UBoxComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UBoxComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoxComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
