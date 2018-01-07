// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Materials/MaterialExpressionFunctionInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionFunctionInput() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFunctionInputType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
// End Cross Module References
	static UEnum* EFunctionInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFunctionInputType, Z_Construct_UPackage__Script_Engine(), TEXT("EFunctionInputType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFunctionInputType(EFunctionInputType_StaticEnum, TEXT("/Script/Engine"), TEXT("EFunctionInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EFunctionInputType_CRC() { return 196405683U; }
	UEnum* Z_Construct_UEnum_Engine_EFunctionInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFunctionInputType"), 0, Get_Z_Construct_UEnum_Engine_EFunctionInputType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "FunctionInput_Scalar", (int64)FunctionInput_Scalar },
				{ "FunctionInput_Vector2", (int64)FunctionInput_Vector2 },
				{ "FunctionInput_Vector3", (int64)FunctionInput_Vector3 },
				{ "FunctionInput_Vector4", (int64)FunctionInput_Vector4 },
				{ "FunctionInput_Texture2D", (int64)FunctionInput_Texture2D },
				{ "FunctionInput_TextureCube", (int64)FunctionInput_TextureCube },
				{ "FunctionInput_StaticBool", (int64)FunctionInput_StaticBool },
				{ "FunctionInput_MaterialAttributes", (int64)FunctionInput_MaterialAttributes },
				{ "FunctionInput_MAX", (int64)FunctionInput_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "ToolTip", "Supported input types" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EFunctionInputType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EFunctionInputType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMaterialExpressionFunctionInput::StaticRegisterNativesUMaterialExpressionFunctionInput()
	{
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput_NoRegister()
	{
		return UMaterialExpressionFunctionInput::StaticClass();
	}
	UClass* Z_Construct_UClass_UMaterialExpressionFunctionInput()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "object Object" },
				{ "IncludePath", "Materials/MaterialExpressionFunctionInput.h" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCompilingFunctionPreview_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "ToolTip", "true when this expression is being compiled in a function preview,\nfalse when this expression is being compiled into a material that uses the function.\nOnly valid in Compile()" },
			};
#endif
			auto NewProp_bCompilingFunctionPreview_SetBit = [](void* Obj){ ((UMaterialExpressionFunctionInput*)Obj)->bCompilingFunctionPreview = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCompilingFunctionPreview = { UE4CodeGen_Private::EPropertyClass::Bool, "bCompilingFunctionPreview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionFunctionInput), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCompilingFunctionPreview_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCompilingFunctionPreview_MetaData, ARRAY_COUNT(NewProp_bCompilingFunctionPreview_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[] = {
				{ "Category", "MaterialExpressionFunctionInput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "ToolTip", "Controls where the input is displayed relative to the other inputs." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SortPriority = { UE4CodeGen_Private::EPropertyClass::Int, "SortPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, SortPriority), METADATA_PARAMS(NewProp_SortPriority_MetaData, ARRAY_COUNT(NewProp_SortPriority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePreviewValueAsDefault_MetaData[] = {
				{ "Category", "MaterialExpressionFunctionInput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "ToolTip", "Whether to use the preview value or texture as the default value for this input." },
			};
#endif
			auto NewProp_bUsePreviewValueAsDefault_SetBit = [](void* Obj){ ((UMaterialExpressionFunctionInput*)Obj)->bUsePreviewValueAsDefault = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePreviewValueAsDefault = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePreviewValueAsDefault", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UMaterialExpressionFunctionInput), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUsePreviewValueAsDefault_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUsePreviewValueAsDefault_MetaData, ARRAY_COUNT(NewProp_bUsePreviewValueAsDefault_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewValue_MetaData[] = {
				{ "Category", "MaterialExpressionFunctionInput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "OverridingInputProperty", "Preview" },
				{ "ToolTip", "Value used to preview this input when editing the material function." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewValue = { UE4CodeGen_Private::EPropertyClass::Struct, "PreviewValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, PreviewValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(NewProp_PreviewValue_MetaData, ARRAY_COUNT(NewProp_PreviewValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[] = {
				{ "Category", "MaterialExpressionFunctionInput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "ToolTip", "Type of this input.\nInput code chunks will be cast to this type, and a compiler error will be emitted if the cast fails." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputType = { UE4CodeGen_Private::EPropertyClass::Byte, "InputType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, InputType), Z_Construct_UEnum_Engine_EFunctionInputType, METADATA_PARAMS(NewProp_InputType_MetaData, ARRAY_COUNT(NewProp_InputType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "ToolTip", "Id of this input, used to maintain references through name changes." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Id = { UE4CodeGen_Private::EPropertyClass::Struct, "Id", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Id), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(NewProp_Id_MetaData, ARRAY_COUNT(NewProp_Id_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
				{ "Category", "MaterialExpressionFunctionInput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "ToolTip", "The input's description, which will be used as a tooltip on the connector in function call expressions that use this function." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description = { UE4CodeGen_Private::EPropertyClass::Str, "Description", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Description), METADATA_PARAMS(NewProp_Description_MetaData, ARRAY_COUNT(NewProp_Description_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
				{ "Category", "MaterialExpressionFunctionInput" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "ToolTip", "The input's name, which will be drawn on the connector in function call expressions that use this function." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InputName = { UE4CodeGen_Private::EPropertyClass::Str, "InputName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, InputName), METADATA_PARAMS(NewProp_InputName_MetaData, ARRAY_COUNT(NewProp_InputName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionFunctionInput.h" },
				{ "RequiredInput", "false" },
				{ "ToolTip", "Used for previewing when editing the function, or when bUsePreviewValueAsDefault is enabled." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Preview = { UE4CodeGen_Private::EPropertyClass::Struct, "Preview", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UMaterialExpressionFunctionInput, Preview), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(NewProp_Preview_MetaData, ARRAY_COUNT(NewProp_Preview_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCompilingFunctionPreview,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SortPriority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUsePreviewValueAsDefault,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PreviewValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Id,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Description,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InputName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Preview,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMaterialExpressionFunctionInput>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMaterialExpressionFunctionInput::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(UMaterialExpressionFunctionInput, 325733849);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialExpressionFunctionInput(Z_Construct_UClass_UMaterialExpressionFunctionInput, &UMaterialExpressionFunctionInput::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialExpressionFunctionInput"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionFunctionInput);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
