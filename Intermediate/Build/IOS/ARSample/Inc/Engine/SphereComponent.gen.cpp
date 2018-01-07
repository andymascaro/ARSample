// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/SphereComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_USphereComponent_GetShapeScale();
	ENGINE_API UFunction* Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius();
	ENGINE_API UFunction* Z_Construct_UFunction_USphereComponent_SetSphereRadius();
// End Cross Module References
	void USphereComponent::StaticRegisterNativesUSphereComponent()
	{
		UClass* Class = USphereComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScaledSphereRadius", (Native)&USphereComponent::execGetScaledSphereRadius },
			{ "GetShapeScale", (Native)&USphereComponent::execGetShapeScale },
			{ "GetUnscaledSphereRadius", (Native)&USphereComponent::execGetUnscaledSphereRadius },
			{ "SetSphereRadius", (Native)&USphereComponent::execSetSphereRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius()
	{
		struct SphereComponent_eventGetScaledSphereRadius_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SphereComponent_eventGetScaledSphereRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Sphere" },
				{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
				{ "ToolTip", "@return the radius of the sphere, with component scale applied." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, "GetScaledSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SphereComponent_eventGetScaledSphereRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USphereComponent_GetShapeScale()
	{
		struct SphereComponent_eventGetShapeScale_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SphereComponent_eventGetShapeScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Sphere" },
				{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
				{ "ToolTip", "Get the scale used by this shape. This is a uniform scale that is the minimum of any non-uniform scaling.\n@return the scale used by this shape." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, "GetShapeScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SphereComponent_eventGetShapeScale_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius()
	{
		struct SphereComponent_eventGetUnscaledSphereRadius_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SphereComponent_eventGetUnscaledSphereRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Sphere" },
				{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
				{ "ToolTip", "@return the radius of the sphere, ignoring component scale." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, "GetUnscaledSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(SphereComponent_eventGetUnscaledSphereRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USphereComponent_SetSphereRadius()
	{
		struct SphereComponent_eventSetSphereRadius_Parms
		{
			float InSphereRadius;
			bool bUpdateOverlaps;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bUpdateOverlaps_SetBit = [](void* Obj){ ((SphereComponent_eventSetSphereRadius_Parms*)Obj)->bUpdateOverlaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateOverlaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdateOverlaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SphereComponent_eventSetSphereRadius_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdateOverlaps_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InSphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "InSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SphereComponent_eventSetSphereRadius_Parms, InSphereRadius), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdateOverlaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSphereRadius,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Sphere" },
				{ "CPP_Default_bUpdateOverlaps", "true" },
				{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
				{ "ToolTip", "Change the sphere radius. This is the unscaled radius, before component scale is applied.\n@param       InSphereRadius: the new sphere radius\n@param       bUpdateOverlaps: if true and this shape is registered and collides, updates touching array for owner actor." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USphereComponent, "SetSphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SphereComponent_eventSetSphereRadius_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USphereComponent_NoRegister()
	{
		return USphereComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USphereComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UShapeComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USphereComponent_GetScaledSphereRadius, "GetScaledSphereRadius" }, // 1502580060
				{ &Z_Construct_UFunction_USphereComponent_GetShapeScale, "GetShapeScale" }, // 1198662575
				{ &Z_Construct_UFunction_USphereComponent_GetUnscaledSphereRadius, "GetUnscaledSphereRadius" }, // 3578639395
				{ &Z_Construct_UFunction_USphereComponent_SetSphereRadius, "SetSphereRadius" }, // 1910719821
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Collision" },
				{ "DisplayName", "Sphere Collision" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
				{ "IncludePath", "Components/SphereComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
				{ "ToolTip", "A sphere generally used for simple collision. Bounds are rendered as lines in the editor." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
				{ "Category", "Shape" },
				{ "ModuleRelativePath", "Classes/Components/SphereComponent.h" },
				{ "ToolTip", "The radius of the sphere *" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SphereRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(USphereComponent, SphereRadius), METADATA_PARAMS(NewProp_SphereRadius_MetaData, ARRAY_COUNT(NewProp_SphereRadius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SphereRadius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USphereComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USphereComponent::StaticClass,
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
	IMPLEMENT_CLASS(USphereComponent, 790016296);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USphereComponent(Z_Construct_UClass_USphereComponent, &USphereComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USphereComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USphereComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
