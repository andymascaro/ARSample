// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/StereoLayerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoLayerComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStereoLayerShape();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStereoLayerType();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStereoLayerComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetPriority();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetTexture();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetUVRect();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetPriority();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetTexture();
	ENGINE_API UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetUVRect();
// End Cross Module References
	static UEnum* EStereoLayerShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStereoLayerShape, Z_Construct_UPackage__Script_Engine(), TEXT("EStereoLayerShape"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStereoLayerShape(EStereoLayerShape_StaticEnum, TEXT("/Script/Engine"), TEXT("EStereoLayerShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EStereoLayerShape_CRC() { return 3331796263U; }
	UEnum* Z_Construct_UEnum_Engine_EStereoLayerShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStereoLayerShape"), 0, Get_Z_Construct_UEnum_Engine_EStereoLayerShape_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SLSH_QuadLayer", (int64)SLSH_QuadLayer },
				{ "SLSH_CylinderLayer", (int64)SLSH_CylinderLayer },
				{ "SLSH_CubemapLayer", (int64)SLSH_CubemapLayer },
				{ "SLSH_MAX", (int64)SLSH_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "SLSH_CubemapLayer.DisplayName", "Cubemap Layer" },
				{ "SLSH_CubemapLayer.ToolTip", "Cubemap layer" },
				{ "SLSH_CylinderLayer.DisplayName", "Cylinder Layer" },
				{ "SLSH_CylinderLayer.ToolTip", "Cylinder layer" },
				{ "SLSH_QuadLayer.DisplayName", "Quad Layer" },
				{ "SLSH_QuadLayer.ToolTip", "Quad layer" },
				{ "ToolTip", "The shape to use for the stereo layer.  Note that some shapes might not be supported on all platforms!" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStereoLayerShape",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EStereoLayerShape",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EStereoLayerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStereoLayerType, Z_Construct_UPackage__Script_Engine(), TEXT("EStereoLayerType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStereoLayerType(EStereoLayerType_StaticEnum, TEXT("/Script/Engine"), TEXT("EStereoLayerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EStereoLayerType_CRC() { return 1056507612U; }
	UEnum* Z_Construct_UEnum_Engine_EStereoLayerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStereoLayerType"), 0, Get_Z_Construct_UEnum_Engine_EStereoLayerType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SLT_WorldLocked", (int64)SLT_WorldLocked },
				{ "SLT_TrackerLocked", (int64)SLT_TrackerLocked },
				{ "SLT_FaceLocked", (int64)SLT_FaceLocked },
				{ "SLT_MAX", (int64)SLT_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "SLT_FaceLocked.DisplayName", "Face Locked" },
				{ "SLT_FaceLocked.ToolTip", "Location within the view space" },
				{ "SLT_TrackerLocked.DisplayName", "Tracker Locked" },
				{ "SLT_TrackerLocked.ToolTip", "Location within the HMD tracking space" },
				{ "SLT_WorldLocked.DisplayName", "World Locked" },
				{ "SLT_WorldLocked.ToolTip", "Location within the world" },
				{ "ToolTip", "Used by IStereoLayer" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EStereoLayerType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EStereoLayerType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UStereoLayerComponent::StaticRegisterNativesUStereoLayerComponent()
	{
		UClass* Class = UStereoLayerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPriority", (Native)&UStereoLayerComponent::execGetPriority },
			{ "GetQuadSize", (Native)&UStereoLayerComponent::execGetQuadSize },
			{ "GetTexture", (Native)&UStereoLayerComponent::execGetTexture },
			{ "GetUVRect", (Native)&UStereoLayerComponent::execGetUVRect },
			{ "MarkTextureForUpdate", (Native)&UStereoLayerComponent::execMarkTextureForUpdate },
			{ "SetPriority", (Native)&UStereoLayerComponent::execSetPriority },
			{ "SetQuadSize", (Native)&UStereoLayerComponent::execSetQuadSize },
			{ "SetTexture", (Native)&UStereoLayerComponent::execSetTexture },
			{ "SetUVRect", (Native)&UStereoLayerComponent::execSetUVRect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetPriority()
	{
		struct StereoLayerComponent_eventGetPriority_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventGetPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "@return the render priority" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, "GetPriority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(StereoLayerComponent_eventGetPriority_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize()
	{
		struct StereoLayerComponent_eventGetQuadSize_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventGetQuadSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "@return the height and width of the rendered quad" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, "GetQuadSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(StereoLayerComponent_eventGetQuadSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetTexture()
	{
		struct StereoLayerComponent_eventGetTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "@return the texture mapped to the stereo layer quad" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, "GetTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(StereoLayerComponent_eventGetTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_GetUVRect()
	{
		struct StereoLayerComponent_eventGetUVRect_Parms
		{
			FBox2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventGetUVRect_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "@return the UV coordinates mapped to the quad face" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, "GetUVRect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(StereoLayerComponent_eventGetUVRect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Manually mark the stereo layer texture for updating" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, "MarkTextureForUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetPriority()
	{
		struct StereoLayerComponent_eventSetPriority_Parms
		{
			int32 InPriority;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_InPriority = { UE4CodeGen_Private::EPropertyClass::Int, "InPriority", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetPriority_Parms, InPriority), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InPriority,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Change the layer's render priority, higher priorities render on top of lower priorities\n@param       InPriority: Priority value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, "SetPriority", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StereoLayerComponent_eventSetPriority_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize()
	{
		struct StereoLayerComponent_eventSetQuadSize_Parms
		{
			FVector2D InQuadSize;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InQuadSize = { UE4CodeGen_Private::EPropertyClass::Struct, "InQuadSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetQuadSize_Parms, InQuadSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InQuadSize,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Change the quad size. This is the unscaled height and width, before component scale is applied.\n@param       InQuadSize: new quad size." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, "SetQuadSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(StereoLayerComponent_eventSetQuadSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetTexture()
	{
		struct StereoLayerComponent_eventSetTexture_Parms
		{
			UTexture* InTexture;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InTexture = { UE4CodeGen_Private::EPropertyClass::Object, "InTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetTexture_Parms, InTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InTexture,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Change the texture displayed on the stereo layer quad\n@param       InTexture: new Texture2D" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, "SetTexture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(StereoLayerComponent_eventSetTexture_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStereoLayerComponent_SetUVRect()
	{
		struct StereoLayerComponent_eventSetUVRect_Parms
		{
			FBox2D InUVRect;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_InUVRect = { UE4CodeGen_Private::EPropertyClass::Struct, "InUVRect", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StereoLayerComponent_eventSetUVRect_Parms, InUVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InUVRect,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Stereo Layer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Change the UV coordinates mapped to the quad face\n@param       InUVRect: Min and Max UV coordinates" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStereoLayerComponent, "SetUVRect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(StereoLayerComponent_eventSetUVRect_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStereoLayerComponent_NoRegister()
	{
		return UStereoLayerComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UStereoLayerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UStereoLayerComponent_GetPriority, "GetPriority" }, // 4110297745
				{ &Z_Construct_UFunction_UStereoLayerComponent_GetQuadSize, "GetQuadSize" }, // 2586379038
				{ &Z_Construct_UFunction_UStereoLayerComponent_GetTexture, "GetTexture" }, // 1894510171
				{ &Z_Construct_UFunction_UStereoLayerComponent_GetUVRect, "GetUVRect" }, // 3142980339
				{ &Z_Construct_UFunction_UStereoLayerComponent_MarkTextureForUpdate, "MarkTextureForUpdate" }, // 3640330611
				{ &Z_Construct_UFunction_UStereoLayerComponent_SetPriority, "SetPriority" }, // 233336203
				{ &Z_Construct_UFunction_UStereoLayerComponent_SetQuadSize, "SetQuadSize" }, // 95429682
				{ &Z_Construct_UFunction_UStereoLayerComponent_SetTexture, "SetTexture" }, // 3882848112
				{ &Z_Construct_UFunction_UStereoLayerComponent_SetUVRect, "SetUVRect" }, // 1159930537
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "HeadMountedDisplay" },
				{ "DisplayName", "Stereo Layer" },
				{ "HideCategories", "Object LOD Lighting TextureStreaming Trigger PhysicsVolume" },
				{ "IncludePath", "Components/StereoLayerComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "A geometry layer within the stereo rendered viewport." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Render priority among all stereo layers, higher priority render on top of lower priority *" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority = { UE4CodeGen_Private::EPropertyClass::Int, "Priority", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, Priority), METADATA_PARAMS(NewProp_Priority_MetaData, ARRAY_COUNT(NewProp_Priority_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoLayerShape_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Specifies which type of layer it is.  Note that some shapes will be supported only on certain platforms! *" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_StereoLayerShape = { UE4CodeGen_Private::EPropertyClass::Byte, "StereoLayerShape", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, StereoLayerShape), Z_Construct_UEnum_Engine_EStereoLayerShape, METADATA_PARAMS(NewProp_StereoLayerShape_MetaData, ARRAY_COUNT(NewProp_StereoLayerShape_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StereoLayerType_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Specifies how and where the quad is rendered to the screen *" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_StereoLayerType = { UE4CodeGen_Private::EPropertyClass::Byte, "StereoLayerType", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, StereoLayerType), Z_Construct_UEnum_Engine_EStereoLayerType, METADATA_PARAMS(NewProp_StereoLayerType_MetaData, ARRAY_COUNT(NewProp_StereoLayerType_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderHeight_MetaData[] = {
				{ "Category", "StereoLayer | Cylinder Overlay Properties" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Height of the stereo layer cylinder *" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CylinderHeight = { UE4CodeGen_Private::EPropertyClass::Int, "CylinderHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, CylinderHeight), METADATA_PARAMS(NewProp_CylinderHeight_MetaData, ARRAY_COUNT(NewProp_CylinderHeight_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderOverlayArc_MetaData[] = {
				{ "Category", "StereoLayer | Cylinder Overlay Properties" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Arc angle for the stereo layer cylinder *" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CylinderOverlayArc = { UE4CodeGen_Private::EPropertyClass::Float, "CylinderOverlayArc", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, CylinderOverlayArc), METADATA_PARAMS(NewProp_CylinderOverlayArc_MetaData, ARRAY_COUNT(NewProp_CylinderOverlayArc_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderRadius_MetaData[] = {
				{ "Category", "StereoLayer | Cylinder Overlay Properties" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Radial size of the rendered stereo layer cylinder *" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CylinderRadius = { UE4CodeGen_Private::EPropertyClass::Float, "CylinderRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, CylinderRadius), METADATA_PARAMS(NewProp_CylinderRadius_MetaData, ARRAY_COUNT(NewProp_CylinderRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVRect_MetaData[] = {
				{ "Category", "StereoLayer | Quad Overlay Properties" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "UV coordinates mapped to the quad face *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVRect = { UE4CodeGen_Private::EPropertyClass::Struct, "UVRect", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, UVRect), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(NewProp_UVRect_MetaData, ARRAY_COUNT(NewProp_UVRect_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadSize_MetaData[] = {
				{ "Category", "StereoLayer | Quad Overlay Properties" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Size of the rendered stereo layer quad *" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_QuadSize = { UE4CodeGen_Private::EPropertyClass::Struct, "QuadSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x002008000000001d, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, QuadSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_QuadSize_MetaData, ARRAY_COUNT(NewProp_QuadSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQuadPreserveTextureRatio_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "True if the quad should internally set it's Y value based on the set texture's dimensions" },
			};
#endif
			auto NewProp_bQuadPreserveTextureRatio_SetBit = [](void* Obj){ ((UStereoLayerComponent*)Obj)->bQuadPreserveTextureRatio = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuadPreserveTextureRatio = { UE4CodeGen_Private::EPropertyClass::Bool, "bQuadPreserveTextureRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStereoLayerComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bQuadPreserveTextureRatio_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bQuadPreserveTextureRatio_MetaData, ARRAY_COUNT(NewProp_bQuadPreserveTextureRatio_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftTexture_MetaData[] = {
				{ "Category", "StereoLayer | Cubemap Overlay Properties" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Texture displayed on the stereo layer for left eye, if stereoscopic textures are supported on the platform *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftTexture = { UE4CodeGen_Private::EPropertyClass::Object, "LeftTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, LeftTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(NewProp_LeftTexture_MetaData, ARRAY_COUNT(NewProp_LeftTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "Texture displayed on the stereo layer (is stereocopic textures are supported on the platfrom and more than one texture is provided, this will be the right eye) *" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Texture = { UE4CodeGen_Private::EPropertyClass::Object, "Texture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000015, 1, nullptr, STRUCT_OFFSET(UStereoLayerComponent, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(NewProp_Texture_MetaData, ARRAY_COUNT(NewProp_Texture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "True if the texture should not use its own alpha channel (1.0 will be substituted)" },
			};
#endif
			auto NewProp_bNoAlphaChannel_SetBit = [](void* Obj){ ((UStereoLayerComponent*)Obj)->bNoAlphaChannel = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoAlphaChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStereoLayerComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bNoAlphaChannel_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bNoAlphaChannel_MetaData, ARRAY_COUNT(NewProp_bNoAlphaChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsDepth_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform" },
			};
#endif
			auto NewProp_bSupportsDepth_SetBit = [](void* Obj){ ((UStereoLayerComponent*)Obj)->bSupportsDepth = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsDepth = { UE4CodeGen_Private::EPropertyClass::Bool, "bSupportsDepth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStereoLayerComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSupportsDepth_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSupportsDepth_MetaData, ARRAY_COUNT(NewProp_bSupportsDepth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLiveTexture_MetaData[] = {
				{ "Category", "StereoLayer" },
				{ "ModuleRelativePath", "Classes/Components/StereoLayerComponent.h" },
				{ "ToolTip", "True if the stereo layer texture needs to update itself every frame(scene capture, video, etc.)" },
			};
#endif
			auto NewProp_bLiveTexture_SetBit = [](void* Obj){ ((UStereoLayerComponent*)Obj)->bLiveTexture = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLiveTexture = { UE4CodeGen_Private::EPropertyClass::Bool, "bLiveTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UStereoLayerComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bLiveTexture_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bLiveTexture_MetaData, ARRAY_COUNT(NewProp_bLiveTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Priority,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StereoLayerShape,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StereoLayerType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CylinderHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CylinderOverlayArc,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CylinderRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVRect,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_QuadSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bQuadPreserveTextureRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Texture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bNoAlphaChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSupportsDepth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bLiveTexture,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStereoLayerComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStereoLayerComponent::StaticClass,
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
	IMPLEMENT_CLASS(UStereoLayerComponent, 2791844659);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoLayerComponent(Z_Construct_UClass_UStereoLayerComponent, &UStereoLayerComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UStereoLayerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
