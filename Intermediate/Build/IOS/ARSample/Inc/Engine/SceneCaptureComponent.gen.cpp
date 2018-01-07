// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/SceneCaptureComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents();
	ENGINE_API UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent();
// End Cross Module References
	static UEnum* ESceneCapturePrimitiveRenderMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode, Z_Construct_UPackage__Script_Engine(), TEXT("ESceneCapturePrimitiveRenderMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESceneCapturePrimitiveRenderMode(ESceneCapturePrimitiveRenderMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ESceneCapturePrimitiveRenderMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_CRC() { return 1573400611U; }
	UEnum* Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESceneCapturePrimitiveRenderMode"), 0, Get_Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture", (int64)ESceneCapturePrimitiveRenderMode::PRM_LegacySceneCapture },
				{ "ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives", (int64)ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives },
				{ "ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList", (int64)ESceneCapturePrimitiveRenderMode::PRM_UseShowOnlyList },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "PRM_LegacySceneCapture.DisplayName", "Render Scene Primitives" },
				{ "PRM_LegacySceneCapture.ToolTip", "Legacy" },
				{ "PRM_RenderScenePrimitives.DisplayName", "Render Scene Primitives" },
				{ "PRM_RenderScenePrimitives.ToolTip", "Render primitives in the scene, minus HiddenActors." },
				{ "PRM_UseShowOnlyList.DisplayName", "Use ShowOnly List" },
				{ "PRM_UseShowOnlyList.ToolTip", "Render only primitives in the ShowOnlyActors list, or components specified with ShowOnlyComponent()." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESceneCapturePrimitiveRenderMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ESceneCapturePrimitiveRenderMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FEngineShowFlagsSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineShowFlagsSetting, Z_Construct_UPackage__Script_Engine(), TEXT("EngineShowFlagsSetting"), sizeof(FEngineShowFlagsSetting), Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEngineShowFlagsSetting(FEngineShowFlagsSetting::StaticStruct, TEXT("/Script/Engine"), TEXT("EngineShowFlagsSetting"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFEngineShowFlagsSetting
{
	FScriptStruct_Engine_StaticRegisterNativesFEngineShowFlagsSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EngineShowFlagsSetting")),new UScriptStruct::TCppStructOps<FEngineShowFlagsSetting>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFEngineShowFlagsSetting;
	UScriptStruct* Z_Construct_UScriptStruct_FEngineShowFlagsSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EngineShowFlagsSetting"), sizeof(FEngineShowFlagsSetting), Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineShowFlagsSetting>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Enabled_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
			};
#endif
			auto NewProp_Enabled_SetBit = [](void* Obj){ ((FEngineShowFlagsSetting*)Obj)->Enabled = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Enabled = { UE4CodeGen_Private::EPropertyClass::Bool, "Enabled", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FEngineShowFlagsSetting), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Enabled_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Enabled_MetaData, ARRAY_COUNT(NewProp_Enabled_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowFlagName_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ShowFlagName = { UE4CodeGen_Private::EPropertyClass::Str, "ShowFlagName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEngineShowFlagsSetting, ShowFlagName), METADATA_PARAMS(NewProp_ShowFlagName_MetaData, ARRAY_COUNT(NewProp_ShowFlagName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Enabled,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowFlagName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"EngineShowFlagsSetting",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FEngineShowFlagsSetting),
				alignof(FEngineShowFlagsSetting),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEngineShowFlagsSetting_CRC() { return 2054159880U; }
	void USceneCaptureComponent::StaticRegisterNativesUSceneCaptureComponent()
	{
		UClass* Class = USceneCaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearHiddenComponents", (Native)&USceneCaptureComponent::execClearHiddenComponents },
			{ "ClearShowOnlyComponents", (Native)&USceneCaptureComponent::execClearShowOnlyComponents },
			{ "HideActorComponents", (Native)&USceneCaptureComponent::execHideActorComponents },
			{ "HideComponent", (Native)&USceneCaptureComponent::execHideComponent },
			{ "RemoveShowOnlyActorComponents", (Native)&USceneCaptureComponent::execRemoveShowOnlyActorComponents },
			{ "RemoveShowOnlyComponent", (Native)&USceneCaptureComponent::execRemoveShowOnlyComponent },
			{ "SetCaptureSortPriority", (Native)&USceneCaptureComponent::execSetCaptureSortPriority },
			{ "ShowOnlyActorComponents", (Native)&USceneCaptureComponent::execShowOnlyActorComponents },
			{ "ShowOnlyComponent", (Native)&USceneCaptureComponent::execShowOnlyComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Clears the hidden list." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, "ClearHiddenComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents()
	{
		struct SceneCaptureComponent_eventClearShowOnlyComponents_Parms
		{
			UPrimitiveComponent* InComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent_eventClearShowOnlyComponents_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_InComponent_MetaData, ARRAY_COUNT(NewProp_InComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Clears the Show Only list." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, "ClearShowOnlyComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureComponent_eventClearShowOnlyComponents_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents()
	{
		struct SceneCaptureComponent_eventHideActorComponents_Parms
		{
			AActor* InActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor = { UE4CodeGen_Private::EPropertyClass::Object, "InActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent_eventHideActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Adds all primitive components in the actor to our list of hidden components." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, "HideActorComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureComponent_eventHideActorComponents_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_HideComponent()
	{
		struct SceneCaptureComponent_eventHideComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent_eventHideComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_InComponent_MetaData, ARRAY_COUNT(NewProp_InComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Adds the component to our list of hidden components." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, "HideComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureComponent_eventHideComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents()
	{
		struct SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms
		{
			AActor* InActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor = { UE4CodeGen_Private::EPropertyClass::Object, "InActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Removes a actor's components from the Show Only list." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, "RemoveShowOnlyActorComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureComponent_eventRemoveShowOnlyActorComponents_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent()
	{
		struct SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_InComponent_MetaData, ARRAY_COUNT(NewProp_InComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Removes a component from the Show Only list." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, "RemoveShowOnlyComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureComponent_eventRemoveShowOnlyComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority()
	{
		struct SceneCaptureComponent_eventSetCaptureSortPriority_Parms
		{
			int32 NewCaptureSortPriority;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewCaptureSortPriority = { UE4CodeGen_Private::EPropertyClass::Int, "NewCaptureSortPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent_eventSetCaptureSortPriority_Parms, NewCaptureSortPriority), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewCaptureSortPriority,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Changes the value of TranslucentSortPriority." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, "SetCaptureSortPriority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureComponent_eventSetCaptureSortPriority_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents()
	{
		struct SceneCaptureComponent_eventShowOnlyActorComponents_Parms
		{
			AActor* InActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor = { UE4CodeGen_Private::EPropertyClass::Object, "InActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent_eventShowOnlyActorComponents_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Adds all primitive components in the actor to our list of show-only components." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, "ShowOnlyActorComponents", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureComponent_eventShowOnlyActorComponents_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent()
	{
		struct SceneCaptureComponent_eventShowOnlyComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SceneCaptureComponent_eventShowOnlyComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_InComponent_MetaData, ARRAY_COUNT(NewProp_InComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Adds the component to our list of show-only components." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent, "ShowOnlyComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SceneCaptureComponent_eventShowOnlyComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USceneCaptureComponent_NoRegister()
	{
		return USceneCaptureComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_USceneCaptureComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USceneCaptureComponent_ClearHiddenComponents, "ClearHiddenComponents" }, // 1703663742
				{ &Z_Construct_UFunction_USceneCaptureComponent_ClearShowOnlyComponents, "ClearShowOnlyComponents" }, // 842491429
				{ &Z_Construct_UFunction_USceneCaptureComponent_HideActorComponents, "HideActorComponents" }, // 3290078911
				{ &Z_Construct_UFunction_USceneCaptureComponent_HideComponent, "HideComponent" }, // 467162387
				{ &Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyActorComponents, "RemoveShowOnlyActorComponents" }, // 3315136445
				{ &Z_Construct_UFunction_USceneCaptureComponent_RemoveShowOnlyComponent, "RemoveShowOnlyComponent" }, // 212604872
				{ &Z_Construct_UFunction_USceneCaptureComponent_SetCaptureSortPriority, "SetCaptureSortPriority" }, // 989835750
				{ &Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyActorComponents, "ShowOnlyActorComponents" }, // 3411412560
				{ &Z_Construct_UFunction_USceneCaptureComponent_ShowOnlyComponent, "ShowOnlyComponent" }, // 1564565363
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "abstract Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
				{ "IncludePath", "Components/SceneCaptureComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "-> will be exported to EngineDecalClasses.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowFlagSettings_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "ShowFlags for the SceneCapture's ViewFamily, to control rendering settings for this view. Hidden but accessible through details customization" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowFlagSettings = { UE4CodeGen_Private::EPropertyClass::Array, "ShowFlagSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent, ShowFlagSettings), METADATA_PARAMS(NewProp_ShowFlagSettings_MetaData, ARRAY_COUNT(NewProp_ShowFlagSettings_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShowFlagSettings_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ShowFlagSettings", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEngineShowFlagsSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureSortPriority_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Capture priority within the frame to sort scene capture on GPU to resolve interdependencies between multiple capture components. Highest come first." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CaptureSortPriority = { UE4CodeGen_Private::EPropertyClass::Int, "CaptureSortPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent, CaptureSortPriority), METADATA_PARAMS(NewProp_CaptureSortPriority_MetaData, ARRAY_COUNT(NewProp_CaptureSortPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxViewDistanceOverride_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "if > 0, sets a maximum render distance override.  Can be used to cull distant objects from a reflection if the reflecting plane is in an enclosed area like a hallway or room" },
				{ "UIMax", "10000" },
				{ "UIMin", "100" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxViewDistanceOverride = { UE4CodeGen_Private::EPropertyClass::Float, "MaxViewDistanceOverride", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent, MaxViewDistanceOverride), METADATA_PARAMS(NewProp_MaxViewDistanceOverride_MetaData, ARRAY_COUNT(NewProp_MaxViewDistanceOverride_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODDistanceFactor_MetaData[] = {
				{ "Category", "PlanarReflection" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Scales the distance used by LOD. Set to values greater than 1 to cause the scene capture to use lower LODs than the main view to speed up the scene capture pass." },
				{ "UIMax", "10" },
				{ "UIMin", ".1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODDistanceFactor = { UE4CodeGen_Private::EPropertyClass::Float, "LODDistanceFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent, LODDistanceFactor), METADATA_PARAMS(NewProp_LODDistanceFactor_MetaData, ARRAY_COUNT(NewProp_LODDistanceFactor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysPersistRenderingState_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "editcondition", "!bCaptureEveryFrame" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Whether to persist the rendering state even if bCaptureEveryFrame==false.  This allows velocities for Motion Blur and Temporal AA to be computed." },
			};
#endif
			auto NewProp_bAlwaysPersistRenderingState_SetBit = [](void* Obj){ ((USceneCaptureComponent*)Obj)->bAlwaysPersistRenderingState = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysPersistRenderingState = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysPersistRenderingState", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USceneCaptureComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysPersistRenderingState_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysPersistRenderingState_MetaData, ARRAY_COUNT(NewProp_bAlwaysPersistRenderingState_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureOnMovement_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Whether to update the capture's contents on movement.  Disable if you are going to capture manually from blueprint." },
			};
#endif
			auto NewProp_bCaptureOnMovement_SetBit = [](void* Obj){ ((USceneCaptureComponent*)Obj)->bCaptureOnMovement = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureOnMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bCaptureOnMovement", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USceneCaptureComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCaptureOnMovement_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCaptureOnMovement_MetaData, ARRAY_COUNT(NewProp_bCaptureOnMovement_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCaptureEveryFrame_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Whether to update the capture's contents every frame.  If disabled, the component will render once on load and then only when moved." },
			};
#endif
			auto NewProp_bCaptureEveryFrame_SetBit = [](void* Obj){ ((USceneCaptureComponent*)Obj)->bCaptureEveryFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCaptureEveryFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bCaptureEveryFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USceneCaptureComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCaptureEveryFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCaptureEveryFrame_MetaData, ARRAY_COUNT(NewProp_bCaptureEveryFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyActors_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "The only actors to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyActors = { UE4CodeGen_Private::EPropertyClass::Array, "ShowOnlyActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent, ShowOnlyActors), METADATA_PARAMS(NewProp_ShowOnlyActors_MetaData, ARRAY_COUNT(NewProp_ShowOnlyActors_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShowOnlyActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ShowOnlyActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowOnlyComponents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "The only components to be rendered by this scene capture, if PrimitiveRenderMode is set to UseShowOnlyList." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShowOnlyComponents = { UE4CodeGen_Private::EPropertyClass::Array, "ShowOnlyComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014008000000008, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent, ShowOnlyComponents), METADATA_PARAMS(NewProp_ShowOnlyComponents_MetaData, ARRAY_COUNT(NewProp_ShowOnlyComponents_MetaData)) };
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ShowOnlyComponents_Inner = { UE4CodeGen_Private::EPropertyClass::WeakObject, "ShowOnlyComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000080008, 1, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "The actors to hide in the scene capture." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenActors = { UE4CodeGen_Private::EPropertyClass::Array, "HiddenActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent, HiddenActors), METADATA_PARAMS(NewProp_HiddenActors_MetaData, ARRAY_COUNT(NewProp_HiddenActors_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "HiddenActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenComponents_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "The components won't rendered by current component." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenComponents = { UE4CodeGen_Private::EPropertyClass::Array, "HiddenComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014008000000008, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent, HiddenComponents), METADATA_PARAMS(NewProp_HiddenComponents_MetaData, ARRAY_COUNT(NewProp_HiddenComponents_MetaData)) };
			static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenComponents_Inner = { UE4CodeGen_Private::EPropertyClass::WeakObject, "HiddenComponents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0004000000080008, 1, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveRenderMode_MetaData[] = {
				{ "Category", "SceneCapture" },
				{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent.h" },
				{ "ToolTip", "Controls what primitives get rendered into the scene capture." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrimitiveRenderMode = { UE4CodeGen_Private::EPropertyClass::Enum, "PrimitiveRenderMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(USceneCaptureComponent, PrimitiveRenderMode), Z_Construct_UEnum_Engine_ESceneCapturePrimitiveRenderMode, METADATA_PARAMS(NewProp_PrimitiveRenderMode_MetaData, ARRAY_COUNT(NewProp_PrimitiveRenderMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimitiveRenderMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowFlagSettings,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowFlagSettings_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CaptureSortPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxViewDistanceOverride,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODDistanceFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysPersistRenderingState,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCaptureOnMovement,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCaptureEveryFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowOnlyActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowOnlyActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowOnlyComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ShowOnlyComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HiddenActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HiddenActors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HiddenComponents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HiddenComponents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimitiveRenderMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PrimitiveRenderMode_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USceneCaptureComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USceneCaptureComponent::StaticClass,
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
	IMPLEMENT_CLASS(USceneCaptureComponent, 2287839200);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USceneCaptureComponent(Z_Construct_UClass_USceneCaptureComponent, &USceneCaptureComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USceneCaptureComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
