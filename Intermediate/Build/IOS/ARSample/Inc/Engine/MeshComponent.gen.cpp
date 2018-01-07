// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/MeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterialIndex();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterials();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshComponent_PrestreamTextures();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials();
	ENGINE_API UFunction* Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UMeshComponent::StaticRegisterNativesUMeshComponent()
	{
		UClass* Class = UMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialIndex", (Native)&UMeshComponent::execGetMaterialIndex },
			{ "GetMaterials", (Native)&UMeshComponent::execGetMaterials },
			{ "GetMaterialSlotNames", (Native)&UMeshComponent::execGetMaterialSlotNames },
			{ "IsMaterialSlotNameValid", (Native)&UMeshComponent::execIsMaterialSlotNameValid },
			{ "PrestreamTextures", (Native)&UMeshComponent::execPrestreamTextures },
			{ "SetScalarParameterValueOnMaterials", (Native)&UMeshComponent::execSetScalarParameterValueOnMaterials },
			{ "SetVectorParameterValueOnMaterials", (Native)&UMeshComponent::execSetVectorParameterValueOnMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterialIndex()
	{
		struct MeshComponent_eventGetMaterialIndex_Parms
		{
			FName MaterialSlotName;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName = { UE4CodeGen_Private::EPropertyClass::Name, "MaterialSlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventGetMaterialIndex_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialSlotName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Mesh" },
				{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, "GetMaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MeshComponent_eventGetMaterialIndex_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterials()
	{
		struct MeshComponent_eventGetMaterials_Parms
		{
			TArray<UMaterialInterface*> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventGetMaterials_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Mesh" },
				{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, "GetMaterials", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MeshComponent_eventGetMaterials_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames()
	{
		struct MeshComponent_eventGetMaterialSlotNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventGetMaterialSlotNames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Mesh" },
				{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, "GetMaterialSlotNames", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MeshComponent_eventGetMaterialSlotNames_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid()
	{
		struct MeshComponent_eventIsMaterialSlotNameValid_Parms
		{
			FName MaterialSlotName;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MeshComponent_eventIsMaterialSlotNameValid_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshComponent_eventIsMaterialSlotNameValid_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName = { UE4CodeGen_Private::EPropertyClass::Name, "MaterialSlotName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventIsMaterialSlotNameValid_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialSlotName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Mesh" },
				{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, "IsMaterialSlotNameValid", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MeshComponent_eventIsMaterialSlotNameValid_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshComponent_PrestreamTextures()
	{
		struct MeshComponent_eventPrestreamTextures_Parms
		{
			float Seconds;
			bool bPrioritizeCharacterTextures;
			int32 CinematicTextureGroups;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups = { UE4CodeGen_Private::EPropertyClass::Int, "CinematicTextureGroups", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventPrestreamTextures_Parms, CinematicTextureGroups), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_bPrioritizeCharacterTextures_SetBit = [](void* Obj){ ((MeshComponent_eventPrestreamTextures_Parms*)Obj)->bPrioritizeCharacterTextures = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPrioritizeCharacterTextures = { UE4CodeGen_Private::EPropertyClass::Bool, "bPrioritizeCharacterTextures", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshComponent_eventPrestreamTextures_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPrioritizeCharacterTextures_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Seconds = { UE4CodeGen_Private::EPropertyClass::Float, "Seconds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventPrestreamTextures_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CinematicTextureGroups,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPrioritizeCharacterTextures,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Seconds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering" },
				{ "CPP_Default_CinematicTextureGroups", "0" },
				{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
				{ "ToolTip", "Tell the streaming system to start loading all textures with all mip-levels.\n@param Seconds                                                  Number of seconds to force all mip-levels to be resident\n@param bPrioritizeCharacterTextures             Whether character textures should be prioritized for a while by the streaming system\n@param CinematicTextureGroups                   Bitfield indicating which texture groups that use extra high-resolution mips" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, "PrestreamTextures", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(MeshComponent_eventPrestreamTextures_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials()
	{
		struct MeshComponent_eventSetScalarParameterValueOnMaterials_Parms
		{
			FName ParameterName;
			float ParameterValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParameterValue = { UE4CodeGen_Private::EPropertyClass::Float, "ParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms, ParameterValue), METADATA_PARAMS(NewProp_ParameterValue_MetaData, ARRAY_COUNT(NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
				{ "ToolTip", "Set all occurrences of Scalar Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, "SetScalarParameterValueOnMaterials", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials()
	{
		struct MeshComponent_eventSetVectorParameterValueOnMaterials_Parms
		{
			FName ParameterName;
			FVector ParameterValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParameterValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ParameterValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms, ParameterValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_ParameterValue_MetaData, ARRAY_COUNT(NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName = { UE4CodeGen_Private::EPropertyClass::Name, "ParameterName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms, ParameterName), METADATA_PARAMS(NewProp_ParameterName_MetaData, ARRAY_COUNT(NewProp_ParameterName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ParameterName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Material" },
				{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
				{ "ToolTip", "Set all occurrences of Vector Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, "SetVectorParameterValueOnMaterials", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshComponent_NoRegister()
	{
		return UMeshComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMeshComponent_GetMaterialIndex, "GetMaterialIndex" }, // 1740391737
				{ &Z_Construct_UFunction_UMeshComponent_GetMaterials, "GetMaterials" }, // 89183757
				{ &Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames, "GetMaterialSlotNames" }, // 268013187
				{ &Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid, "IsMaterialSlotNameValid" }, // 3081972078
				{ &Z_Construct_UFunction_UMeshComponent_PrestreamTextures, "PrestreamTextures" }, // 2163385252
				{ &Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials, "SetScalarParameterValueOnMaterials" }, // 2976072128
				{ &Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials, "SetVectorParameterValueOnMaterials" }, // 75670884
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Mobility Trigger" },
				{ "IncludePath", "Components/MeshComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
				{ "ToolTip", "MeshComponent is an abstract base for any component that is an instance of a renderable collection of triangles.\n\n@see UStaticMeshComponent\n@see USkeletalMeshComponent" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
				{ "ToolTip", "Material overrides." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "OverrideMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000001, 1, nullptr, STRUCT_OFFSET(UMeshComponent, OverrideMaterials), METADATA_PARAMS(NewProp_OverrideMaterials_MetaData, ARRAY_COUNT(NewProp_OverrideMaterials_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OverrideMaterials", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideMaterials,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OverrideMaterials_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMeshComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMeshComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00081u,
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
	IMPLEMENT_CLASS(UMeshComponent, 1638350891);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshComponent(Z_Construct_UClass_UMeshComponent, &UMeshComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
