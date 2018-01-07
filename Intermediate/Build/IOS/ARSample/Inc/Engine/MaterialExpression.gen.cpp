// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpression.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpression() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
// End Cross Module References
	UScriptStruct* Z_Construct_UScriptStruct_FExpressionOutput()
	{
		struct FExpressionOutput
		{
			FString OutputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExpressionOutput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExpressionOutput"), sizeof(FExpressionOutput), Get_Z_Construct_UScriptStruct_FExpressionOutput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Struct that represents an expression's output." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskA = { UE4CodeGen_Private::EPropertyClass::Int, "MaskA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionOutput, MaskA), METADATA_PARAMS(NewProp_MaskA_MetaData, ARRAY_COUNT(NewProp_MaskA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskB = { UE4CodeGen_Private::EPropertyClass::Int, "MaskB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionOutput, MaskB), METADATA_PARAMS(NewProp_MaskB_MetaData, ARRAY_COUNT(NewProp_MaskB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskG = { UE4CodeGen_Private::EPropertyClass::Int, "MaskG", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionOutput, MaskG), METADATA_PARAMS(NewProp_MaskG_MetaData, ARRAY_COUNT(NewProp_MaskG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskR = { UE4CodeGen_Private::EPropertyClass::Int, "MaskR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionOutput, MaskR), METADATA_PARAMS(NewProp_MaskR_MetaData, ARRAY_COUNT(NewProp_MaskR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask = { UE4CodeGen_Private::EPropertyClass::Int, "Mask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionOutput, Mask), METADATA_PARAMS(NewProp_Mask_MetaData, ARRAY_COUNT(NewProp_Mask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutputName = { UE4CodeGen_Private::EPropertyClass::Str, "OutputName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionOutput, OutputName), METADATA_PARAMS(NewProp_OutputName_MetaData, ARRAY_COUNT(NewProp_OutputName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"ExpressionOutput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FExpressionOutput),
				alignof(FExpressionOutput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExpressionOutput_CRC() { return 1050775565U; }
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput()
	{
		struct FExpressionInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
			FString InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
			FName ExpressionName;
		};

		struct FMaterialAttributesInput : public FExpressionInput
		{
			int32 PropertyConnectedBitmask;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialAttributesInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialAttributesInput"), sizeof(FMaterialAttributesInput), Get_Z_Construct_UScriptStruct_FMaterialAttributesInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertyConnectedBitmask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_PropertyConnectedBitmask = { UE4CodeGen_Private::EPropertyClass::Int, "PropertyConnectedBitmask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, STRUCT_OFFSET(FMaterialAttributesInput, PropertyConnectedBitmask), METADATA_PARAMS(NewProp_PropertyConnectedBitmask_MetaData, ARRAY_COUNT(NewProp_PropertyConnectedBitmask_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PropertyConnectedBitmask,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				Z_Construct_UScriptStruct_FExpressionInput,
				nullptr,
				"MaterialAttributesInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FMaterialAttributesInput),
				alignof(FMaterialAttributesInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialAttributesInput_CRC() { return 247961165U; }
	UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput()
	{
		struct FExpressionInput
		{
#if WITH_EDITORONLY_DATA
			UMaterialExpression* Expression;
#endif // WITH_EDITORONLY_DATA
			int32 OutputIndex;
			FString InputName;
			int32 Mask;
			int32 MaskR;
			int32 MaskG;
			int32 MaskB;
			int32 MaskA;
			FName ExpressionName;
		};

#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExpressionInput_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExpressionInput"), sizeof(FExpressionInput), Get_Z_Construct_UScriptStruct_FExpressionInput_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "@warning: FExpressionInput is mirrored in MaterialShared.h and manually \"subclassed\" in Material.h (FMaterialInput)" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpressionName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Material expression name that this input is connected to, or None if not connected. Used only in cooked builds" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ExpressionName = { UE4CodeGen_Private::EPropertyClass::Name, "ExpressionName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionInput, ExpressionName), METADATA_PARAMS(NewProp_ExpressionName_MetaData, ARRAY_COUNT(NewProp_ExpressionName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskA = { UE4CodeGen_Private::EPropertyClass::Int, "MaskA", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionInput, MaskA), METADATA_PARAMS(NewProp_MaskA_MetaData, ARRAY_COUNT(NewProp_MaskA_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskB = { UE4CodeGen_Private::EPropertyClass::Int, "MaskB", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionInput, MaskB), METADATA_PARAMS(NewProp_MaskB_MetaData, ARRAY_COUNT(NewProp_MaskB_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskG = { UE4CodeGen_Private::EPropertyClass::Int, "MaskG", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionInput, MaskG), METADATA_PARAMS(NewProp_MaskG_MetaData, ARRAY_COUNT(NewProp_MaskG_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaskR = { UE4CodeGen_Private::EPropertyClass::Int, "MaskR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionInput, MaskR), METADATA_PARAMS(NewProp_MaskR_MetaData, ARRAY_COUNT(NewProp_MaskR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mask = { UE4CodeGen_Private::EPropertyClass::Int, "Mask", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionInput, Mask), METADATA_PARAMS(NewProp_Mask_MetaData, ARRAY_COUNT(NewProp_Mask_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "optional FName of the input.\nNote that this is the only member which is not derived from the output currently connected." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputName = { UE4CodeGen_Private::EPropertyClass::Str, "InputName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionInput, InputName), METADATA_PARAMS(NewProp_InputName_MetaData, ARRAY_COUNT(NewProp_InputName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Index into Expression's outputs array that this input is connected to." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutputIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OutputIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FExpressionInput, OutputIndex), METADATA_PARAMS(NewProp_OutputIndex_MetaData, ARRAY_COUNT(NewProp_OutputIndex_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "UMaterial expression that this input is connected to, or NULL if not connected." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Expression = { UE4CodeGen_Private::EPropertyClass::Object, "Expression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(FExpressionInput, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(NewProp_Expression_MetaData, ARRAY_COUNT(NewProp_Expression_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExpressionName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskA,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskB,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskG,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mask,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputIndex,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Expression,
#endif // WITH_EDITORONLY_DATA
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				nullptr,
				"ExpressionInput",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000008),
				sizeof(FExpressionInput),
				alignof(FExpressionInput),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExpressionInput_CRC() { return 1327196597U; }
	void UMaterialExpression::StaticRegisterNativesUMaterialExpression()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpression_NoRegister()
	{
		return UMaterialExpression::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpression()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Materials/MaterialExpression.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "The expression's outputs, which are set in default properties by derived classes." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs = { UE4CodeGen_Private::EPropertyClass::Array, "Outputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, Outputs), METADATA_PARAMS(NewProp_Outputs_MetaData, ARRAY_COUNT(NewProp_Outputs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Outputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FExpressionOutput, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuCategories_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Localized categories to sort this expression into..." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MenuCategories = { UE4CodeGen_Private::EPropertyClass::Array, "MenuCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, MenuCategories), METADATA_PARAMS(NewProp_MenuCategories_MetaData, ARRAY_COUNT(NewProp_MenuCategories_MetaData)) };
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_MenuCategories_Inner = { UE4CodeGen_Private::EPropertyClass::Text, "MenuCategories", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000800000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOutputs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Whether to draw the expression's outputs." },
			};
#endif
			auto NewProp_bShowOutputs_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bShowOutputs = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOutputs = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowOutputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowOutputs_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowOutputs_MetaData, ARRAY_COUNT(NewProp_bShowOutputs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowInputs_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Whether to draw the expression's inputs." },
			};
#endif
			auto NewProp_bShowInputs_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bShowInputs = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowInputs = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowInputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowInputs_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowInputs_MetaData, ARRAY_COUNT(NewProp_bShowInputs_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShaderInputData_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Whether the node represents an input to the shader or not.  Used to color the node's background." },
			};
#endif
			auto NewProp_bShaderInputData_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bShaderInputData = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShaderInputData = { UE4CodeGen_Private::EPropertyClass::Bool, "bShaderInputData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShaderInputData_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShaderInputData_MetaData, ARRAY_COUNT(NewProp_bShaderInputData_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCollapsed_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "If true, show a collapsed version of the node" },
			};
#endif
			auto NewProp_bCollapsed_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bCollapsed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCollapsed = { UE4CodeGen_Private::EPropertyClass::Bool, "bCollapsed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCollapsed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCollapsed_MetaData, ARRAY_COUNT(NewProp_bCollapsed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHidePreviewWindow_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "If true, do not render the preview window for the expression" },
			};
#endif
			auto NewProp_bHidePreviewWindow_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bHidePreviewWindow = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePreviewWindow = { UE4CodeGen_Private::EPropertyClass::Bool, "bHidePreviewWindow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHidePreviewWindow_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHidePreviewWindow_MetaData, ARRAY_COUNT(NewProp_bHidePreviewWindow_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMaskColorsOnPin_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "If true, changes the pin color to match the output mask" },
			};
#endif
			auto NewProp_bShowMaskColorsOnPin_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bShowMaskColorsOnPin = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMaskColorsOnPin = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowMaskColorsOnPin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowMaskColorsOnPin_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowMaskColorsOnPin_MetaData, ARRAY_COUNT(NewProp_bShowMaskColorsOnPin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowOutputNameOnPin_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "If true, use the output name as the label for the pin" },
			};
#endif
			auto NewProp_bShowOutputNameOnPin_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bShowOutputNameOnPin = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowOutputNameOnPin = { UE4CodeGen_Private::EPropertyClass::Bool, "bShowOutputNameOnPin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bShowOutputNameOnPin_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bShowOutputNameOnPin_MetaData, ARRAY_COUNT(NewProp_bShowOutputNameOnPin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCommentBubbleVisible_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "If true, the comment bubble will be visible in the graph editor" },
			};
#endif
			auto NewProp_bCommentBubbleVisible_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bCommentBubbleVisible = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCommentBubbleVisible = { UE4CodeGen_Private::EPropertyClass::Bool, "bCommentBubbleVisible", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCommentBubbleVisible_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCommentBubbleVisible_MetaData, ARRAY_COUNT(NewProp_bCommentBubbleVisible_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsParameterExpression_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Indicates that this is a 'parameter' type of expression and should always be loaded (ie not cooked away) because we might want the default parameter." },
			};
#endif
			auto NewProp_bIsParameterExpression_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bIsParameterExpression = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsParameterExpression = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsParameterExpression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsParameterExpression_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsParameterExpression_MetaData, ARRAY_COUNT(NewProp_bIsParameterExpression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNeedToUpdatePreview_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "If true, we should update the preview next render. This is set when changing bRealtimePreview." },
			};
#endif
			auto NewProp_bNeedToUpdatePreview_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bNeedToUpdatePreview = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNeedToUpdatePreview = { UE4CodeGen_Private::EPropertyClass::Bool, "bNeedToUpdatePreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNeedToUpdatePreview_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNeedToUpdatePreview_MetaData, ARRAY_COUNT(NewProp_bNeedToUpdatePreview_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRealtimePreview_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Set to true by RecursiveUpdateRealtimePreview() if the expression's preview needs to be updated in realtime in the material editor." },
			};
#endif
			auto NewProp_bRealtimePreview_SetBit = [](void* Obj){ ((UMaterialExpression*)Obj)->bRealtimePreview = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRealtimePreview = { UE4CodeGen_Private::EPropertyClass::Bool, "bRealtimePreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpression), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRealtimePreview_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRealtimePreview_MetaData, ARRAY_COUNT(NewProp_bRealtimePreview_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Color of the expression's border outline." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BorderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BorderColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, BorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_BorderColor_MetaData, ARRAY_COUNT(NewProp_BorderColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[] = {
				{ "Category", "MaterialExpression" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "MultiLine", "TRUE" },
				{ "ToolTip", "A description that level designers can add (shows in the material editor UI)." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Desc = { UE4CodeGen_Private::EPropertyClass::Str, "Desc", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, Desc), METADATA_PARAMS(NewProp_Desc_MetaData, ARRAY_COUNT(NewProp_Desc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Function_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "The material function that this expression is being used with, if any.\nThis will be NULL if the expression belongs to a function that is currently being edited," },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Function = { UE4CodeGen_Private::EPropertyClass::Object, "Function", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, Function), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(NewProp_Function_MetaData, ARRAY_COUNT(NewProp_Function_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "The material that this expression is currently being compiled in.\nThis is not necessarily the object which owns this expression, for example a preview material compiling a material function's expressions." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionGuid_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "GUID to uniquely identify this node, to help the tutorials out" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialExpressionGuid = { UE4CodeGen_Private::EPropertyClass::Struct, "MaterialExpressionGuid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_MaterialExpressionGuid_MetaData, ARRAY_COUNT(NewProp_MaterialExpressionGuid_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraphNode_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
				{ "ToolTip", "Expression's Graph representation" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraphNode = { UE4CodeGen_Private::EPropertyClass::Object, "GraphNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, GraphNode), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(NewProp_GraphNode_MetaData, ARRAY_COUNT(NewProp_GraphNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionEditorY_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialExpressionEditorY = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialExpressionEditorY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionEditorY), METADATA_PARAMS(NewProp_MaterialExpressionEditorY_MetaData, ARRAY_COUNT(NewProp_MaterialExpressionEditorY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialExpressionEditorX_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpression.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialExpressionEditorX = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialExpressionEditorX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpression, MaterialExpressionEditorX), METADATA_PARAMS(NewProp_MaterialExpressionEditorX_MetaData, ARRAY_COUNT(NewProp_MaterialExpressionEditorX_MetaData)) };
#endif // WITH_EDITORONLY_DATA
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Outputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Outputs_Inner,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuCategories,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MenuCategories_Inner,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowOutputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowInputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShaderInputData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCollapsed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHidePreviewWindow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowMaskColorsOnPin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bShowOutputNameOnPin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCommentBubbleVisible,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsParameterExpression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNeedToUpdatePreview,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRealtimePreview,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BorderColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Desc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Function,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialExpressionGuid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GraphNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialExpressionEditorY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialExpressionEditorX,
#endif // WITH_EDITORONLY_DATA
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpression>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpression::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100081u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UMaterialExpression, 3571337956);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpression(Z_Construct_UClass_UMaterialExpression, &UMaterialExpression::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpression"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpression);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
