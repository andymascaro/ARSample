// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/ArrowComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrowComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteCategoryInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UArrowComponent::StaticRegisterNativesUArrowComponent()
	{
		UClass* Class = UArrowComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetArrowColor", (Native)&UArrowComponent::execSetArrowColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowColor()
	{
		struct ArrowComponent_eventSetArrowColor_Parms
		{
			FLinearColor NewColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ArrowComponent_eventSetArrowColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Arrow" },
				{ "DisplayName", "SetArrowColor" },
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
				{ "ToolTip", "Updates the arrow's colour, and tells it to refresh" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, "SetArrowColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(ArrowComponent_eventSetArrowColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UArrowComponent_NoRegister()
	{
		return UArrowComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UArrowComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UArrowComponent_SetArrowColor, "SetArrowColor" }, // 3894260042
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Utility" },
				{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility Trigger" },
				{ "IncludePath", "Components/ArrowComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
				{ "ToolTip", "A simple arrow rendered using lines. Useful for indicating which way an object is facing." },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInEditorScaling_MetaData[] = {
				{ "Category", "ArrowComponent" },
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
				{ "ToolTip", "Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale)" },
			};
#endif
			auto NewProp_bUseInEditorScaling_SetBit = [](void* Obj){ ((UArrowComponent*)Obj)->bUseInEditorScaling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInEditorScaling = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseInEditorScaling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UArrowComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseInEditorScaling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseInEditorScaling_MetaData, ARRAY_COUNT(NewProp_bUseInEditorScaling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLightAttachment_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
				{ "ToolTip", "If true, this arrow component is attached to a light actor" },
			};
#endif
			auto NewProp_bLightAttachment_SetBit = [](void* Obj){ ((UArrowComponent*)Obj)->bLightAttachment = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLightAttachment = { UE4CodeGen_Private::EPropertyClass::Bool, "bLightAttachment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UArrowComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLightAttachment_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLightAttachment_MetaData, ARRAY_COUNT(NewProp_bLightAttachment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteInfo_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
				{ "ToolTip", "Sprite category information regarding the arrow component, if being treated as a sprite." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpriteInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "SpriteInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UArrowComponent, SpriteInfo), Z_Construct_UScriptStruct_FSpriteCategoryInfo, METADATA_PARAMS(NewProp_SpriteInfo_MetaData, ARRAY_COUNT(NewProp_SpriteInfo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteCategoryName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
				{ "ToolTip", "Sprite category that the arrow component belongs to, if being treated as a sprite. Value serves as a key into the localization file." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpriteCategoryName = { UE4CodeGen_Private::EPropertyClass::Name, "SpriteCategoryName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000820000000, 1, nullptr, STRUCT_OFFSET(UArrowComponent, SpriteCategoryName_DEPRECATED), METADATA_PARAMS(NewProp_SpriteCategoryName_MetaData, ARRAY_COUNT(NewProp_SpriteCategoryName_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTreatAsASprite_MetaData[] = {
				{ "Category", "ArrowComponent" },
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
				{ "ToolTip", "If true, don't show the arrow when EngineShowFlags.BillboardSprites is disabled." },
			};
#endif
			auto NewProp_bTreatAsASprite_SetBit = [](void* Obj){ ((UArrowComponent*)Obj)->bTreatAsASprite = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTreatAsASprite = { UE4CodeGen_Private::EPropertyClass::Bool, "bTreatAsASprite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UArrowComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTreatAsASprite_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTreatAsASprite_MetaData, ARRAY_COUNT(NewProp_bTreatAsASprite_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[] = {
				{ "Category", "ArrowComponent" },
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
				{ "ToolTip", "The size on screen to limit this arrow to (in screen space)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize = { UE4CodeGen_Private::EPropertyClass::Float, "ScreenSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UArrowComponent, ScreenSize), METADATA_PARAMS(NewProp_ScreenSize_MetaData, ARRAY_COUNT(NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsScreenSizeScaled_MetaData[] = {
				{ "Category", "ArrowComponent" },
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
				{ "ToolTip", "Set to limit the screen size of this arrow" },
			};
#endif
			auto NewProp_bIsScreenSizeScaled_SetBit = [](void* Obj){ ((UArrowComponent*)Obj)->bIsScreenSizeScaled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsScreenSizeScaled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsScreenSizeScaled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UArrowComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsScreenSizeScaled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsScreenSizeScaled_MetaData, ARRAY_COUNT(NewProp_bIsScreenSizeScaled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowSize_MetaData[] = {
				{ "Category", "ArrowComponent" },
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ArrowSize = { UE4CodeGen_Private::EPropertyClass::Float, "ArrowSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UArrowComponent, ArrowSize), METADATA_PARAMS(NewProp_ArrowSize_MetaData, ARRAY_COUNT(NewProp_ArrowSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowColor_MetaData[] = {
				{ "Category", "ArrowComponent" },
				{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ArrowColor = { UE4CodeGen_Private::EPropertyClass::Struct, "ArrowColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UArrowComponent, ArrowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_ArrowColor_MetaData, ARRAY_COUNT(NewProp_ArrowColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseInEditorScaling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLightAttachment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteCategoryName,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTreatAsASprite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ScreenSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsScreenSizeScaled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ArrowColor,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UArrowComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UArrowComponent::StaticClass,
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
	IMPLEMENT_CLASS(UArrowComponent, 1306775144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UArrowComponent(Z_Construct_UClass_UArrowComponent, &UArrowComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UArrowComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArrowComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
