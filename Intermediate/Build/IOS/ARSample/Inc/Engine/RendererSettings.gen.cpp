// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/RendererSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRendererSettings() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethodUI();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEarlyZPass();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomDepthStencil();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileMSAASampleCount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositingSampleCount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClearSceneOptions();
	ENGINE_API UClass* Z_Construct_UClass_URendererSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URendererSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGBufferFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucentSortPolicy();
	ENGINE_API UClass* Z_Construct_UClass_URendererOverrideSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URendererOverrideSettings();
// End Cross Module References
	static UEnum* EAutoExposureMethodUI_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAutoExposureMethodUI, Z_Construct_UPackage__Script_Engine(), TEXT("EAutoExposureMethodUI"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAutoExposureMethodUI(EAutoExposureMethodUI_StaticEnum, TEXT("/Script/Engine"), TEXT("EAutoExposureMethodUI"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EAutoExposureMethodUI_CRC() { return 1334115462U; }
	UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethodUI()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAutoExposureMethodUI"), 0, Get_Z_Construct_UEnum_Engine_EAutoExposureMethodUI_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAutoExposureMethodUI::AEM_Histogram", (int64)EAutoExposureMethodUI::AEM_Histogram },
				{ "EAutoExposureMethodUI::AEM_Basic", (int64)EAutoExposureMethodUI::AEM_Basic },
				{ "EAutoExposureMethodUI::AEM_MAX", (int64)EAutoExposureMethodUI::AEM_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AEM_Basic.DisplayName", "Auto Exposure Basic" },
				{ "AEM_Basic.ToolTip", "Not supported on mobile, faster method that computes single value by downsampling" },
				{ "AEM_Histogram.DisplayName", "Auto Exposure Histogram" },
				{ "AEM_Histogram.ToolTip", "Not supported on mobile, requires compute shader to construct 64 bin histogram" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "used by FPostProcessSettings AutoExposure" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAutoExposureMethodUI",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EAutoExposureMethodUI::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EEarlyZPass_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEarlyZPass, Z_Construct_UPackage__Script_Engine(), TEXT("EEarlyZPass"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEarlyZPass(EEarlyZPass_StaticEnum, TEXT("/Script/Engine"), TEXT("EEarlyZPass"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EEarlyZPass_CRC() { return 1177280938U; }
	UEnum* Z_Construct_UEnum_Engine_EEarlyZPass()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEarlyZPass"), 0, Get_Z_Construct_UEnum_Engine_EEarlyZPass_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEarlyZPass::None", (int64)EEarlyZPass::None },
				{ "EEarlyZPass::OpaqueOnly", (int64)EEarlyZPass::OpaqueOnly },
				{ "EEarlyZPass::OpaqueAndMasked", (int64)EEarlyZPass::OpaqueAndMasked },
				{ "EEarlyZPass::Auto", (int64)EEarlyZPass::Auto },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.DisplayName", "Decide automatically" },
				{ "Auto.ToolTip", "Let the engine decide what to render in the early Z pass based on the features being used." },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "None.DisplayName", "None" },
				{ "OpaqueAndMasked.DisplayName", "Opaque and masked meshes" },
				{ "OpaqueOnly.DisplayName", "Opaque meshes only" },
				{ "ToolTip", "Enumerates available options for early Z-passes." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EEarlyZPass",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EEarlyZPass::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECustomDepthStencil_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomDepthStencil, Z_Construct_UPackage__Script_Engine(), TEXT("ECustomDepthStencil"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECustomDepthStencil(ECustomDepthStencil_StaticEnum, TEXT("/Script/Engine"), TEXT("ECustomDepthStencil"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECustomDepthStencil_CRC() { return 3384018501U; }
	UEnum* Z_Construct_UEnum_Engine_ECustomDepthStencil()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECustomDepthStencil"), 0, Get_Z_Construct_UEnum_Engine_ECustomDepthStencil_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECustomDepthStencil::Disabled", (int64)ECustomDepthStencil::Disabled },
				{ "ECustomDepthStencil::Enabled", (int64)ECustomDepthStencil::Enabled },
				{ "ECustomDepthStencil::EnabledOnDemand", (int64)ECustomDepthStencil::EnabledOnDemand },
				{ "ECustomDepthStencil::EnabledWithStencil", (int64)ECustomDepthStencil::EnabledWithStencil },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Enabled.ToolTip", "Depth buffer created immediately. Stencil disabled." },
				{ "EnabledOnDemand.ToolTip", "Depth buffer created on first use, can save memory but cause stalls. Stencil disabled." },
				{ "EnabledWithStencil.ToolTip", "Depth buffer created immediately. Stencil available for read/write." },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enumerates available options for custom depth." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECustomDepthStencil",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ECustomDepthStencil::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMobileMSAASampleCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileMSAASampleCount, Z_Construct_UPackage__Script_Engine(), TEXT("EMobileMSAASampleCount"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMobileMSAASampleCount(EMobileMSAASampleCount_StaticEnum, TEXT("/Script/Engine"), TEXT("EMobileMSAASampleCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMobileMSAASampleCount_CRC() { return 1617987017U; }
	UEnum* Z_Construct_UEnum_Engine_EMobileMSAASampleCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMobileMSAASampleCount"), 0, Get_Z_Construct_UEnum_Engine_EMobileMSAASampleCount_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMobileMSAASampleCount::One", (int64)EMobileMSAASampleCount::One },
				{ "EMobileMSAASampleCount::Two", (int64)EMobileMSAASampleCount::Two },
				{ "EMobileMSAASampleCount::Four", (int64)EMobileMSAASampleCount::Four },
				{ "EMobileMSAASampleCount::Eight", (int64)EMobileMSAASampleCount::Eight },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Eight.DisplayName", "8x MSAA" },
				{ "Four.DisplayName", "4x MSAA" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "One.DisplayName", "No MSAA" },
				{ "ToolTip", "Enumerates available mobile MSAA sample counts." },
				{ "Two.DisplayName", "2x MSAA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMobileMSAASampleCount",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EMobileMSAASampleCount::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECompositingSampleCount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECompositingSampleCount, Z_Construct_UPackage__Script_Engine(), TEXT("ECompositingSampleCount"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECompositingSampleCount(ECompositingSampleCount_StaticEnum, TEXT("/Script/Engine"), TEXT("ECompositingSampleCount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ECompositingSampleCount_CRC() { return 2220296314U; }
	UEnum* Z_Construct_UEnum_Engine_ECompositingSampleCount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECompositingSampleCount"), 0, Get_Z_Construct_UEnum_Engine_ECompositingSampleCount_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECompositingSampleCount::One", (int64)ECompositingSampleCount::One },
				{ "ECompositingSampleCount::Two", (int64)ECompositingSampleCount::Two },
				{ "ECompositingSampleCount::Four", (int64)ECompositingSampleCount::Four },
				{ "ECompositingSampleCount::Eight", (int64)ECompositingSampleCount::Eight },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Eight.DisplayName", "8x MSAA" },
				{ "Four.DisplayName", "4x MSAA" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "One.DisplayName", "No MSAA" },
				{ "ToolTip", "Enumerates available compositing sample counts." },
				{ "Two.DisplayName", "2x MSAA" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECompositingSampleCount",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"ECompositingSampleCount::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EClearSceneOptions_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClearSceneOptions, Z_Construct_UPackage__Script_Engine(), TEXT("EClearSceneOptions"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EClearSceneOptions(EClearSceneOptions_StaticEnum, TEXT("/Script/Engine"), TEXT("EClearSceneOptions"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EClearSceneOptions_CRC() { return 767738220U; }
	UEnum* Z_Construct_UEnum_Engine_EClearSceneOptions()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EClearSceneOptions"), 0, Get_Z_Construct_UEnum_Engine_EClearSceneOptions_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EClearSceneOptions::NoClear", (int64)EClearSceneOptions::NoClear },
				{ "EClearSceneOptions::HardwareClear", (int64)EClearSceneOptions::HardwareClear },
				{ "EClearSceneOptions::QuadAtMaxZ", (int64)EClearSceneOptions::QuadAtMaxZ },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "HardwareClear.DisplayName", "Hardware clear" },
				{ "HardwareClear.ToolTip", "Perform a full hardware clear before rendering. Most projects should use this option." },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "NoClear.DisplayName", "Do not clear" },
				{ "NoClear.ToolTip", "This option is fastest but can cause artifacts unless you render to every pixel. Make sure to use a skybox with this option!" },
				{ "QuadAtMaxZ.DisplayName", "Clear at far plane" },
				{ "QuadAtMaxZ.ToolTip", "Draws a quad to perform the clear at the far plane, this is faster than a hardware clear on some GPUs." },
				{ "ToolTip", "Enumerates ways to clear a scene." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EClearSceneOptions",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EClearSceneOptions::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void URendererSettings::StaticRegisterNativesURendererSettings()
	{
	}
	UClass* Z_Construct_UClass_URendererSettings_NoRegister()
	{
		return URendererSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_URendererSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Rendering" },
				{ "IncludePath", "Engine/RendererSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Rendering settings." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportReversedIndexBuffers_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SupportReversedIndexBuffers" },
				{ "DisplayName", "Support reversed index buffers" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Support reversed index buffers, which provide a minor rendering speedup at the expense of using twice the index buffer memory." },
			};
#endif
			auto NewProp_bSupportReversedIndexBuffers_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bSupportReversedIndexBuffers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportReversedIndexBuffers = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportReversedIndexBuffers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportReversedIndexBuffers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportReversedIndexBuffers_MetaData, ARRAY_COUNT(NewProp_bSupportReversedIndexBuffers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportDepthOnlyIndexBuffers_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SupportDepthOnlyIndexBuffers" },
				{ "DisplayName", "Support depth-only index buffers" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Support depth-only index buffers, which provide a minor rendering speedup at the expense of using twice the index buffer memory." },
			};
#endif
			auto NewProp_bSupportDepthOnlyIndexBuffers_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bSupportDepthOnlyIndexBuffers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportDepthOnlyIndexBuffers = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportDepthOnlyIndexBuffers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportDepthOnlyIndexBuffers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportDepthOnlyIndexBuffers_MetaData, ARRAY_COUNT(NewProp_bSupportDepthOnlyIndexBuffers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGPUSkinLimit2BoneInfluences_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.GPUSkin.Limit2BoneInfluences" },
				{ "DisplayName", "Limit GPU skinning to 2 bones influence" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to use 2 bone influences instead of the default of 4 for GPU skinning. This does not change skeletal mesh assets but reduces the number of instructions required by the GPU skin vertex shaders. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bGPUSkinLimit2BoneInfluences_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bGPUSkinLimit2BoneInfluences = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGPUSkinLimit2BoneInfluences = { UE4CodeGen_Private::EPropertyClass::Bool, "bGPUSkinLimit2BoneInfluences", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGPUSkinLimit2BoneInfluences_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGPUSkinLimit2BoneInfluences_MetaData, ARRAY_COUNT(NewProp_bGPUSkinLimit2BoneInfluences_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinCacheSceneMemoryLimitInMB_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConsoleVariable", "r.SkinCache.SceneMemoryLimitInMB" },
				{ "DisplayName", "Maximum memory for Compute Skincache per world (MB)" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Maximum amount of memory (in MB) per world/scene allowed for the Compute Skincache to generate output vertex data and recompute tangents." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkinCacheSceneMemoryLimitInMB = { UE4CodeGen_Private::EPropertyClass::Float, "SkinCacheSceneMemoryLimitInMB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, SkinCacheSceneMemoryLimitInMB), METADATA_PARAMS(NewProp_SkinCacheSceneMemoryLimitInMB_MetaData, ARRAY_COUNT(NewProp_SkinCacheSceneMemoryLimitInMB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileDynamicPointLightsUseStaticBranch_MetaData[] = {
				{ "Category", "MobileShaderPermutationReduction" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.MobileDynamicPointLightsUseStaticBranch" },
				{ "DisplayName", "Use Shared Movable Point Light Shaders" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "If this setting is enabled, the same shader will be used for any number of dynamic point lights (up to the maximum specified above) hitting a surface. This is slightly slower but reduces the number of shaders generated. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bMobileDynamicPointLightsUseStaticBranch_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMobileDynamicPointLightsUseStaticBranch = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileDynamicPointLightsUseStaticBranch = { UE4CodeGen_Private::EPropertyClass::Bool, "bMobileDynamicPointLightsUseStaticBranch", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMobileDynamicPointLightsUseStaticBranch_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMobileDynamicPointLightsUseStaticBranch_MetaData, ARRAY_COUNT(NewProp_bMobileDynamicPointLightsUseStaticBranch_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileNumDynamicPointLights_MetaData[] = {
				{ "Category", "MobileShaderPermutationReduction" },
				{ "ClampMax", "4" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.MobileNumDynamicPointLights" },
				{ "DisplayName", "Max Movable Point Lights" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "The number of dynamic point lights to support on mobile devices. Setting this to 0 for games which do not require dynamic point lights will reduce the number of shaders generated. Changing this setting requires restarting the editor." },
			};
#endif
			static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MobileNumDynamicPointLights = { UE4CodeGen_Private::EPropertyClass::UInt32, "MobileNumDynamicPointLights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, MobileNumDynamicPointLights), METADATA_PARAMS(NewProp_MobileNumDynamicPointLights_MetaData, ARRAY_COUNT(NewProp_MobileNumDynamicPointLights_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowMovableDirectionalLights_MetaData[] = {
				{ "Category", "MobileShaderPermutationReduction" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.Mobile.AllowMovableDirectionalLights" },
				{ "DisplayName", "Support Movable Directional Lights" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Generate shaders for primitives to receive movable directional lights. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bMobileAllowMovableDirectionalLights_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMobileAllowMovableDirectionalLights = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowMovableDirectionalLights = { UE4CodeGen_Private::EPropertyClass::Bool, "bMobileAllowMovableDirectionalLights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMobileAllowMovableDirectionalLights_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMobileAllowMovableDirectionalLights_MetaData, ARRAY_COUNT(NewProp_bMobileAllowMovableDirectionalLights_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowDistanceFieldShadows_MetaData[] = {
				{ "Category", "MobileShaderPermutationReduction" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.Mobile.AllowDistanceFieldShadows" },
				{ "DisplayName", "Support Distance Field Shadows" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Generate shaders for primitives to receive distance field shadows from stationary directional lights. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bMobileAllowDistanceFieldShadows_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMobileAllowDistanceFieldShadows = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowDistanceFieldShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bMobileAllowDistanceFieldShadows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMobileAllowDistanceFieldShadows_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMobileAllowDistanceFieldShadows_MetaData, ARRAY_COUNT(NewProp_bMobileAllowDistanceFieldShadows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData[] = {
				{ "Category", "MobileShaderPermutationReduction" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.Mobile.EnableStaticAndCSMShadowReceivers" },
				{ "DisplayName", "Support Combined Static and CSM Shadowing" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Allow primitives to receive both static and CSM shadows from a stationary light. Disabling will free a mobile texture sampler and reduce shader permutations. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMobileEnableStaticAndCSMShadowReceivers = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableStaticAndCSMShadowReceivers = { UE4CodeGen_Private::EPropertyClass::Bool, "bMobileEnableStaticAndCSMShadowReceivers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData, ARRAY_COUNT(NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportSkinCacheShaders_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SkinCache.CompileShaders" },
				{ "DisplayName", "Support Compute Skincache" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "\"Skincache allows a compute shader to skin once each vertex, save those results into a new buffer and reuse those calculations when later running the depth, base and velocity passes. This also allows opting into the 'recompute tangents' for skinned mesh instance feature. Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
			};
#endif
			auto NewProp_bSupportSkinCacheShaders_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bSupportSkinCacheShaders = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportSkinCacheShaders = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportSkinCacheShaders", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportSkinCacheShaders_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportSkinCacheShaders_MetaData, ARRAY_COUNT(NewProp_bSupportSkinCacheShaders_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportAtmosphericFog_MetaData[] = {
				{ "Category", "ShaderPermutationReduction" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SupportAtmosphericFog" },
				{ "DisplayName", "Support Atmospheric Fog" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "\"Atmospheric fog requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
			};
#endif
			auto NewProp_bSupportAtmosphericFog_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bSupportAtmosphericFog = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportAtmosphericFog = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportAtmosphericFog", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportAtmosphericFog_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportAtmosphericFog_MetaData, ARRAY_COUNT(NewProp_bSupportAtmosphericFog_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportPointLightWholeSceneShadows_MetaData[] = {
				{ "Category", "ShaderPermutationReduction" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SupportPointLightWholeSceneShadows" },
				{ "DisplayName", "Support PointLight WholeSceneShadows" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "PointLight WholeSceneShadows requires many vertex and geometry shader permutations for cubemap rendering. Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
			};
#endif
			auto NewProp_bSupportPointLightWholeSceneShadows_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bSupportPointLightWholeSceneShadows = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportPointLightWholeSceneShadows = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportPointLightWholeSceneShadows", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportPointLightWholeSceneShadows_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportPointLightWholeSceneShadows_MetaData, ARRAY_COUNT(NewProp_bSupportPointLightWholeSceneShadows_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportLowQualityLightmaps_MetaData[] = {
				{ "Category", "ShaderPermutationReduction" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SupportLowQualityLightmaps" },
				{ "DisplayName", "Support low quality lightmap shader permutations" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "\"Low quality lightmap requires permutations of the lightmap rendering shaders.  Disabling will reduce the number of shader permutations required per material. Note that the mobile renderer requires low quality lightmaps, so disabling this setting is not recommended for mobile titles using static lighting. Changing this setting requires restarting the editor.\"" },
			};
#endif
			auto NewProp_bSupportLowQualityLightmaps_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bSupportLowQualityLightmaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportLowQualityLightmaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportLowQualityLightmaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportLowQualityLightmaps_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportLowQualityLightmaps_MetaData, ARRAY_COUNT(NewProp_bSupportLowQualityLightmaps_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportStationarySkylight_MetaData[] = {
				{ "Category", "ShaderPermutationReduction" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SupportStationarySkylight" },
				{ "DisplayName", "Support Stationary Skylight" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "\"Stationary skylight requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
			};
#endif
			auto NewProp_bSupportStationarySkylight_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bSupportStationarySkylight = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportStationarySkylight = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportStationarySkylight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportStationarySkylight_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportStationarySkylight_MetaData, ARRAY_COUNT(NewProp_bSupportStationarySkylight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WireframeCullThreshold_MetaData[] = {
				{ "Category", "Editor" },
				{ "ConsoleVariable", "r.WireframeCullThreshold" },
				{ "DisplayName", "Wireframe Cull Threshold" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Screen radius at which wireframe objects are culled. Larger values can improve performance when viewing a scene in wireframe." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WireframeCullThreshold = { UE4CodeGen_Private::EPropertyClass::Float, "WireframeCullThreshold", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, WireframeCullThreshold), METADATA_PARAMS(NewProp_WireframeCullThreshold_MetaData, ARRAY_COUNT(NewProp_WireframeCullThreshold_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugCanvasInLayer_MetaData[] = {
				{ "Category", "VR" },
				{ "ConsoleVariable", "vr.DebugCanvasInLayer" },
				{ "DisplayName", "Debug Canvas in Layer" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enables debug canvases to be rendered in HMD layers" },
			};
#endif
			auto NewProp_bDebugCanvasInLayer_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDebugCanvasInLayer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugCanvasInLayer = { UE4CodeGen_Private::EPropertyClass::Bool, "bDebugCanvasInLayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDebugCanvasInLayer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDebugCanvasInLayer_MetaData, ARRAY_COUNT(NewProp_bDebugCanvasInLayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMonoscopicFarField_MetaData[] = {
				{ "Category", "VR" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "vr.MonoscopicFarField" },
				{ "DisplayName", "Monoscopic Far Field" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enable monoscopic far field rendering (only available for mobile)." },
			};
#endif
			auto NewProp_bMonoscopicFarField_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMonoscopicFarField = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMonoscopicFarField = { UE4CodeGen_Private::EPropertyClass::Bool, "bMonoscopicFarField", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMonoscopicFarField_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMonoscopicFarField_MetaData, ARRAY_COUNT(NewProp_bMonoscopicFarField_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileMultiViewDirect_MetaData[] = {
				{ "Category", "VR" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "vr.MobileMultiView.Direct" },
				{ "DisplayName", "Mobile Multi-View Direct" },
				{ "EditCondition", "bMobileMultiView" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enable direct mobile multi-view rendering (only available on multi-view enabled GearVR and Daydream Android devices)." },
			};
#endif
			auto NewProp_bMobileMultiViewDirect_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMobileMultiViewDirect = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileMultiViewDirect = { UE4CodeGen_Private::EPropertyClass::Bool, "bMobileMultiViewDirect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMobileMultiViewDirect_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMobileMultiViewDirect_MetaData, ARRAY_COUNT(NewProp_bMobileMultiViewDirect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileMultiView_MetaData[] = {
				{ "Category", "VR" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "vr.MobileMultiView" },
				{ "DisplayName", "Mobile Multi-View" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enable mobile multi-view rendering (only available on some GearVR Android devices using OpenGL ES 2.0)." },
			};
#endif
			auto NewProp_bMobileMultiView_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMobileMultiView = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileMultiView = { UE4CodeGen_Private::EPropertyClass::Bool, "bMobileMultiView", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMobileMultiView_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMobileMultiView_MetaData, ARRAY_COUNT(NewProp_bMobileMultiView_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMultiView_MetaData[] = {
				{ "Category", "VR" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "vr.MultiView" },
				{ "DisplayName", "Multi-View" },
				{ "EditCondition", "bInstancedStereo" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enable multi-view for instanced stereo rendering (only available on the PS4)." },
			};
#endif
			auto NewProp_bMultiView_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMultiView = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMultiView = { UE4CodeGen_Private::EPropertyClass::Bool, "bMultiView", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMultiView_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMultiView_MetaData, ARRAY_COUNT(NewProp_bMultiView_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstancedStereo_MetaData[] = {
				{ "Category", "VR" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "vr.InstancedStereo" },
				{ "DisplayName", "Instanced Stereo" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enable instanced stereo rendering (only available for D3D SM5 or PS4)." },
			};
#endif
			auto NewProp_bInstancedStereo_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bInstancedStereo = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstancedStereo = { UE4CodeGen_Private::EPropertyClass::Bool, "bInstancedStereo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInstancedStereo_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInstancedStereo_MetaData, ARRAY_COUNT(NewProp_bInstancedStereo_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNvidiaAftermathEnabled_MetaData[] = {
				{ "Category", "Debugging" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.GPUCrashDebugging" },
				{ "DisplayName", "Enable vendor specific GPU crash analysis tools" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enables vendor specific GPU crash analysis tools.  Currently only supports NVIDIA Aftermath on DX11." },
			};
#endif
			auto NewProp_bNvidiaAftermathEnabled_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bNvidiaAftermathEnabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNvidiaAftermathEnabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bNvidiaAftermathEnabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNvidiaAftermathEnabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNvidiaAftermathEnabled_MetaData, ARRAY_COUNT(NewProp_bNvidiaAftermathEnabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseGPUMorphTargets_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConsoleVariable", "r.MorphTarget.Mode" },
				{ "DisplayName", "Use GPU for computing morph targets" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to use original CPU method (loop per morph then by vertex) or use a GPU-based method on Shader Model 5 hardware." },
			};
#endif
			auto NewProp_bUseGPUMorphTargets_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bUseGPUMorphTargets = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseGPUMorphTargets = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseGPUMorphTargets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseGPUMorphTargets_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseGPUMorphTargets_MetaData, ARRAY_COUNT(NewProp_bUseGPUMorphTargets_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GBufferFormat_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConsoleVariable", "r.GBufferFormat" },
				{ "DisplayName", "GBuffer Format" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Selects which GBuffer format should be used. Affects performance primarily via how much GPU memory bandwidth used." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_GBufferFormat = { UE4CodeGen_Private::EPropertyClass::Byte, "GBufferFormat", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, GBufferFormat), Z_Construct_UEnum_Engine_EGBufferFormat, METADATA_PARAMS(NewProp_GBufferFormat_MetaData, ARRAY_COUNT(NewProp_GBufferFormat_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalClipPlane_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.AllowGlobalClipPlane" },
				{ "DisplayName", "Support global clip plane for Planar Reflections" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to support the global clip plane needed for planar reflections.  Enabling this increases BasePass triangle cost by ~15% regardless of whether planar reflections are active. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bGlobalClipPlane_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bGlobalClipPlane = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalClipPlane = { UE4CodeGen_Private::EPropertyClass::Bool, "bGlobalClipPlane", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGlobalClipPlane_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGlobalClipPlane_MetaData, ARRAY_COUNT(NewProp_bGlobalClipPlane_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultParticleCutouts_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "DisplayName", "Enable Particle Cutouts by default" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "When enabled, after changing the material on a Required particle module a Particle Cutout texture will be chosen automatically from the Opacity Mask texture if it exists, if not the Opacity Texture will be used if it exists." },
			};
#endif
			auto NewProp_bDefaultParticleCutouts_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDefaultParticleCutouts = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultParticleCutouts = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultParticleCutouts", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultParticleCutouts_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultParticleCutouts_MetaData, ARRAY_COUNT(NewProp_bDefaultParticleCutouts_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSelectiveBasePassOutputs_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SelectiveBasePassOutputs" },
				{ "DisplayName", "Selectively output to the GBuffer rendertargets" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enables not exporting to the GBuffer rendertargets that are not relevant. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bSelectiveBasePassOutputs_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bSelectiveBasePassOutputs = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelectiveBasePassOutputs = { UE4CodeGen_Private::EPropertyClass::Bool, "bSelectiveBasePassOutputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSelectiveBasePassOutputs_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSelectiveBasePassOutputs_MetaData, ARRAY_COUNT(NewProp_bSelectiveBasePassOutputs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBasePassOutputsVelocity_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.BasePassOutputsVelocity" },
				{ "DisplayName", "Accurate velocities from Vertex Deformation" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Enables materials with time-based World Position Offset and/or World Displacement to output accurate velocities. This incurs a performance cost. If this is disabled, those materials will not output velocities. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bBasePassOutputsVelocity_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bBasePassOutputsVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBasePassOutputsVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bBasePassOutputsVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bBasePassOutputsVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bBasePassOutputsVelocity_MetaData, ARRAY_COUNT(NewProp_bBasePassOutputsVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClearSceneMethod_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConsoleVariable", "r.ClearSceneMethod" },
				{ "DisplayName", "Clear Scene" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Select how the g-buffer is cleared in game mode (only affects deferred shading)." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ClearSceneMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "ClearSceneMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, ClearSceneMethod), Z_Construct_UEnum_Engine_EClearSceneOptions, METADATA_PARAMS(NewProp_ClearSceneMethod_MetaData, ARRAY_COUNT(NewProp_ClearSceneMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDBuffer_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.DBuffer" },
				{ "DisplayName", "DBuffer Decals" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to accumulate decal properties to a buffer before the base pass.  DBuffer decals correctly affect lightmap and sky lighting, unlike regular deferred decals.  DBuffer enabled forces a full prepass.  Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bDBuffer_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDBuffer = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDBuffer = { UE4CodeGen_Private::EPropertyClass::Bool, "bDBuffer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDBuffer_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDBuffer_MetaData, ARRAY_COUNT(NewProp_bDBuffer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEarlyZPassOnlyMaterialMasking_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.EarlyZPassOnlyMaterialMasking" },
				{ "DisplayName", "Mask material only in early Z-pass" },
				{ "EditCondition", "EarlyZPass == OpaqueAndMasked && bEarlyZPassMovable" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to compute materials' mask opacity only in early Z pass. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bEarlyZPassOnlyMaterialMasking_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bEarlyZPassOnlyMaterialMasking = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEarlyZPassOnlyMaterialMasking = { UE4CodeGen_Private::EPropertyClass::Bool, "bEarlyZPassOnlyMaterialMasking", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEarlyZPassOnlyMaterialMasking_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEarlyZPassOnlyMaterialMasking_MetaData, ARRAY_COUNT(NewProp_bEarlyZPassOnlyMaterialMasking_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEarlyZPassMovable_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConsoleVariable", "r.EarlyZPassMovable" },
				{ "DisplayName", "Movables in early Z-pass" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to render movable objects in the early Z pass. Need to reload the level!" },
			};
#endif
			auto NewProp_bEarlyZPassMovable_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bEarlyZPassMovable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEarlyZPassMovable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEarlyZPassMovable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEarlyZPassMovable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEarlyZPassMovable_MetaData, ARRAY_COUNT(NewProp_bEarlyZPassMovable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyZPass_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConsoleVariable", "r.EarlyZPass" },
				{ "DisplayName", "Early Z-pass" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to use a depth only pass to initialize Z culling for the base pass." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_EarlyZPass = { UE4CodeGen_Private::EPropertyClass::Byte, "EarlyZPass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, EarlyZPass), Z_Construct_UEnum_Engine_EEarlyZPass, METADATA_PARAMS(NewProp_EarlyZPass_MetaData, ARRAY_COUNT(NewProp_EarlyZPass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStencilForLODDither_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.StencilForLODDither" },
				{ "DisplayName", "Use Stencil for LOD Dither Fading" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to use stencil for LOD dither fading.  This saves GPU time in the base pass for materials with dither fading enabled, but forces a full prepass. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bStencilForLODDither_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bStencilForLODDither = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStencilForLODDither = { UE4CodeGen_Private::EPropertyClass::Bool, "bStencilForLODDither", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bStencilForLODDither_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bStencilForLODDither_MetaData, ARRAY_COUNT(NewProp_bStencilForLODDither_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData[] = {
				{ "Category", "Optimizations" },
				{ "ConsoleVariable", "r.Shadow.UnbuiltPreviewInGame" },
				{ "DisplayName", "Render Unbuilt Preview Shadows in game" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to render unbuilt preview shadows in game.  When enabled and lighting is not built, expensive preview shadows will be rendered in game.  When disabled, lighting in game and editor won't match which can appear to be a bug." },
			};
#endif
			auto NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bRenderUnbuiltPreviewShadowsInGame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRenderUnbuiltPreviewShadowsInGame = { UE4CodeGen_Private::EPropertyClass::Bool, "bRenderUnbuiltPreviewShadowsInGame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData, ARRAY_COUNT(NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAntiAliasing_MetaData[] = {
				{ "Category", "DefaultSettings" },
				{ "ConsoleVariable", "r.DefaultFeature.AntiAliasing" },
				{ "DisplayName", "Anti-Aliasing Method" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "What anti-aliasing mode is used by default" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultFeatureAntiAliasing = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultFeatureAntiAliasing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, DefaultFeatureAntiAliasing), Z_Construct_UEnum_Engine_EAntiAliasingMethod, METADATA_PARAMS(NewProp_DefaultFeatureAntiAliasing_MetaData, ARRAY_COUNT(NewProp_DefaultFeatureAntiAliasing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureLensFlare_MetaData[] = {
				{ "Category", "DefaultSettings" },
				{ "ConsoleVariable", "r.DefaultFeature.LensFlare" },
				{ "DisplayName", "Lens Flares (Image based)" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether the default for LensFlare is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
			};
#endif
			auto NewProp_bDefaultFeatureLensFlare_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDefaultFeatureLensFlare = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureLensFlare = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultFeatureLensFlare", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultFeatureLensFlare_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultFeatureLensFlare_MetaData, ARRAY_COUNT(NewProp_bDefaultFeatureLensFlare_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureMotionBlur_MetaData[] = {
				{ "Category", "DefaultSettings" },
				{ "ConsoleVariable", "r.DefaultFeature.MotionBlur" },
				{ "DisplayName", "Motion Blur" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether the default for MotionBlur is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
			};
#endif
			auto NewProp_bDefaultFeatureMotionBlur_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDefaultFeatureMotionBlur = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureMotionBlur = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultFeatureMotionBlur", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultFeatureMotionBlur_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultFeatureMotionBlur_MetaData, ARRAY_COUNT(NewProp_bDefaultFeatureMotionBlur_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAutoExposure_MetaData[] = {
				{ "Category", "DefaultSettings" },
				{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.Method" },
				{ "DisplayName", "Auto Exposure" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "The default method for AutoExposure(postprocess volume/camera/game setting can still override and enable or disable it independently)" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultFeatureAutoExposure = { UE4CodeGen_Private::EPropertyClass::Byte, "DefaultFeatureAutoExposure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, DefaultFeatureAutoExposure), Z_Construct_UEnum_Engine_EAutoExposureMethodUI, METADATA_PARAMS(NewProp_DefaultFeatureAutoExposure_MetaData, ARRAY_COUNT(NewProp_DefaultFeatureAutoExposure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAutoExposure_MetaData[] = {
				{ "Category", "DefaultSettings" },
				{ "ConsoleVariable", "r.DefaultFeature.AutoExposure" },
				{ "DisplayName", "Auto Exposure" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether the default for AutoExposure is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
			};
#endif
			auto NewProp_bDefaultFeatureAutoExposure_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDefaultFeatureAutoExposure = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAutoExposure = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultFeatureAutoExposure", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultFeatureAutoExposure_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultFeatureAutoExposure_MetaData, ARRAY_COUNT(NewProp_bDefaultFeatureAutoExposure_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData[] = {
				{ "Category", "DefaultSettings" },
				{ "ConsoleVariable", "r.DefaultFeature.AmbientOcclusionStaticFraction" },
				{ "DisplayName", "Ambient Occlusion Static Fraction (AO for baked lighting)" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether the default for AmbientOcclusionStaticFraction is enabled or not (only useful for baked lighting and if AO is on, allows to have SSAO affect baked lighting as well, costs performance, postprocess volume/camera/game setting can still override and enable or disable it independently)" },
			};
#endif
			auto NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDefaultFeatureAmbientOcclusionStaticFraction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAmbientOcclusionStaticFraction = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultFeatureAmbientOcclusionStaticFraction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData, ARRAY_COUNT(NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAmbientOcclusion_MetaData[] = {
				{ "Category", "DefaultSettings" },
				{ "ConsoleVariable", "r.DefaultFeature.AmbientOcclusion" },
				{ "DisplayName", "Ambient Occlusion" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether the default for AmbientOcclusion is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
			};
#endif
			auto NewProp_bDefaultFeatureAmbientOcclusion_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDefaultFeatureAmbientOcclusion = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAmbientOcclusion = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultFeatureAmbientOcclusion", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultFeatureAmbientOcclusion_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultFeatureAmbientOcclusion_MetaData, ARRAY_COUNT(NewProp_bDefaultFeatureAmbientOcclusion_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureBloom_MetaData[] = {
				{ "Category", "DefaultSettings" },
				{ "ConsoleVariable", "r.DefaultFeature.Bloom" },
				{ "DisplayName", "Bloom" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether the default for Bloom is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
			};
#endif
			auto NewProp_bDefaultFeatureBloom_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDefaultFeatureBloom = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureBloom = { UE4CodeGen_Private::EPropertyClass::Bool, "bDefaultFeatureBloom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDefaultFeatureBloom_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDefaultFeatureBloom_MetaData, ARRAY_COUNT(NewProp_bDefaultFeatureBloom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAlphaChannelInPostProcessing_MetaData[] = {
				{ "Category", "Postprocessing" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.PostProcessing.PropagateAlpha" },
				{ "DisplayName", "Enable alpha channel support in post processing (experimental)." },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether alpha channel should be supported in post processing chain. Still experimental: works only with Temporal AA, Motion Blur, Circle Depth Of Field. This option also force disable the separate translucency." },
			};
#endif
			auto NewProp_bEnableAlphaChannelInPostProcessing_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bEnableAlphaChannelInPostProcessing = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAlphaChannelInPostProcessing = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAlphaChannelInPostProcessing", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEnableAlphaChannelInPostProcessing_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEnableAlphaChannelInPostProcessing_MetaData, ARRAY_COUNT(NewProp_bEnableAlphaChannelInPostProcessing_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCustomDepthTaaJitter_MetaData[] = {
				{ "Category", "Postprocessing" },
				{ "ConsoleVariable", "r.CustomDepthTemporalAAJitter" },
				{ "DisplayName", "Custom Depth with TemporalAA Jitter" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether the custom depth pass has the TemporalAA jitter enabled. Disabling this can be useful when the result of the CustomDepth Pass is used after TAA (e.g. after Tonemapping)" },
			};
#endif
			auto NewProp_bCustomDepthTaaJitter_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bCustomDepthTaaJitter = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCustomDepthTaaJitter = { UE4CodeGen_Private::EPropertyClass::Bool, "bCustomDepthTaaJitter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCustomDepthTaaJitter_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCustomDepthTaaJitter_MetaData, ARRAY_COUNT(NewProp_bCustomDepthTaaJitter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencil_MetaData[] = {
				{ "Category", "Postprocessing" },
				{ "ConsoleVariable", "r.CustomDepth" },
				{ "DisplayName", "Custom Depth-Stencil Pass" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether the custom depth pass for tagging primitives for postprocessing passes is enabled. Enabling it on demand can save memory but may cause a hitch the first time the feature is used." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencil = { UE4CodeGen_Private::EPropertyClass::Byte, "CustomDepthStencil", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, CustomDepthStencil), Z_Construct_UEnum_Engine_ECustomDepthStencil, METADATA_PARAMS(NewProp_CustomDepthStencil_MetaData, ARRAY_COUNT(NewProp_CustomDepthStencil_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortAxis_MetaData[] = {
				{ "Category", "Translucency" },
				{ "DisplayName", "Translucent Sort Axis" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "The axis that sorting will occur along when Translucent Sort Policy is set to SortAlongAxis." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TranslucentSortAxis = { UE4CodeGen_Private::EPropertyClass::Struct, "TranslucentSortAxis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, TranslucentSortAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TranslucentSortAxis_MetaData, ARRAY_COUNT(NewProp_TranslucentSortAxis_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortPolicy_MetaData[] = {
				{ "Category", "Translucency" },
				{ "ConsoleVariable", "r.TranslucentSortPolicy" },
				{ "DisplayName", "Translucent Sort Policy" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "The sort mode for translucent primitives, affecting how they are ordered and how they change order as the camera moves. Requires that Separate Translucency (under Postprocessing) is true." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TranslucentSortPolicy = { UE4CodeGen_Private::EPropertyClass::Byte, "TranslucentSortPolicy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, TranslucentSortPolicy), Z_Construct_UEnum_Engine_ETranslucentSortPolicy, METADATA_PARAMS(NewProp_TranslucentSortPolicy_MetaData, ARRAY_COUNT(NewProp_TranslucentSortPolicy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSeparateTranslucency_MetaData[] = {
				{ "Category", "Translucency" },
				{ "ConsoleVariable", "r.SeparateTranslucency" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Allow translucency to be rendered to a separate render targeted and composited after depth of field. Prevents translucency from appearing out of focus." },
			};
#endif
			auto NewProp_bSeparateTranslucency_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bSeparateTranslucency = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeparateTranslucency = { UE4CodeGen_Private::EPropertyClass::Bool, "bSeparateTranslucency", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSeparateTranslucency_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSeparateTranslucency_MetaData, ARRAY_COUNT(NewProp_bSeparateTranslucency_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TessellationAdaptivePixelsPerTriangle_MetaData[] = {
				{ "Category", "Tessellation" },
				{ "ConsoleVariable", "r.TessellationAdaptivePixelsPerTriangle" },
				{ "DisplayName", "Adaptive pixels per triangle" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "When adaptive tessellation is enabled it will try to tessellate a mesh so that each triangle contains the specified number of pixels. The tessellation multiplier specified in the material can increase or decrease the amount of tessellation." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TessellationAdaptivePixelsPerTriangle = { UE4CodeGen_Private::EPropertyClass::Float, "TessellationAdaptivePixelsPerTriangle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, TessellationAdaptivePixelsPerTriangle), METADATA_PARAMS(NewProp_TessellationAdaptivePixelsPerTriangle_MetaData, ARRAY_COUNT(NewProp_TessellationAdaptivePixelsPerTriangle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompressMeshDistanceFields_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.DistanceFieldBuild.Compress" },
				{ "EditCondition", "bGenerateMeshDistanceFields" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to store mesh distance fields compressed in memory, which reduces how much memory they take, but also causes serious hitches when making new levels visible.  Only enable if your project does not stream levels in-game.  Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bCompressMeshDistanceFields_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bCompressMeshDistanceFields = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompressMeshDistanceFields = { UE4CodeGen_Private::EPropertyClass::Bool, "bCompressMeshDistanceFields", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCompressMeshDistanceFields_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCompressMeshDistanceFields_MetaData, ARRAY_COUNT(NewProp_bCompressMeshDistanceFields_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateLandscapeGIData_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ConsoleVariable", "r.GenerateLandscapeGIData" },
				{ "DisplayName", "Generate Landscape Real-time GI Data" },
				{ "EditCondition", "bGenerateMeshDistanceFields" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to generate a low-resolution base color texture for landscapes for rendering real-time global illumination.  This feature requires GenerateMeshDistanceFields is also enabled, and will increase mesh build times and memory usage." },
			};
#endif
			auto NewProp_bGenerateLandscapeGIData_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bGenerateLandscapeGIData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateLandscapeGIData = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateLandscapeGIData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateLandscapeGIData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateLandscapeGIData_MetaData, ARRAY_COUNT(NewProp_bGenerateLandscapeGIData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEightBitMeshDistanceFields_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.DistanceFieldBuild.EightBit" },
				{ "EditCondition", "bGenerateMeshDistanceFields" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to store mesh distance fields in an 8 bit fixed point format instead of 16 bit floating point.  8 bit uses half the memory, but introduces artifacts for large meshes or thin meshes.  Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bEightBitMeshDistanceFields_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bEightBitMeshDistanceFields = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEightBitMeshDistanceFields = { UE4CodeGen_Private::EPropertyClass::Bool, "bEightBitMeshDistanceFields", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEightBitMeshDistanceFields_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEightBitMeshDistanceFields_MetaData, ARRAY_COUNT(NewProp_bEightBitMeshDistanceFields_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDistanceFields_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.GenerateMeshDistanceFields" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to build distance fields of static meshes, needed for distance field AO, which is used to implement Movable SkyLight shadows, and ray traced distance field shadows on directional lights.  Enabling will increase mesh build times and memory usage.  Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bGenerateMeshDistanceFields_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bGenerateMeshDistanceFields = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDistanceFields = { UE4CodeGen_Private::EPropertyClass::Bool, "bGenerateMeshDistanceFields", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGenerateMeshDistanceFields_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGenerateMeshDistanceFields_MetaData, ARRAY_COUNT(NewProp_bGenerateMeshDistanceFields_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseNormalMapsForStaticLighting_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ConsoleVariable", "r.NormalMapsForStaticLighting" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to allow any static lighting to use normal maps for lighting computations." },
			};
#endif
			auto NewProp_bUseNormalMapsForStaticLighting_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bUseNormalMapsForStaticLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseNormalMapsForStaticLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseNormalMapsForStaticLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseNormalMapsForStaticLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseNormalMapsForStaticLighting_MetaData, ARRAY_COUNT(NewProp_bUseNormalMapsForStaticLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStaticLighting_MetaData[] = {
				{ "Category", "Lighting" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.AllowStaticLighting" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to allow any static lighting to be generated and used, like lightmaps and shadowmaps. Games that only use dynamic lighting should set this to 0 to save some static lighting overhead. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bAllowStaticLighting_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bAllowStaticLighting = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStaticLighting = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStaticLighting", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAllowStaticLighting_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAllowStaticLighting_MetaData, ARRAY_COUNT(NewProp_bAllowStaticLighting_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVertexFoggingForOpaque_MetaData[] = {
				{ "Category", "ForwardRenderer" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.VertexFoggingForOpaque" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Causes opaque materials to use per-vertex fogging, which costs less and integrates properly with MSAA.  Only supported with forward shading. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bVertexFoggingForOpaque_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bVertexFoggingForOpaque = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVertexFoggingForOpaque = { UE4CodeGen_Private::EPropertyClass::Bool, "bVertexFoggingForOpaque", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bVertexFoggingForOpaque_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bVertexFoggingForOpaque_MetaData, ARRAY_COUNT(NewProp_bVertexFoggingForOpaque_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForwardShading_MetaData[] = {
				{ "Category", "ForwardRenderer" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.ForwardShading" },
				{ "DisplayName", "Forward Shading" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to use forward shading on desktop platforms, requires Shader Model 5 hardware.  Forward shading supports MSAA and has lower default cost, but fewer features supported overall.  Materials have to opt-in to more expensive features like high quality reflections.  Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bForwardShading_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bForwardShading = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForwardShading = { UE4CodeGen_Private::EPropertyClass::Bool, "bForwardShading", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForwardShading_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForwardShading_MetaData, ARRAY_COUNT(NewProp_bForwardShading_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData[] = {
				{ "Category", "Reflections" },
				{ "ConsoleVariable", "r.ReflectionEnvironmentLightmapMixBasedOnRoughness" },
				{ "DisplayName", "Reduce lightmap mixing on smooth surfaces" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to reduce lightmap mixing with reflection captures for very smooth surfaces.  This is useful to make sure reflection captures match SSR / planar reflections in brightness." },
			};
#endif
			auto NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->ReflectionEnvironmentLightmapMixBasedOnRoughness = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness = { UE4CodeGen_Private::EPropertyClass::Bool, "ReflectionEnvironmentLightmapMixBasedOnRoughness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData, ARRAY_COUNT(NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReflectionCaptureResolution_MetaData[] = {
				{ "Category", "Reflections" },
				{ "ConsoleVariable", "r.ReflectionCaptureResolution" },
				{ "DisplayName", "Reflection Capture Resolution" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "The cubemap resolution for all reflection capture probes. Must be power of 2. Note that for very high values the memory and performance impact may be severe." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReflectionCaptureResolution = { UE4CodeGen_Private::EPropertyClass::Int, "ReflectionCaptureResolution", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, ReflectionCaptureResolution), METADATA_PARAMS(NewProp_ReflectionCaptureResolution_MetaData, ARRAY_COUNT(NewProp_ReflectionCaptureResolution_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClearCoatEnableSecondNormal_MetaData[] = {
				{ "Category", "Materials" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.ClearCoatNormal" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Use a separate normal map for the bottom layer of a clear coat material. This is a higher quality feature that is expensive." },
			};
#endif
			auto NewProp_bClearCoatEnableSecondNormal_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bClearCoatEnableSecondNormal = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClearCoatEnableSecondNormal = { UE4CodeGen_Private::EPropertyClass::Bool, "bClearCoatEnableSecondNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bClearCoatEnableSecondNormal_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bClearCoatEnableSecondNormal_MetaData, ARRAY_COUNT(NewProp_bClearCoatEnableSecondNormal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDXT5NormalMaps_MetaData[] = {
				{ "Category", "Textures" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "Compat.UseDXT5NormalMaps" },
				{ "DisplayName", "Use DXT5 Normal Maps" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Whether to use DXT5 for normal maps, otherwise BC5 will be used, which is not supported on all hardware. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bUseDXT5NormalMaps_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bUseDXT5NormalMaps = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDXT5NormalMaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDXT5NormalMaps", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUseDXT5NormalMaps_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUseDXT5NormalMaps_MetaData, ARRAY_COUNT(NewProp_bUseDXT5NormalMaps_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTextureStreaming_MetaData[] = {
				{ "Category", "Textures" },
				{ "ConsoleVariable", "r.TextureStreaming" },
				{ "DisplayName", "Texture Streaming" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "When enabled textures will stream in based on what is visible on screen." },
			};
#endif
			auto NewProp_bTextureStreaming_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bTextureStreaming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTextureStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bTextureStreaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTextureStreaming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTextureStreaming_MetaData, ARRAY_COUNT(NewProp_bTextureStreaming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPrecomputedVisibilityWarning_MetaData[] = {
				{ "Category", "Culling" },
				{ "ConsoleVariable", "r.PrecomputedVisibilityWarning" },
				{ "DisplayName", "Warn about no precomputed visibility" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Displays a warning when no precomputed visibility data is available for the current camera location. This can be helpful if you are making a game that relies on precomputed visibility, e.g. a first person mobile game." },
			};
#endif
			auto NewProp_bPrecomputedVisibilityWarning_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bPrecomputedVisibilityWarning = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrecomputedVisibilityWarning = { UE4CodeGen_Private::EPropertyClass::Bool, "bPrecomputedVisibilityWarning", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPrecomputedVisibilityWarning_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPrecomputedVisibilityWarning_MetaData, ARRAY_COUNT(NewProp_bPrecomputedVisibilityWarning_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForCSMdepth_MetaData[] = {
				{ "Category", "Culling" },
				{ "ConsoleVariable", "r.MinScreenRadiusForCSMDepth" },
				{ "DisplayName", "Min Screen Radius for Cascaded Shadow Maps" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Screen radius at which objects are culled for cascaded shadow map depth passes. Larger values can improve performance but can cause artifacts as objects stop casting shadows." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForCSMdepth = { UE4CodeGen_Private::EPropertyClass::Float, "MinScreenRadiusForCSMdepth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForCSMdepth), METADATA_PARAMS(NewProp_MinScreenRadiusForCSMdepth_MetaData, ARRAY_COUNT(NewProp_MinScreenRadiusForCSMdepth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForEarlyZPass_MetaData[] = {
				{ "Category", "Culling" },
				{ "ConsoleVariable", "r.MinScreenRadiusForDepthPrepass" },
				{ "DisplayName", "Min Screen Radius for Early Z Pass" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Screen radius at which objects are culled for the early Z pass. Larger values can improve performance but very large values can degrade performance if large occluders are not rendered." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForEarlyZPass = { UE4CodeGen_Private::EPropertyClass::Float, "MinScreenRadiusForEarlyZPass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForEarlyZPass), METADATA_PARAMS(NewProp_MinScreenRadiusForEarlyZPass_MetaData, ARRAY_COUNT(NewProp_MinScreenRadiusForEarlyZPass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForLights_MetaData[] = {
				{ "Category", "Culling" },
				{ "ConsoleVariable", "r.MinScreenRadiusForLights" },
				{ "DisplayName", "Min Screen Radius for Lights" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Screen radius at which lights are culled. Larger values can improve performance but causes lights to pop off when they affect a small area of the screen." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForLights = { UE4CodeGen_Private::EPropertyClass::Float, "MinScreenRadiusForLights", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForLights), METADATA_PARAMS(NewProp_MinScreenRadiusForLights_MetaData, ARRAY_COUNT(NewProp_MinScreenRadiusForLights_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOcclusionCulling_MetaData[] = {
				{ "Category", "Culling" },
				{ "ConsoleVariable", "r.AllowOcclusionQueries" },
				{ "DisplayName", "Occlusion Culling" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Allows occluded meshes to be culled and no rendered." },
			};
#endif
			auto NewProp_bOcclusionCulling_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bOcclusionCulling = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOcclusionCulling = { UE4CodeGen_Private::EPropertyClass::Bool, "bOcclusionCulling", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOcclusionCulling_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOcclusionCulling_MetaData, ARRAY_COUNT(NewProp_bOcclusionCulling_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDiscardUnusedQualityLevels_MetaData[] = {
				{ "Category", "Materials" },
				{ "ConsoleVariable", "r.DiscardUnusedQuality" },
				{ "DisplayName", "Game Discards Unused Material Quality Levels" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "When running in game mode, whether to keep shaders for all quality levels in memory or only those needed for the current quality level.\nUnchecked: Keep all quality levels in memory allowing a runtime quality level change. (default)\nChecked: Discard unused quality levels when loading content for the game, saving some memory." },
			};
#endif
			auto NewProp_bDiscardUnusedQualityLevels_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bDiscardUnusedQualityLevels = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDiscardUnusedQualityLevels = { UE4CodeGen_Private::EPropertyClass::Bool, "bDiscardUnusedQualityLevels", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDiscardUnusedQualityLevels_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDiscardUnusedQualityLevels_MetaData, ARRAY_COUNT(NewProp_bDiscardUnusedQualityLevels_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MobileMSAASampleCount_MetaData[] = {
				{ "Category", "Mobile" },
				{ "ConsoleVariable", "r.MobileMSAA" },
				{ "DisplayName", "Mobile MSAA" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "Multi-sample anti-aliasing setting to use on mobile. MSAA is currently supported using Metal on iOS, and on Android devices with the required support using ES 2 or ES 3.1.\nIf MSAA is not available, the current default AA method will be used." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_MobileMSAASampleCount = { UE4CodeGen_Private::EPropertyClass::Byte, "MobileMSAASampleCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, MobileMSAASampleCount), Z_Construct_UEnum_Engine_EMobileMSAASampleCount, METADATA_PARAMS(NewProp_MobileMSAASampleCount_MetaData, ARRAY_COUNT(NewProp_MobileMSAASampleCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMobileCascades_MetaData[] = {
				{ "Category", "Mobile" },
				{ "ClampMax", "4" },
				{ "ClampMin", "1" },
				{ "ConsoleVariable", "r.Shadow.CSM.MaxMobileCascades" },
				{ "DisplayName", "Maximum number of CSM cascades to render" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "The maximum number of cascades with which to render dynamic directional light shadows when using the mobile renderer." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxMobileCascades = { UE4CodeGen_Private::EPropertyClass::Int, "MaxMobileCascades", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(URendererSettings, MaxMobileCascades), METADATA_PARAMS(NewProp_MaxMobileCascades_MetaData, ARRAY_COUNT(NewProp_MaxMobileCascades_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileDisableVertexFog_MetaData[] = {
				{ "Category", "Mobile" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.Mobile.DisableVertexFog" },
				{ "DisplayName", "Disable vertex fogging in mobile shaders" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "If true, vertex fog will be omitted from all mobile shaders. If your game does not use fog, you should choose this setting to increase shading performance." },
			};
#endif
			auto NewProp_bMobileDisableVertexFog_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMobileDisableVertexFog = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileDisableVertexFog = { UE4CodeGen_Private::EPropertyClass::Bool, "bMobileDisableVertexFog", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMobileDisableVertexFog_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMobileDisableVertexFog_MetaData, ARRAY_COUNT(NewProp_bMobileDisableVertexFog_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMobileHDR_MetaData[] = {
				{ "Category", "Mobile" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.MobileHDR" },
				{ "DisplayName", "Mobile HDR" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "If true, mobile renders in full HDR. Disable this setting for games that do not require lighting features for better performance on slow devices. Changing this setting requires restarting the editor." },
			};
#endif
			auto NewProp_bMobileHDR_SetBit = [](void* Obj){ ((URendererSettings*)Obj)->bMobileHDR = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMobileHDR = { UE4CodeGen_Private::EPropertyClass::Bool, "bMobileHDR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMobileHDR_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMobileHDR_MetaData, ARRAY_COUNT(NewProp_bMobileHDR_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportReversedIndexBuffers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportDepthOnlyIndexBuffers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGPUSkinLimit2BoneInfluences,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkinCacheSceneMemoryLimitInMB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMobileDynamicPointLightsUseStaticBranch,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MobileNumDynamicPointLights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMobileAllowMovableDirectionalLights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMobileAllowDistanceFieldShadows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMobileEnableStaticAndCSMShadowReceivers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportSkinCacheShaders,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportAtmosphericFog,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportPointLightWholeSceneShadows,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportLowQualityLightmaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportStationarySkylight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WireframeCullThreshold,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDebugCanvasInLayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMonoscopicFarField,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMobileMultiViewDirect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMobileMultiView,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMultiView,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInstancedStereo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNvidiaAftermathEnabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseGPUMorphTargets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GBufferFormat,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGlobalClipPlane,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultParticleCutouts,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSelectiveBasePassOutputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bBasePassOutputsVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ClearSceneMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDBuffer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEarlyZPassOnlyMaterialMasking,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEarlyZPassMovable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EarlyZPass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bStencilForLODDither,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRenderUnbuiltPreviewShadowsInGame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultFeatureAntiAliasing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultFeatureLensFlare,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultFeatureMotionBlur,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DefaultFeatureAutoExposure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultFeatureAutoExposure,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultFeatureAmbientOcclusionStaticFraction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultFeatureAmbientOcclusion,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDefaultFeatureBloom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEnableAlphaChannelInPostProcessing,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCustomDepthTaaJitter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CustomDepthStencil,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentSortAxis,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentSortPolicy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSeparateTranslucency,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TessellationAdaptivePixelsPerTriangle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCompressMeshDistanceFields,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateLandscapeGIData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEightBitMeshDistanceFields,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGenerateMeshDistanceFields,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseNormalMapsForStaticLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAllowStaticLighting,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bVertexFoggingForOpaque,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForwardShading,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReflectionCaptureResolution,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bClearCoatEnableSecondNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUseDXT5NormalMaps,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTextureStreaming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPrecomputedVisibilityWarning,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinScreenRadiusForCSMdepth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinScreenRadiusForEarlyZPass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinScreenRadiusForLights,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOcclusionCulling,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDiscardUnusedQualityLevels,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MobileMSAASampleCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxMobileCascades,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMobileDisableVertexFog,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMobileHDR,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URendererSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URendererSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URendererSettings, 3956619080);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URendererSettings(Z_Construct_UClass_URendererSettings, &URendererSettings::StaticClass, TEXT("/Script/Engine"), TEXT("URendererSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URendererSettings);
	void URendererOverrideSettings::StaticRegisterNativesURendererOverrideSettings()
	{
	}
	UClass* Z_Construct_UClass_URendererOverrideSettings_NoRegister()
	{
		return URendererOverrideSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_URendererOverrideSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Rendering Overrides (Local)" },
				{ "IncludePath", "Engine/RendererSettings.h" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRecomputeTangents_MetaData[] = {
				{ "Category", "Miscellaneous" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SkinCache.ForceRecomputeTangents" },
				{ "DisplayName", "Force all skinned meshes to recompute tangents (also forces Compute SkinCache)" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
			};
#endif
			auto NewProp_bForceRecomputeTangents_SetBit = [](void* Obj){ ((URendererOverrideSettings*)Obj)->bForceRecomputeTangents = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRecomputeTangents = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRecomputeTangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererOverrideSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceRecomputeTangents_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceRecomputeTangents_MetaData, ARRAY_COUNT(NewProp_bForceRecomputeTangents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportAllShaderPermutations_MetaData[] = {
				{ "Category", "ShaderPermutationReduction" },
				{ "ConfigRestartRequired", "TRUE" },
				{ "ConsoleVariable", "r.SupportAllShaderPermutations" },
				{ "DisplayName", "Force all shader permutation support" },
				{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
				{ "ToolTip", "\"Enabling will locally override all ShaderPermutationReduction settings from the Renderer section to be enabled.  Saved to local user config only..\"" },
			};
#endif
			auto NewProp_bSupportAllShaderPermutations_SetBit = [](void* Obj){ ((URendererOverrideSettings*)Obj)->bSupportAllShaderPermutations = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportAllShaderPermutations = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportAllShaderPermutations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(URendererOverrideSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportAllShaderPermutations_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportAllShaderPermutations_MetaData, ARRAY_COUNT(NewProp_bSupportAllShaderPermutations_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceRecomputeTangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportAllShaderPermutations,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URendererOverrideSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URendererOverrideSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x08100084u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URendererOverrideSettings, 2353294544);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URendererOverrideSettings(Z_Construct_UClass_URendererOverrideSettings, &URendererOverrideSettings::StaticClass, TEXT("/Script/Engine"), TEXT("URendererOverrideSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URendererOverrideSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
