// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/PlatformEventsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformEventsComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformEventsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPlatformEventsComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode();
	ENGINE_API UFunction* Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, "PlatformEventDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UPlatformEventsComponent::StaticRegisterNativesUPlatformEventsComponent()
	{
		UClass* Class = UPlatformEventsComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsInLaptopMode", (Native)&UPlatformEventsComponent::execIsInLaptopMode },
			{ "IsInTabletMode", (Native)&UPlatformEventsComponent::execIsInTabletMode },
			{ "SupportsConvertibleLaptops", (Native)&UPlatformEventsComponent::execSupportsConvertibleLaptops },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode()
	{
		struct PlatformEventsComponent_eventIsInLaptopMode_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PlatformEventsComponent_eventIsInLaptopMode_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlatformEventsComponent_eventIsInLaptopMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Activation" },
				{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
				{ "ToolTip", "Check whether a convertible laptop is laptop mode.\n\n@return true if in laptop mode, false otherwise or if not a convertible laptop.\n@see IsInTabletMode, SupportsConvertibleLaptops" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, "IsInLaptopMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlatformEventsComponent_eventIsInLaptopMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode()
	{
		struct PlatformEventsComponent_eventIsInTabletMode_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PlatformEventsComponent_eventIsInTabletMode_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlatformEventsComponent_eventIsInTabletMode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Activation" },
				{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
				{ "ToolTip", "Check whether a convertible laptop is laptop mode.\n\n@return true if in tablet mode, false otherwise or if not a convertible laptop.\n@see IsInLaptopMode, SupportsConvertibleLaptops" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, "IsInTabletMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlatformEventsComponent_eventIsInTabletMode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops()
	{
		struct PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|Activation" },
				{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
				{ "ToolTip", "Check whether the platform supports convertible laptops.\n\nNote: This does not necessarily mean that the platform is a convertible laptop.\nFor example, convertible laptops running Windows 7 or older will return false,\nand regular laptops running Windows 8 or newer will return true.\n\n@return true for convertible laptop platforms, false otherwise.\n@see IsInLaptopMode, IsInTabletMode" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlatformEventsComponent, "SupportsConvertibleLaptops", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PlatformEventsComponent_eventSupportsConvertibleLaptops_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlatformEventsComponent_NoRegister()
	{
		return UPlatformEventsComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPlatformEventsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPlatformEventsComponent_IsInLaptopMode, "IsInLaptopMode" }, // 2883586137
				{ &Z_Construct_UFunction_UPlatformEventsComponent_IsInTabletMode, "IsInTabletMode" }, // 3115884144
				{ &Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature, "PlatformEventDelegate__DelegateSignature" }, // 3915031405
				{ &Z_Construct_UFunction_UPlatformEventsComponent_SupportsConvertibleLaptops, "SupportsConvertibleLaptops" }, // 1450367711
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Utility" },
				{ "HideCategories", "Activation Components|Activation Collision" },
				{ "IncludePath", "Components/PlatformEventsComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
				{ "ToolTip", "Component to handle receiving notifications from the OS about platform events." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformChangedToTabletModeDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
				{ "ToolTip", "This is called when a convertible laptop changed into tablet mode." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlatformChangedToTabletModeDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "PlatformChangedToTabletModeDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformEventsComponent, PlatformChangedToTabletModeDelegate), Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature, METADATA_PARAMS(NewProp_PlatformChangedToTabletModeDelegate_MetaData, ARRAY_COUNT(NewProp_PlatformChangedToTabletModeDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlatformChangedToLaptopModeDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/PlatformEventsComponent.h" },
				{ "ToolTip", "This is called when a convertible laptop changed into laptop mode." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlatformChangedToLaptopModeDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "PlatformChangedToLaptopModeDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UPlatformEventsComponent, PlatformChangedToLaptopModeDelegate), Z_Construct_UDelegateFunction_UPlatformEventsComponent_PlatformEventDelegate__DelegateSignature, METADATA_PARAMS(NewProp_PlatformChangedToLaptopModeDelegate_MetaData, ARRAY_COUNT(NewProp_PlatformChangedToLaptopModeDelegate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlatformChangedToTabletModeDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlatformChangedToLaptopModeDelegate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPlatformEventsComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPlatformEventsComponent::StaticClass,
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
	IMPLEMENT_CLASS(UPlatformEventsComponent, 778558581);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlatformEventsComponent(Z_Construct_UClass_UPlatformEventsComponent, &UPlatformEventsComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPlatformEventsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformEventsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
