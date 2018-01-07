// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/Components/WidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetComponent() {}
// Cross Module References
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetGeometryMode();
	UPackage* Z_Construct_UPackage__Script_UMG();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetTimingPolicy();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetSpace();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetDrawSize();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_RequestRedraw();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetDrawSize();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity();
	UMG_API UFunction* Z_Construct_UFunction_UWidgetComponent_SetWidget();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static UEnum* EWidgetGeometryMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetGeometryMode, Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetGeometryMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetGeometryMode(EWidgetGeometryMode_StaticEnum, TEXT("/Script/UMG"), TEXT("EWidgetGeometryMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EWidgetGeometryMode_CRC() { return 3766520334U; }
	UEnum* Z_Construct_UEnum_UMG_EWidgetGeometryMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetGeometryMode"), 0, Get_Z_Construct_UEnum_UMG_EWidgetGeometryMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetGeometryMode::Plane", (int64)EWidgetGeometryMode::Plane },
				{ "EWidgetGeometryMode::Cylinder", (int64)EWidgetGeometryMode::Cylinder },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Cylinder.ToolTip", "The widget is mapped onto a cylinder" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "Plane.ToolTip", "The widget is mapped onto a plane" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWidgetGeometryMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWidgetGeometryMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWidgetBlendMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetBlendMode, Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetBlendMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetBlendMode(EWidgetBlendMode_StaticEnum, TEXT("/Script/UMG"), TEXT("EWidgetBlendMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EWidgetBlendMode_CRC() { return 3493467476U; }
	UEnum* Z_Construct_UEnum_UMG_EWidgetBlendMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetBlendMode"), 0, Get_Z_Construct_UEnum_UMG_EWidgetBlendMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetBlendMode::Opaque", (int64)EWidgetBlendMode::Opaque },
				{ "EWidgetBlendMode::Masked", (int64)EWidgetBlendMode::Masked },
				{ "EWidgetBlendMode::Transparent", (int64)EWidgetBlendMode::Transparent },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWidgetBlendMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWidgetBlendMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWidgetTimingPolicy_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetTimingPolicy, Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetTimingPolicy"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetTimingPolicy(EWidgetTimingPolicy_StaticEnum, TEXT("/Script/UMG"), TEXT("EWidgetTimingPolicy"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EWidgetTimingPolicy_CRC() { return 731920873U; }
	UEnum* Z_Construct_UEnum_UMG_EWidgetTimingPolicy()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetTimingPolicy"), 0, Get_Z_Construct_UEnum_UMG_EWidgetTimingPolicy_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetTimingPolicy::RealTime", (int64)EWidgetTimingPolicy::RealTime },
				{ "EWidgetTimingPolicy::GameTime", (int64)EWidgetTimingPolicy::GameTime },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "GameTime.ToolTip", "The widget will tick using game time, respecting pausing and time dilation." },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "RealTime.ToolTip", "The widget will tick using real time. When not ticking, real time will accumulate and be simulated on the next tick." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWidgetTimingPolicy",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWidgetTimingPolicy",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EWidgetSpace_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UMG_EWidgetSpace, Z_Construct_UPackage__Script_UMG(), TEXT("EWidgetSpace"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWidgetSpace(EWidgetSpace_StaticEnum, TEXT("/Script/UMG"), TEXT("EWidgetSpace"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UMG_EWidgetSpace_CRC() { return 194594389U; }
	UEnum* Z_Construct_UEnum_UMG_EWidgetSpace()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UMG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWidgetSpace"), 0, Get_Z_Construct_UEnum_UMG_EWidgetSpace_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWidgetSpace::World", (int64)EWidgetSpace::World },
				{ "EWidgetSpace::Screen", (int64)EWidgetSpace::Screen },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "Screen.ToolTip", "The widget is rendered in the screen, completely outside of the world, never occluded." },
				{ "World.ToolTip", "The widget is rendered in the world as mesh, it can be occluded like any other mesh in the world." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UMG,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EWidgetSpace",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EWidgetSpace",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UWidgetComponent::StaticRegisterNativesUWidgetComponent()
	{
		UClass* Class = UWidgetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDrawSize", (Native)&UWidgetComponent::execGetDrawSize },
			{ "GetMaterialInstance", (Native)&UWidgetComponent::execGetMaterialInstance },
			{ "GetOwnerPlayer", (Native)&UWidgetComponent::execGetOwnerPlayer },
			{ "GetRenderTarget", (Native)&UWidgetComponent::execGetRenderTarget },
			{ "GetUserWidgetObject", (Native)&UWidgetComponent::execGetUserWidgetObject },
			{ "RequestRedraw", (Native)&UWidgetComponent::execRequestRedraw },
			{ "SetBackgroundColor", (Native)&UWidgetComponent::execSetBackgroundColor },
			{ "SetDrawSize", (Native)&UWidgetComponent::execSetDrawSize },
			{ "SetOwnerPlayer", (Native)&UWidgetComponent::execSetOwnerPlayer },
			{ "SetTintColorAndOpacity", (Native)&UWidgetComponent::execSetTintColorAndOpacity },
			{ "SetWidget", (Native)&UWidgetComponent::execSetWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetDrawSize()
	{
		struct WidgetComponent_eventGetDrawSize_Parms
		{
			FVector2D ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetDrawSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "@return The draw size of the quad in the world" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "GetDrawSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(WidgetComponent_eventGetDrawSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance()
	{
		struct WidgetComponent_eventGetMaterialInstance_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "@return The dynamic material instance used to render the user widget" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "GetMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetComponent_eventGetMaterialInstance_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer()
	{
		struct WidgetComponent_eventGetOwnerPlayer_Parms
		{
			ULocalPlayer* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetOwnerPlayer_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Gets the local player that owns this widget component." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "GetOwnerPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetComponent_eventGetOwnerPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetRenderTarget()
	{
		struct WidgetComponent_eventGetRenderTarget_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "@return The render target to which the user widget is rendered" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "GetRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetComponent_eventGetRenderTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject()
	{
		struct WidgetComponent_eventGetUserWidgetObject_Parms
		{
			UUserWidget* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventGetUserWidgetObject_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "@return The user widget object displayed by this component" },
				{ "UnsafeDuringActorConstruction", "TRUE" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "GetUserWidgetObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(WidgetComponent_eventGetUserWidgetObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_RequestRedraw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Requests that the widget be redrawn." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "RequestRedraw", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor()
	{
		struct WidgetComponent_eventSetBackgroundColor_Parms
		{
			FLinearColor NewBackgroundColor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewBackgroundColor_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewBackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "NewBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetBackgroundColor_Parms, NewBackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_NewBackgroundColor_MetaData, ARRAY_COUNT(NewProp_NewBackgroundColor_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewBackgroundColor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Sets the background color and opacityscale for this widget" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "SetBackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(WidgetComponent_eventSetBackgroundColor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetDrawSize()
	{
		struct WidgetComponent_eventSetDrawSize_Parms
		{
			FVector2D Size;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetDrawSize_Parms, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Sets the draw size of the quad in the world" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "SetDrawSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(WidgetComponent_eventSetDrawSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer()
	{
		struct WidgetComponent_eventSetOwnerPlayer_Parms
		{
			ULocalPlayer* LocalPlayer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LocalPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "LocalPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetOwnerPlayer_Parms, LocalPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalPlayer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Sets the local player that owns this widget component.  Setting the owning player controls\nwhich player's viewport the widget appears on in a split screen scenario.  Additionally it\nforwards the owning player to the actual UserWidget that is spawned." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "SetOwnerPlayer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WidgetComponent_eventSetOwnerPlayer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity()
	{
		struct WidgetComponent_eventSetTintColorAndOpacity_Parms
		{
			FLinearColor NewTintColorAndOpacity;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewTintColorAndOpacity_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewTintColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "NewTintColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetTintColorAndOpacity_Parms, NewTintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_NewTintColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_NewTintColorAndOpacity_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewTintColorAndOpacity,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Sets the tint color and opacity scale for this widget" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "SetTintColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(WidgetComponent_eventSetTintColorAndOpacity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWidgetComponent_SetWidget()
	{
		struct WidgetComponent_eventSetWidget_Parms
		{
			UUserWidget* Widget;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(WidgetComponent_eventSetWidget_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Sets the widget to use directly. This function will keep track of the widget till the next time it's called\n    with either a newer widget or a nullptr" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetComponent, "SetWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(WidgetComponent_eventSetWidget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetComponent_NoRegister()
	{
		return UWidgetComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UMeshComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_UMG,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UWidgetComponent_GetDrawSize, "GetDrawSize" }, // 2687583306
				{ &Z_Construct_UFunction_UWidgetComponent_GetMaterialInstance, "GetMaterialInstance" }, // 2017026816
				{ &Z_Construct_UFunction_UWidgetComponent_GetOwnerPlayer, "GetOwnerPlayer" }, // 3273647677
				{ &Z_Construct_UFunction_UWidgetComponent_GetRenderTarget, "GetRenderTarget" }, // 2231632283
				{ &Z_Construct_UFunction_UWidgetComponent_GetUserWidgetObject, "GetUserWidgetObject" }, // 3901462252
				{ &Z_Construct_UFunction_UWidgetComponent_RequestRedraw, "RequestRedraw" }, // 718169649
				{ &Z_Construct_UFunction_UWidgetComponent_SetBackgroundColor, "SetBackgroundColor" }, // 1027318554
				{ &Z_Construct_UFunction_UWidgetComponent_SetDrawSize, "SetDrawSize" }, // 1191533704
				{ &Z_Construct_UFunction_UWidgetComponent_SetOwnerPlayer, "SetOwnerPlayer" }, // 3103389071
				{ &Z_Construct_UFunction_UWidgetComponent_SetTintColorAndOpacity, "SetTintColorAndOpacity" }, // 3888854195
				{ &Z_Construct_UFunction_UWidgetComponent_SetWidget, "SetWidget" }, // 3308363633
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "UserInterface" },
				{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
				{ "IncludePath", "Components/WidgetComponent.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The widget component provides a surface in the 3D environment on which to render widgets normally rendered to the screen.\nWidgets are first rendered to a render target, then that render target is displayed in the world.\n\nMaterial Properties set by this component on whatever material overrides the default.\nSlateUI [Texture]\nBackColor [Vector]\nTintColorAndOpacity [Vector]\nOpacityFromTexture [Scalar]" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CylinderArcAngle_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ClampMax", "180.000000" },
				{ "ClampMin", "1.000000" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Curvature of a cylindrical widget in degrees." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CylinderArcAngle = { UE4CodeGen_Private::EPropertyClass::Float, "CylinderArcAngle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, CylinderArcAngle), METADATA_PARAMS(NewProp_CylinderArcAngle_MetaData, ARRAY_COUNT(NewProp_CylinderArcAngle_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryMode_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Controls the geometry of the widget component. See EWidgetGeometryMode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GeometryMode = { UE4CodeGen_Private::EPropertyClass::Enum, "GeometryMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, GeometryMode), Z_Construct_UEnum_UMG_EWidgetGeometryMode, METADATA_PARAMS(NewProp_GeometryMode_MetaData, ARRAY_COUNT(NewProp_GeometryMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_GeometryMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerZOrder_MetaData[] = {
				{ "Category", "Layers" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "ZOrder the layer will be created on, note this only matters on the first time a new layer is created, subsequent additions to the same layer will use the initially defined ZOrder" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LayerZOrder = { UE4CodeGen_Private::EPropertyClass::Int, "LayerZOrder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, LayerZOrder), METADATA_PARAMS(NewProp_LayerZOrder_MetaData, ARRAY_COUNT(NewProp_LayerZOrder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedLayerName_MetaData[] = {
				{ "Category", "Layers" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Layer Name the widget will live on" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SharedLayerName = { UE4CodeGen_Private::EPropertyClass::Name, "SharedLayerName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000010001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, SharedLayerName), METADATA_PARAMS(NewProp_SharedLayerName_MetaData, ARRAY_COUNT(NewProp_SharedLayerName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEditTimeUsable_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Allows the widget component to be used at editor time.  For use in the VR-Editor." },
			};
#endif
			auto NewProp_bEditTimeUsable_SetBit = [](void* Obj){ ((UWidgetComponent*)Obj)->bEditTimeUsable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEditTimeUsable = { UE4CodeGen_Private::EPropertyClass::Bool, "bEditTimeUsable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bEditTimeUsable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bEditTimeUsable_MetaData, ARRAY_COUNT(NewProp_bEditTimeUsable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAddedToScreen_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
			};
#endif
			auto NewProp_bAddedToScreen_SetBit = [](void* Obj){ ((UWidgetComponent*)Obj)->bAddedToScreen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAddedToScreen = { UE4CodeGen_Private::EPropertyClass::Bool, "bAddedToScreen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000202000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAddedToScreen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAddedToScreen_MetaData, ARRAY_COUNT(NewProp_bAddedToScreen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The dynamic instance of the material that the render target is attached to" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "MaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000202000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, MaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(NewProp_MaterialInstance_MetaData, ARRAY_COUNT(NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The target to which the user widget is rendered" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "RenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000202000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(NewProp_RenderTarget_MetaData, ARRAY_COUNT(NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterial_OneSided_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The material instance for masked, one-sided widget components." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskedMaterial_OneSided = { UE4CodeGen_Private::EPropertyClass::Object, "MaskedMaterial_OneSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, MaskedMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MaskedMaterial_OneSided_MetaData, ARRAY_COUNT(NewProp_MaskedMaterial_OneSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaskedMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The material instance for masked widget components." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaskedMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "MaskedMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, MaskedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MaskedMaterial_MetaData, ARRAY_COUNT(NewProp_MaskedMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_OneSided_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The material instance for opaque, one-sided widget components" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueMaterial_OneSided = { UE4CodeGen_Private::EPropertyClass::Object, "OpaqueMaterial_OneSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_OpaqueMaterial_OneSided_MetaData, ARRAY_COUNT(NewProp_OpaqueMaterial_OneSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpaqueMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The material instance for opaque widget components" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OpaqueMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "OpaqueMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_OpaqueMaterial_MetaData, ARRAY_COUNT(NewProp_OpaqueMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_OneSided_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The material instance for translucent, one-sided widget components" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentMaterial_OneSided = { UE4CodeGen_Private::EPropertyClass::Object, "TranslucentMaterial_OneSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial_OneSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_TranslucentMaterial_OneSided_MetaData, ARRAY_COUNT(NewProp_TranslucentMaterial_OneSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TranslucentMaterial_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The material instance for translucent widget components" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TranslucentMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "TranslucentMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_TranslucentMaterial_MetaData, ARRAY_COUNT(NewProp_TranslucentMaterial_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The body setup of the displayed quad" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup = { UE4CodeGen_Private::EPropertyClass::Object, "BodySetup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000202000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(NewProp_BodySetup_MetaData, ARRAY_COUNT(NewProp_BodySetup_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The User Widget object displayed and managed by this component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget = { UE4CodeGen_Private::EPropertyClass::Object, "Widget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000282008, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(NewProp_Widget_MetaData, ARRAY_COUNT(NewProp_Widget_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickWhenOffscreen_MetaData[] = {
				{ "Category", "Animation" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Should the component tick the widget when it's off screen?" },
			};
#endif
			auto NewProp_TickWhenOffscreen_SetBit = [](void* Obj){ ((UWidgetComponent*)Obj)->TickWhenOffscreen = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TickWhenOffscreen = { UE4CodeGen_Private::EPropertyClass::Bool, "TickWhenOffscreen", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_TickWhenOffscreen_SetBit)>::SetBit, METADATA_PARAMS(NewProp_TickWhenOffscreen_MetaData, ARRAY_COUNT(NewProp_TickWhenOffscreen_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTwoSided_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Is the component visible from behind?" },
			};
#endif
			auto NewProp_bIsTwoSided_SetBit = [](void* Obj){ ((UWidgetComponent*)Obj)->bIsTwoSided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTwoSided = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTwoSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsTwoSided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsTwoSided_MetaData, ARRAY_COUNT(NewProp_bIsTwoSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The blend mode for the widget." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlendMode = { UE4CodeGen_Private::EPropertyClass::Enum, "BlendMode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, BlendMode), Z_Construct_UEnum_UMG_EWidgetBlendMode, METADATA_PARAMS(NewProp_BlendMode_MetaData, ARRAY_COUNT(NewProp_BlendMode_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityFromTexture_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ClampMax", "1.000000" },
				{ "ClampMin", "0.000000" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0)" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityFromTexture = { UE4CodeGen_Private::EPropertyClass::Float, "OpacityFromTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, OpacityFromTexture), METADATA_PARAMS(NewProp_OpacityFromTexture_MetaData, ARRAY_COUNT(NewProp_OpacityFromTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TintColorAndOpacity_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Tint color and opacity for this component" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TintColorAndOpacity = { UE4CodeGen_Private::EPropertyClass::Struct, "TintColorAndOpacity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, TintColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_TintColorAndOpacity_MetaData, ARRAY_COUNT(NewProp_TintColorAndOpacity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
				{ "Category", "Rendering" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The background color of the component" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_BackgroundColor = { UE4CodeGen_Private::EPropertyClass::Struct, "BackgroundColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_BackgroundColor_MetaData, ARRAY_COUNT(NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerPlayer_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The owner player for a widget component, if this widget is drawn on the screen, this controls\nwhat player's screen it appears on for split screen, if not set, users player 0." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerPlayer = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerPlayer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, OwnerPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(NewProp_OwnerPlayer_MetaData, ARRAY_COUNT(NewProp_OwnerPlayer_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWindowFocusable_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Is the virtual window created to host the widget focusable?" },
			};
#endif
			auto NewProp_bWindowFocusable_SetBit = [](void* Obj){ ((UWidgetComponent*)Obj)->bWindowFocusable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWindowFocusable = { UE4CodeGen_Private::EPropertyClass::Bool, "bWindowFocusable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bWindowFocusable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bWindowFocusable_MetaData, ARRAY_COUNT(NewProp_bWindowFocusable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceiveHardwareInput_MetaData[] = {
				{ "Category", "Interaction" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Register with the viewport for hardware input from the true mouse and keyboard.  These widgets\nwill more or less react like regular 2D widgets in the viewport, e.g. they can and will steal focus\nfrom the viewport.\n\nWARNING: If you are making a VR game, definitely do not change this to true.  This option should ONLY be used\nif you're making what would otherwise be a normal menu for a game, just in 3D.  If you also need the game to\nremain responsive and for the player to be able to interact with UI and move around the world (such as a keypad on a door),\nuse the WidgetInteractionComponent instead." },
			};
#endif
			auto NewProp_bReceiveHardwareInput_SetBit = [](void* Obj){ ((UWidgetComponent*)Obj)->bReceiveHardwareInput = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceiveHardwareInput = { UE4CodeGen_Private::EPropertyClass::Bool, "bReceiveHardwareInput", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bReceiveHardwareInput_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bReceiveHardwareInput_MetaData, ARRAY_COUNT(NewProp_bReceiveHardwareInput_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pivot_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The Alignment/Pivot point that the widget is placed at relative to the position." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pivot = { UE4CodeGen_Private::EPropertyClass::Struct, "Pivot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, Pivot), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_Pivot_MetaData, ARRAY_COUNT(NewProp_Pivot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawAtDesiredSize_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Causes the render target to automatically match the desired size.\n\nWARNING: If you change this every frame, it will be very expensive.  If you need\n   that effect, you should keep the outer widget's sized locked and dynamically\n   scale or resize some inner widget." },
			};
#endif
			auto NewProp_bDrawAtDesiredSize_SetBit = [](void* Obj){ ((UWidgetComponent*)Obj)->bDrawAtDesiredSize = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawAtDesiredSize = { UE4CodeGen_Private::EPropertyClass::Bool, "bDrawAtDesiredSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDrawAtDesiredSize_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDrawAtDesiredSize_MetaData, ARRAY_COUNT(NewProp_bDrawAtDesiredSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentDrawSize_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The actual draw size, this changes based on DrawSize - or the desired size of the widget if\nbDrawAtDesiredSize is true." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentDrawSize = { UE4CodeGen_Private::EPropertyClass::Struct, "CurrentDrawSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, CurrentDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_CurrentDrawSize_MetaData, ARRAY_COUNT(NewProp_CurrentDrawSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RedrawTime_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The time in between draws, if 0 - we would redraw every frame.  If 1, we would redraw every second.\nThis will work with bManuallyRedraw as well.  So you can say, manually redraw, but only redraw at this\nmaximum rate." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RedrawTime = { UE4CodeGen_Private::EPropertyClass::Float, "RedrawTime", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, RedrawTime), METADATA_PARAMS(NewProp_RedrawTime_MetaData, ARRAY_COUNT(NewProp_RedrawTime_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRedrawRequested_MetaData[] = {
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Has anyone requested we redraw?" },
			};
#endif
			auto NewProp_bRedrawRequested_SetBit = [](void* Obj){ ((UWidgetComponent*)Obj)->bRedrawRequested = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRedrawRequested = { UE4CodeGen_Private::EPropertyClass::Bool, "bRedrawRequested", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRedrawRequested_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRedrawRequested_MetaData, ARRAY_COUNT(NewProp_bRedrawRequested_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bManuallyRedraw_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "Should we wait to be told to redraw to actually draw?" },
			};
#endif
			auto NewProp_bManuallyRedraw_SetBit = [](void* Obj){ ((UWidgetComponent*)Obj)->bManuallyRedraw = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bManuallyRedraw = { UE4CodeGen_Private::EPropertyClass::Bool, "bManuallyRedraw", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UWidgetComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bManuallyRedraw_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bManuallyRedraw_MetaData, ARRAY_COUNT(NewProp_bManuallyRedraw_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawSize_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The size of the displayed quad." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_DrawSize = { UE4CodeGen_Private::EPropertyClass::Struct, "DrawSize", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, DrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(NewProp_DrawSize_MetaData, ARRAY_COUNT(NewProp_DrawSize_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The class of User Widget to create and display an instance of" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_WidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "WidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0024080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_WidgetClass_MetaData, ARRAY_COUNT(NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimingPolicy_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "How this widget should deal with timing, pausing, etc." },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TimingPolicy = { UE4CodeGen_Private::EPropertyClass::Enum, "TimingPolicy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, TimingPolicy), Z_Construct_UEnum_UMG_EWidgetTimingPolicy, METADATA_PARAMS(NewProp_TimingPolicy_MetaData, ARRAY_COUNT(NewProp_TimingPolicy_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_TimingPolicy_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[] = {
				{ "Category", "UserInterface" },
				{ "ModuleRelativePath", "Public/Components/WidgetComponent.h" },
				{ "ToolTip", "The coordinate space in which to render the widget" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Space = { UE4CodeGen_Private::EPropertyClass::Enum, "Space", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000001, 1, nullptr, STRUCT_OFFSET(UWidgetComponent, Space), Z_Construct_UEnum_UMG_EWidgetSpace, METADATA_PARAMS(NewProp_Space_MetaData, ARRAY_COUNT(NewProp_Space_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CylinderArcAngle,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeometryMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeometryMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LayerZOrder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SharedLayerName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bEditTimeUsable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAddedToScreen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialInstance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskedMaterial_OneSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaskedMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpaqueMaterial_OneSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpaqueMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentMaterial_OneSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TranslucentMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BodySetup,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Widget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TickWhenOffscreen,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsTwoSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendMode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BlendMode_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OpacityFromTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TintColorAndOpacity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerPlayer,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bWindowFocusable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bReceiveHardwareInput,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Pivot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDrawAtDesiredSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentDrawSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RedrawTime,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRedrawRequested,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bManuallyRedraw,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DrawSize,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimingPolicy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TimingPolicy_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Space,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Space_Underlying,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UWidgetComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UWidgetComponent::StaticClass,
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
	IMPLEMENT_CLASS(UWidgetComponent, 2607250714);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetComponent(Z_Construct_UClass_UWidgetComponent, &UWidgetComponent::StaticClass, TEXT("/Script/UMG"), TEXT("UWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
