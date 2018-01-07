// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/CanvasPanelSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasPanelSlot() {}
// Cross Module References
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FAnchorData();
	UPackage* Z_Construct_UPackage__Script_UMG();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetLayout();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetPosition();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetSize();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetLayout();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetPosition();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetSize();
	UMG_API UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder();
// End Cross Module References
class UScriptStruct* FAnchorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UMG_API uint32 Get_Z_Construct_UScriptStruct_FAnchorData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnchorData, Z_Construct_UPackage__Script_UMG(), TEXT("AnchorData"), sizeof(FAnchorData), Get_Z_Construct_UScriptStruct_FAnchorData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnchorData(FAnchorData::StaticStruct, TEXT("/Script/UMG"), TEXT("AnchorData"), false, nullptr, nullptr);
static struct FScriptStruct_UMG_StaticRegisterNativesFAnchorData
{
	FScriptStruct_UMG_StaticRegisterNativesFAnchorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnchorData")),new UScriptStruct::TCppStructOps<FAnchorData>);
	}
} ScriptStruct_UMG_StaticRegisterNativesFAnchorData;
	UScriptStruct* Z_Construct_UScriptStruct_FAnchorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnchorData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnchorData"), sizeof(FAnchorData), Get_Z_Construct_UScriptStruct_FAnchorData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnchorData>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
				{ "Category", "AnchorData" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Alignment is the pivot point of the widget.  Starting in the upper left at (0,0),\nending in the lower right at (1,1).  Moving the alignment point allows you to move\nthe origin of the widget." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Alignment = { UE4CodeGen_Private::EPropertyClass::Struct, "Alignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnchorData, Alignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Alignment_MetaData, ARRAY_COUNT(NewProp_Alignment_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[] = {
				{ "Category", "AnchorData" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Anchors." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Anchors = { UE4CodeGen_Private::EPropertyClass::Struct, "Anchors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnchorData, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(NewProp_Anchors_MetaData, ARRAY_COUNT(NewProp_Anchors_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offsets_MetaData[] = {
				{ "Category", "AnchorData" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Offset." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offsets = { UE4CodeGen_Private::EPropertyClass::Struct, "Offsets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnchorData, Offsets), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(NewProp_Offsets_MetaData, ARRAY_COUNT(NewProp_Offsets_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Alignment,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Anchors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offsets,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"AnchorData",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FAnchorData),
				alignof(FAnchorData),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnchorData_CRC() { return 2276591994U; }
	void UCanvasPanelSlot::StaticRegisterNativesUCanvasPanelSlot()
	{
		UClass* Class = UCanvasPanelSlot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlignment", (Native)&UCanvasPanelSlot::execGetAlignment },
			{ "GetAnchors", (Native)&UCanvasPanelSlot::execGetAnchors },
			{ "GetAutoSize", (Native)&UCanvasPanelSlot::execGetAutoSize },
			{ "GetLayout", (Native)&UCanvasPanelSlot::execGetLayout },
			{ "GetOffsets", (Native)&UCanvasPanelSlot::execGetOffsets },
			{ "GetPosition", (Native)&UCanvasPanelSlot::execGetPosition },
			{ "GetSize", (Native)&UCanvasPanelSlot::execGetSize },
			{ "GetZOrder", (Native)&UCanvasPanelSlot::execGetZOrder },
			{ "SetAlignment", (Native)&UCanvasPanelSlot::execSetAlignment },
			{ "SetAnchors", (Native)&UCanvasPanelSlot::execSetAnchors },
			{ "SetAutoSize", (Native)&UCanvasPanelSlot::execSetAutoSize },
			{ "SetLayout", (Native)&UCanvasPanelSlot::execSetLayout },
			{ "SetMaximum", (Native)&UCanvasPanelSlot::execSetMaximum },
			{ "SetMinimum", (Native)&UCanvasPanelSlot::execSetMinimum },
			{ "SetOffsets", (Native)&UCanvasPanelSlot::execSetOffsets },
			{ "SetPosition", (Native)&UCanvasPanelSlot::execSetPosition },
			{ "SetSize", (Native)&UCanvasPanelSlot::execSetSize },
			{ "SetZOrder", (Native)&UCanvasPanelSlot::execSetZOrder },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment()
	{
		struct CanvasPanelSlot_eventGetAlignment_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetAlignment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Gets the alignment on the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CanvasPanelSlot_eventGetAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors()
	{
		struct CanvasPanelSlot_eventGetAnchors_Parms
		{
			FAnchors ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetAnchors_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Gets the anchors on the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetAnchors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetAnchors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize()
	{
		struct CanvasPanelSlot_eventGetAutoSize_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((CanvasPanelSlot_eventGetAutoSize_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CanvasPanelSlot_eventGetAutoSize_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Gets if the slot to be auto-sized" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetAutoSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetAutoSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetLayout()
	{
		struct CanvasPanelSlot_eventGetLayout_Parms
		{
			FAnchorData ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetLayout_Parms, ReturnValue), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Gets the layout data of the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetLayout", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetLayout_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets()
	{
		struct CanvasPanelSlot_eventGetOffsets_Parms
		{
			FMargin ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetOffsets_Parms, ReturnValue), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Gets the offset data of the slot, which could be position and size, or margins depending on the anchor points" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetOffsets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetOffsets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetPosition()
	{
		struct CanvasPanelSlot_eventGetPosition_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Gets the position of the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CanvasPanelSlot_eventGetPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetSize()
	{
		struct CanvasPanelSlot_eventGetSize_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Gets the size of the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(CanvasPanelSlot_eventGetSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder()
	{
		struct CanvasPanelSlot_eventGetZOrder_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventGetZOrder_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Gets the z-order on the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "GetZOrder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(CanvasPanelSlot_eventGetZOrder_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment()
	{
		struct CanvasPanelSlot_eventSetAlignment_Parms
		{
			FVector2D InAlignment;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAlignment = { UE4CodeGen_Private::EPropertyClass::Struct, "InAlignment", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetAlignment_Parms, InAlignment), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAlignment,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets the alignment on the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetAlignment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CanvasPanelSlot_eventSetAlignment_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors()
	{
		struct CanvasPanelSlot_eventSetAnchors_Parms
		{
			FAnchors InAnchors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAnchors = { UE4CodeGen_Private::EPropertyClass::Struct, "InAnchors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetAnchors_Parms, InAnchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InAnchors,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets the anchors on the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetAnchors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CanvasPanelSlot_eventSetAnchors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize()
	{
		struct CanvasPanelSlot_eventSetAutoSize_Parms
		{
			bool InbAutoSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_InbAutoSize_SetBit = [](void* Obj){ ((CanvasPanelSlot_eventSetAutoSize_Parms*)Obj)->InbAutoSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InbAutoSize = { UE4CodeGen_Private::EPropertyClass::Bool, "InbAutoSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CanvasPanelSlot_eventSetAutoSize_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InbAutoSize_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InbAutoSize,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets if the slot to be auto-sized" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetAutoSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CanvasPanelSlot_eventSetAutoSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetLayout()
	{
		struct CanvasPanelSlot_eventSetLayout_Parms
		{
			FAnchorData InLayoutData;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLayoutData_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLayoutData = { UE4CodeGen_Private::EPropertyClass::Struct, "InLayoutData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetLayout_Parms, InLayoutData), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(NewProp_InLayoutData_MetaData, ARRAY_COUNT(NewProp_InLayoutData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InLayoutData,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets the layout data of the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetLayout", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CanvasPanelSlot_eventSetLayout_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum()
	{
		struct CanvasPanelSlot_eventSetMaximum_Parms
		{
			FVector2D InMaximumAnchors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMaximumAnchors = { UE4CodeGen_Private::EPropertyClass::Struct, "InMaximumAnchors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetMaximum_Parms, InMaximumAnchors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMaximumAnchors,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets the anchors on the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetMaximum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(CanvasPanelSlot_eventSetMaximum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum()
	{
		struct CanvasPanelSlot_eventSetMinimum_Parms
		{
			FVector2D InMinimumAnchors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InMinimumAnchors = { UE4CodeGen_Private::EPropertyClass::Struct, "InMinimumAnchors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetMinimum_Parms, InMinimumAnchors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMinimumAnchors,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets the anchors on the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetMinimum", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00820401, sizeof(CanvasPanelSlot_eventSetMinimum_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets()
	{
		struct CanvasPanelSlot_eventSetOffsets_Parms
		{
			FMargin InOffset;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "InOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetOffsets_Parms, InOffset), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InOffset,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets the offset data of the slot, which could be position and size, or margins depending on the anchor points" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetOffsets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CanvasPanelSlot_eventSetOffsets_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetPosition()
	{
		struct CanvasPanelSlot_eventSetPosition_Parms
		{
			FVector2D InPosition;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "InPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetPosition_Parms, InPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPosition,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets the position of the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CanvasPanelSlot_eventSetPosition_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetSize()
	{
		struct CanvasPanelSlot_eventSetSize_Parms
		{
			FVector2D InSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InSize = { UE4CodeGen_Private::EPropertyClass::Struct, "InSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetSize_Parms, InSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InSize,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets the size of the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(CanvasPanelSlot_eventSetSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder()
	{
		struct CanvasPanelSlot_eventSetZOrder_Parms
		{
			int32 InZOrder;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InZOrder = { UE4CodeGen_Private::EPropertyClass::Int, "InZOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CanvasPanelSlot_eventSetZOrder_Parms, InZOrder), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InZOrder,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "Sets the z-order on the slot" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanelSlot, "SetZOrder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CanvasPanelSlot_eventSetZOrder_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister()
	{
		return UCanvasPanelSlot::StaticClass();
	}
	UClass* Z_Construct_UClass_UCanvasPanelSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPanelSlot,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAlignment, "GetAlignment" }, // 2002633
				{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAnchors, "GetAnchors" }, // 2095873403
				{ &Z_Construct_UFunction_UCanvasPanelSlot_GetAutoSize, "GetAutoSize" }, // 1957067673
				{ &Z_Construct_UFunction_UCanvasPanelSlot_GetLayout, "GetLayout" }, // 2452339628
				{ &Z_Construct_UFunction_UCanvasPanelSlot_GetOffsets, "GetOffsets" }, // 2141382322
				{ &Z_Construct_UFunction_UCanvasPanelSlot_GetPosition, "GetPosition" }, // 3167268239
				{ &Z_Construct_UFunction_UCanvasPanelSlot_GetSize, "GetSize" }, // 885132168
				{ &Z_Construct_UFunction_UCanvasPanelSlot_GetZOrder, "GetZOrder" }, // 269107170
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAlignment, "SetAlignment" }, // 462246106
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAnchors, "SetAnchors" }, // 1633438046
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetAutoSize, "SetAutoSize" }, // 2633765671
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetLayout, "SetLayout" }, // 1887657798
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetMaximum, "SetMaximum" }, // 3523324098
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetMinimum, "SetMinimum" }, // 438658147
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetOffsets, "SetOffsets" }, // 2944132629
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetPosition, "SetPosition" }, // 3888365115
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetSize, "SetSize" }, // 304376222
				{ &Z_Construct_UFunction_UCanvasPanelSlot_SetZOrder, "SetZOrder" }, // 367518598
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Components/CanvasPanelSlot.h" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "The order priority this widget is rendered in.  Higher values are rendered last (and so they will appear to be on top)." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ZOrder = { UE4CodeGen_Private::EPropertyClass::Int, "ZOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCanvasPanelSlot, ZOrder), METADATA_PARAMS(NewProp_ZOrder_MetaData, ARRAY_COUNT(NewProp_ZOrder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoSize_MetaData[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "DisplayName", "Size To Content" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "When AutoSize is true we use the widget's desired size" },
			};
#endif
			auto NewProp_bAutoSize_SetBit = [](void* Obj){ ((UCanvasPanelSlot*)Obj)->bAutoSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UCanvasPanelSlot), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAutoSize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAutoSize_MetaData, ARRAY_COUNT(NewProp_bAutoSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutData_MetaData[] = {
				{ "Category", "Layout|Canvas Slot" },
				{ "ModuleRelativePath", "Public/Components/CanvasPanelSlot.h" },
				{ "ToolTip", "The anchoring information for the slot" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayoutData = { UE4CodeGen_Private::EPropertyClass::Struct, "LayoutData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(UCanvasPanelSlot, LayoutData), Z_Construct_UScriptStruct_FAnchorData, METADATA_PARAMS(NewProp_LayoutData_MetaData, ARRAY_COUNT(NewProp_LayoutData_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ZOrder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAutoSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayoutData,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UCanvasPanelSlot>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UCanvasPanelSlot::StaticClass,
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
	IMPLEMENT_CLASS(UCanvasPanelSlot, 3798045296);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCanvasPanelSlot(Z_Construct_UClass_UCanvasPanelSlot, &UCanvasPanelSlot::StaticClass, TEXT("/Script/UMG"), TEXT("UCanvasPanelSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasPanelSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
