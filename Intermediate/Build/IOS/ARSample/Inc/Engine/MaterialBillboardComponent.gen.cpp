// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/MaterialBillboardComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialBillboardComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialSpriteElement();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialBillboardComponent_AddElement();
	ENGINE_API UFunction* Z_Construct_UFunction_UMaterialBillboardComponent_SetElements();
// End Cross Module References
class UScriptStruct* FMaterialSpriteElement::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialSpriteElement_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialSpriteElement, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialSpriteElement"), sizeof(FMaterialSpriteElement), Get_Z_Construct_UScriptStruct_FMaterialSpriteElement_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialSpriteElement(FMaterialSpriteElement::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialSpriteElement"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialSpriteElement
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialSpriteElement()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialSpriteElement")),new UScriptStruct::TCppStructOps<FMaterialSpriteElement>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialSpriteElement;
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialSpriteElement()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialSpriteElement_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialSpriteElement"), sizeof(FMaterialSpriteElement), Get_Z_Construct_UScriptStruct_FMaterialSpriteElement_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialSpriteElement>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToSizeCurve_MetaData[] = {
				{ "Category", "MaterialSpriteElement" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "A curve that maps distance on the X axis to the sprite size on the Y axis." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistanceToSizeCurve = { UE4CodeGen_Private::EPropertyClass::Object, "DistanceToSizeCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, DistanceToSizeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_DistanceToSizeCurve_MetaData, ARRAY_COUNT(NewProp_DistanceToSizeCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSizeY_MetaData[] = {
				{ "Category", "MaterialSpriteElement" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "The base height of the sprite, multiplied with the DistanceToSizeCurve." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSizeY = { UE4CodeGen_Private::EPropertyClass::Float, "BaseSizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, BaseSizeY), METADATA_PARAMS(NewProp_BaseSizeY_MetaData, ARRAY_COUNT(NewProp_BaseSizeY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseSizeX_MetaData[] = {
				{ "Category", "MaterialSpriteElement" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "The base width of the sprite, multiplied with the DistanceToSizeCurve." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSizeX = { UE4CodeGen_Private::EPropertyClass::Float, "BaseSizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, BaseSizeX), METADATA_PARAMS(NewProp_BaseSizeX_MetaData, ARRAY_COUNT(NewProp_BaseSizeX_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSizeIsInScreenSpace_MetaData[] = {
				{ "Category", "MaterialSpriteElement" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "Whether the size is defined in screen-space or world-space." },
			};
#endif
			auto NewProp_bSizeIsInScreenSpace_SetBit = [](void* Obj){ ((FMaterialSpriteElement*)Obj)->bSizeIsInScreenSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeIsInScreenSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bSizeIsInScreenSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FMaterialSpriteElement), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSizeIsInScreenSpace_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSizeIsInScreenSpace_MetaData, ARRAY_COUNT(NewProp_bSizeIsInScreenSpace_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToOpacityCurve_MetaData[] = {
				{ "Category", "MaterialSpriteElement" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "A curve that maps distance on the X axis to the sprite opacity on the Y axis." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistanceToOpacityCurve = { UE4CodeGen_Private::EPropertyClass::Object, "DistanceToOpacityCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, DistanceToOpacityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(NewProp_DistanceToOpacityCurve_MetaData, ARRAY_COUNT(NewProp_DistanceToOpacityCurve_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "MaterialSpriteElement" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "The material that the sprite is rendered with." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceToSizeCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseSizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseSizeX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSizeIsInScreenSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceToOpacityCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MaterialSpriteElement",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMaterialSpriteElement),
				alignof(FMaterialSpriteElement),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialSpriteElement_CRC() { return 359409982U; }
	void UMaterialBillboardComponent::StaticRegisterNativesUMaterialBillboardComponent()
	{
		UClass* Class = UMaterialBillboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddElement", (Native)&UMaterialBillboardComponent::execAddElement },
			{ "SetElements", (Native)&UMaterialBillboardComponent::execSetElements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMaterialBillboardComponent_AddElement()
	{
		struct MaterialBillboardComponent_eventAddElement_Parms
		{
			UMaterialInterface* Material;
			UCurveFloat* DistanceToOpacityCurve;
			bool bSizeIsInScreenSpace;
			float BaseSizeX;
			float BaseSizeY;
			UCurveFloat* DistanceToSizeCurve;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistanceToSizeCurve = { UE4CodeGen_Private::EPropertyClass::Object, "DistanceToSizeCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, DistanceToSizeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSizeY = { UE4CodeGen_Private::EPropertyClass::Float, "BaseSizeY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, BaseSizeY), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseSizeX = { UE4CodeGen_Private::EPropertyClass::Float, "BaseSizeX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, BaseSizeX), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bSizeIsInScreenSpace_SetBit = [](void* Obj){ ((MaterialBillboardComponent_eventAddElement_Parms*)Obj)->bSizeIsInScreenSpace = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSizeIsInScreenSpace = { UE4CodeGen_Private::EPropertyClass::Bool, "bSizeIsInScreenSpace", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MaterialBillboardComponent_eventAddElement_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSizeIsInScreenSpace_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistanceToOpacityCurve = { UE4CodeGen_Private::EPropertyClass::Object, "DistanceToOpacityCurve", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, DistanceToOpacityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceToSizeCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseSizeY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BaseSizeX,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSizeIsInScreenSpace,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistanceToOpacityCurve,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|MaterialSprite" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "Adds an element to the sprite." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialBillboardComponent, "AddElement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MaterialBillboardComponent_eventAddElement_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMaterialBillboardComponent_SetElements()
	{
		struct MaterialBillboardComponent_eventSetElements_Parms
		{
			TArray<FMaterialSpriteElement> NewElements;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewElements_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewElements = { UE4CodeGen_Private::EPropertyClass::Array, "NewElements", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventSetElements_Parms, NewElements), METADATA_PARAMS(NewProp_NewElements_MetaData, ARRAY_COUNT(NewProp_NewElements_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewElements_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "NewElements", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMaterialSpriteElement, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewElements,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewElements_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Components|MaterialSprite" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "Set all elements of this material billboard component" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialBillboardComponent, "SetElements", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MaterialBillboardComponent_eventSetElements_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister()
	{
		return UMaterialBillboardComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialBillboardComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMaterialBillboardComponent_AddElement, "AddElement" }, // 1001009066
				{ &Z_Construct_UFunction_UMaterialBillboardComponent_SetElements, "SetElements" }, // 1278458203
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Rendering" },
				{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility Trigger" },
				{ "IncludePath", "Components/MaterialBillboardComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "A 2d material that will be rendered always facing the camera." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[] = {
				{ "Category", "Sprite" },
				{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
				{ "ToolTip", "Current array of material billboard elements" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Elements = { UE4CodeGen_Private::EPropertyClass::Array, "Elements", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UMaterialBillboardComponent, Elements), METADATA_PARAMS(NewProp_Elements_MetaData, ARRAY_COUNT(NewProp_Elements_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Elements_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Elements", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMaterialSpriteElement, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Elements,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Elements_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialBillboardComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialBillboardComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B03080u,
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
	IMPLEMENT_CLASS(UMaterialBillboardComponent, 1787500699);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialBillboardComponent(Z_Construct_UClass_UMaterialBillboardComponent, &UMaterialBillboardComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialBillboardComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialBillboardComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
