// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/Texture2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexture2D() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX();
	ENGINE_API UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
// End Cross Module References
	void UTexture2D::StaticRegisterNativesUTexture2D()
	{
		UClass* Class = UTexture2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Blueprint_GetSizeX", (Native)&UTexture2D::execBlueprint_GetSizeX },
			{ "Blueprint_GetSizeY", (Native)&UTexture2D::execBlueprint_GetSizeY },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX()
	{
		struct Texture2D_eventBlueprint_GetSizeX_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Texture2D_eventBlueprint_GetSizeX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Texture" },
				{ "DisplayName", "GetSizeX" },
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "Gets the X size of the texture, in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2D, "Blueprint_GetSizeX", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Texture2D_eventBlueprint_GetSizeX_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY()
	{
		struct Texture2D_eventBlueprint_GetSizeY_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Texture2D_eventBlueprint_GetSizeY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Rendering|Texture" },
				{ "DisplayName", "GetSizeY" },
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "Gets the Y size of the texture, in pixels" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UTexture2D, "Blueprint_GetSizeY", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Texture2D_eventBlueprint_GetSizeY_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTexture2D_NoRegister()
	{
		return UTexture2D::StaticClass();
	}
	UClass* Z_Construct_UClass_UTexture2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UTexture,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeX, "Blueprint_GetSizeX" }, // 700876245
				{ &Z_Construct_UFunction_UTexture2D_Blueprint_GetSizeY, "Blueprint_GetSizeY" }, // 1367457253
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Object" },
				{ "IncludePath", "Engine/Texture2D.h" },
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
				{ "Category", "Texture" },
				{ "DisplayName", "Y-axis Tiling Method" },
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "The addressing mode to use for the Y axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressY = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, STRUCT_OFFSET(UTexture2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressY_MetaData, ARRAY_COUNT(NewProp_AddressY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
				{ "Category", "Texture" },
				{ "DisplayName", "X-axis Tiling Method" },
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "The addressing mode to use for the X axis." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_AddressX = { UE4CodeGen_Private::EPropertyClass::Byte, "AddressX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010050000000005, 1, nullptr, STRUCT_OFFSET(UTexture2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(NewProp_AddressX_MetaData, ARRAY_COUNT(NewProp_AddressX_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenPaintedInEditor_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "Whether the texture has been painted in the editor." },
			};
#endif
			auto NewProp_bHasBeenPaintedInEditor_SetBit = [](void* Obj){ ((UTexture2D*)Obj)->bHasBeenPaintedInEditor = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenPaintedInEditor = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasBeenPaintedInEditor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasBeenPaintedInEditor_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasBeenPaintedInEditor_MetaData, ARRAY_COUNT(NewProp_bHasBeenPaintedInEditor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGlobalForceMipLevelsToBeResident_MetaData[] = {
				{ "Category", "LevelOfDetail" },
				{ "DisplayName", "Global Force Resident Mip Levels" },
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "Global and serialized version of ForceMiplevelsToBeResident." },
			};
#endif
			auto NewProp_bGlobalForceMipLevelsToBeResident_SetBit = [](void* Obj){ ((UTexture2D*)Obj)->bGlobalForceMipLevelsToBeResident = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGlobalForceMipLevelsToBeResident = { UE4CodeGen_Private::EPropertyClass::Bool, "bGlobalForceMipLevelsToBeResident", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010040000000015, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bGlobalForceMipLevelsToBeResident_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bGlobalForceMipLevelsToBeResident_MetaData, ARRAY_COUNT(NewProp_bGlobalForceMipLevelsToBeResident_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreStreamingMipBias_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "Ignores the streaming mip bias used to accommodate memory constraints." },
			};
#endif
			auto NewProp_bIgnoreStreamingMipBias_SetBit = [](void* Obj){ ((UTexture2D*)Obj)->bIgnoreStreamingMipBias = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreStreamingMipBias = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreStreamingMipBias", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreStreamingMipBias_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreStreamingMipBias_MetaData, ARRAY_COUNT(NewProp_bIgnoreStreamingMipBias_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceMiplevelsToBeResident_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "Override whether to fully stream even if texture hasn't been rendered." },
			};
#endif
			auto NewProp_bForceMiplevelsToBeResident_SetBit = [](void* Obj){ ((UTexture2D*)Obj)->bForceMiplevelsToBeResident = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMiplevelsToBeResident = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceMiplevelsToBeResident", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceMiplevelsToBeResident_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceMiplevelsToBeResident_MetaData, ARRAY_COUNT(NewProp_bForceMiplevelsToBeResident_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStreamingUpdatePending_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "Whether some mips might be streamed soon. If false, the texture is not planned resolution will be stable." },
			};
#endif
			auto NewProp_bHasStreamingUpdatePending_SetBit = [](void* Obj){ ((UTexture2D*)Obj)->bHasStreamingUpdatePending = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStreamingUpdatePending = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasStreamingUpdatePending", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400002000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UTexture2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bHasStreamingUpdatePending_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bHasStreamingUpdatePending_MetaData, ARRAY_COUNT(NewProp_bHasStreamingUpdatePending_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStreamable_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "Whether the texture is currently streamable or not." },
			};
#endif
			auto NewProp_bIsStreamable_SetBit = [](void* Obj){ ((UTexture2D*)Obj)->bIsStreamable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStreamable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsStreamable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTexture2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsStreamable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsStreamable_MetaData, ARRAY_COUNT(NewProp_bIsStreamable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTemporarilyDisableStreaming_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "True if streaming is temporarily disabled so we can update subregions of this texture's resource\n      without streaming clobbering it. Automatically cleared before saving." },
			};
#endif
			auto NewProp_bTemporarilyDisableStreaming_SetBit = [](void* Obj){ ((UTexture2D*)Obj)->bTemporarilyDisableStreaming = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTemporarilyDisableStreaming = { UE4CodeGen_Private::EPropertyClass::Bool, "bTemporarilyDisableStreaming", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UTexture2D), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bTemporarilyDisableStreaming_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bTemporarilyDisableStreaming_MetaData, ARRAY_COUNT(NewProp_bTemporarilyDisableStreaming_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "WorldSettings timestamp that tells the streamer to force all miplevels to be resident up until that time." },
			};
#endif
			static const UE4CodeGen_Private::FDoublePropertyParams NewProp_ForceMipLevelsToBeResidentTimestamp = { UE4CodeGen_Private::EPropertyClass::Double, "ForceMipLevelsToBeResidentTimestamp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(UTexture2D, ForceMipLevelsToBeResidentTimestamp), METADATA_PARAMS(NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData, ARRAY_COUNT(NewProp_ForceMipLevelsToBeResidentTimestamp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedSize_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "The imported size of the texture. Only valid on cooked builds when texture source is not\navailable. Access ONLY via the GetImportedSize() accessor!" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportedSize = { UE4CodeGen_Private::EPropertyClass::Struct, "ImportedSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UTexture2D, ImportedSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_ImportedSize_MetaData, ARRAY_COUNT(NewProp_ImportedSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstResourceMemMip_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "keep track of first mip level used for ResourceMem creation" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_FirstResourceMemMip = { UE4CodeGen_Private::EPropertyClass::Int, "FirstResourceMemMip", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(UTexture2D, FirstResourceMemMip), METADATA_PARAMS(NewProp_FirstResourceMemMip_MetaData, ARRAY_COUNT(NewProp_FirstResourceMemMip_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "* Level scope index of this texture. It is used to reduce the amount of lookup to map a texture to its level index.\n* Useful when building texture streaming data, as well as when filling the texture streamer with precomputed data.\n* It relates to FStreamingTextureBuildInfo::TextureLevelIndex and also the index in ULevel::StreamingTextureGuids.\n* Default value of -1, indicates that the texture has an unknown index (not yet processed). At level load time,\n* -2 is also used to indicate that the texture has been processed but no entry were found in the level table.\n* After any of these processes, the LevelIndex is reset to INDEX_NONE. Making it ready for the next level task." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LevelIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LevelIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000400202000, 1, nullptr, STRUCT_OFFSET(UTexture2D, LevelIndex), METADATA_PARAMS(NewProp_LevelIndex_MetaData, ARRAY_COUNT(NewProp_LevelIndex_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StreamingIndex_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/Texture2D.h" },
				{ "ToolTip", "FStreamingTexture index used by the texture streaming system." },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StreamingIndex = { UE4CodeGen_Private::EPropertyClass::Int, "StreamingIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000400202000, 1, nullptr, STRUCT_OFFSET(UTexture2D, StreamingIndex), METADATA_PARAMS(NewProp_StreamingIndex_MetaData, ARRAY_COUNT(NewProp_StreamingIndex_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressX,
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasBeenPaintedInEditor,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bGlobalForceMipLevelsToBeResident,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreStreamingMipBias,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceMiplevelsToBeResident,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bHasStreamingUpdatePending,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsStreamable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bTemporarilyDisableStreaming,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceMipLevelsToBeResidentTimestamp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImportedSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FirstResourceMemMip,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LevelIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StreamingIndex,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UTexture2D>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UTexture2D::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880080u,
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
	IMPLEMENT_CLASS(UTexture2D, 1784297607);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTexture2D(Z_Construct_UClass_UTexture2D, &UTexture2D::StaticClass, TEXT("/Script/Engine"), TEXT("UTexture2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexture2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
