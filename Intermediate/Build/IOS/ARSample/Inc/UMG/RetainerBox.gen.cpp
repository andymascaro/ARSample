// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/RetainerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetainerBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_URetainerBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URetainerBox();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UFunction* Z_Construct_UFunction_URetainerBox_GetEffectMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_URetainerBox_RequestRender();
	UMG_API UFunction* Z_Construct_UFunction_URetainerBox_SetEffectMaterial();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_URetainerBox_SetTextureParameter();
// End Cross Module References
	void URetainerBox::StaticRegisterNativesURetainerBox()
	{
		UClass* Class = URetainerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectMaterial", (Native)&URetainerBox::execGetEffectMaterial },
			{ "RequestRender", (Native)&URetainerBox::execRequestRender },
			{ "SetEffectMaterial", (Native)&URetainerBox::execSetEffectMaterial },
			{ "SetTextureParameter", (Native)&URetainerBox::execSetTextureParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_URetainerBox_GetEffectMaterial()
	{
		struct RetainerBox_eventGetEffectMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RetainerBox_eventGetEffectMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Retainer|Effect" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "Get the current dynamic effect material applied to the retainer box." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, "GetEffectMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(RetainerBox_eventGetEffectMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URetainerBox_RequestRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Retainer" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "Requests the retainer redrawn the contents it has." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, "RequestRender", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URetainerBox_SetEffectMaterial()
	{
		struct RetainerBox_eventSetEffectMaterial_Parms
		{
			UMaterialInterface* EffectMaterial;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "EffectMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RetainerBox_eventSetEffectMaterial_Parms, EffectMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectMaterial,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Retainer|Effect" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "Set a new effect material to the retainer widget." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, "SetEffectMaterial", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RetainerBox_eventSetEffectMaterial_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URetainerBox_SetTextureParameter()
	{
		struct RetainerBox_eventSetTextureParameter_Parms
		{
			FName TextureParameter;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureParameter = { UE4CodeGen_Private::EPropertyClass::Name, "TextureParameter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RetainerBox_eventSetTextureParameter_Parms, TextureParameter), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureParameter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Retainer|Effect" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "Sets the name of the texture parameter to set the render target to on the material." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, "SetTextureParameter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(RetainerBox_eventSetTextureParameter_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URetainerBox_NoRegister()
	{
		return URetainerBox::StaticClass();
	}
	UClass* Z_Construct_UClass_URetainerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UContentWidget,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_URetainerBox_GetEffectMaterial, "GetEffectMaterial" }, // 3006954364
				{ &Z_Construct_UFunction_URetainerBox_RequestRender, "RequestRender" }, // 3971846556
				{ &Z_Construct_UFunction_URetainerBox_SetEffectMaterial, "SetEffectMaterial" }, // 1463642498
				{ &Z_Construct_UFunction_URetainerBox_SetTextureParameter, "SetTextureParameter" }, // 2751944273
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/RetainerBox.h" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "The Retainer Box renders children widgets to a render target first before\nlater rendering that render target to the screen.  This allows both frequency\nand phase to be controlled so that the UI can actually render less often than the\nfrequency of the main game render.  It also has the side benefit of allow materials\nto be applied to the render target after drawing the widgets to apply a simple post process.\n\n* Single Child\n* Caching / Performance" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameter_MetaData[] = {
				{ "Category", "Effect" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "The texture sampler parameter of the @EffectMaterial, that we'll set to the render target." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureParameter = { UE4CodeGen_Private::EPropertyClass::Name, "TextureParameter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(URetainerBox, TextureParameter), METADATA_PARAMS(NewProp_TextureParameter_MetaData, ARRAY_COUNT(NewProp_TextureParameter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectMaterial_MetaData[] = {
				{ "Category", "Effect" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "The effect to optionally apply to the render target.  We will set the texture sampler based on the name\nset in the @TextureParameter property.\n\nIf you want to adjust transparency of the final image, make sure you set Blend Mode to AlphaComposite (Pre-Multiplied Alpha)\nand make sure to multiply the alpha you're apply across the surface to the color and the alpha of the render target, otherwise\nyou won't see the expected color." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "EffectMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(URetainerBox, EffectMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_EffectMaterial_MetaData, ARRAY_COUNT(NewProp_EffectMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhaseCount_MetaData[] = {
				{ "Category", "RenderRules" },
				{ "ClampMin", "1" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "The PhaseCount controls how many phases are possible know what to modulus the current frame\ncount by to determine if this is the current frame to draw the widget on.\n\nIf the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\nIf the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\nother frame.  So in a 60Hz game, the UI would render at 30Hz." },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PhaseCount = { UE4CodeGen_Private::EPropertyClass::Int, "PhaseCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(URetainerBox, PhaseCount), METADATA_PARAMS(NewProp_PhaseCount_MetaData, ARRAY_COUNT(NewProp_PhaseCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[] = {
				{ "Category", "RenderRules" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "The Phase this widget will draw on.\n\nIf the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\nIf the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\nother frame.  So in a 60Hz game, the UI would render at 30Hz." },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Phase = { UE4CodeGen_Private::EPropertyClass::Int, "Phase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(URetainerBox, Phase), METADATA_PARAMS(NewProp_Phase_MetaData, ARRAY_COUNT(NewProp_Phase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderOnPhase_MetaData[] = {
				{ "Category", "RenderRules" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "Should this widget redraw the contents it has every time the phase occurs." },
			};
#endif
			auto NewProp_RenderOnPhase_SetBit = [](void* Obj){ ((URetainerBox*)Obj)->RenderOnPhase = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderOnPhase = { UE4CodeGen_Private::EPropertyClass::Bool, "RenderOnPhase", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(URetainerBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RenderOnPhase_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RenderOnPhase_MetaData, ARRAY_COUNT(NewProp_RenderOnPhase_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderOnInvalidation_MetaData[] = {
				{ "Category", "RenderRules" },
				{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
				{ "ToolTip", "Should this widget redraw the contents it has every time it receives an invalidation request\nfrom it's children, similar to the invalidation panel." },
			};
#endif
			auto NewProp_RenderOnInvalidation_SetBit = [](void* Obj){ ((URetainerBox*)Obj)->RenderOnInvalidation = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RenderOnInvalidation = { UE4CodeGen_Private::EPropertyClass::Bool, "RenderOnInvalidation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(URetainerBox), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_RenderOnInvalidation_SetBit)>::SetBit, METADATA_PARAMS(NewProp_RenderOnInvalidation_MetaData, ARRAY_COUNT(NewProp_RenderOnInvalidation_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TextureParameter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EffectMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PhaseCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Phase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderOnPhase,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderOnInvalidation,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URetainerBox>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URetainerBox::StaticClass,
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
	IMPLEMENT_CLASS(URetainerBox, 2976839836);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URetainerBox(Z_Construct_UClass_URetainerBox, &URetainerBox::StaticClass, TEXT("/Script/UMG"), TEXT("URetainerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URetainerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
