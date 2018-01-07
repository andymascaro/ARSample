// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/ApplicationLifecycleComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApplicationLifecycleComponent() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent();
	ENGINE_API UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UApplicationLifecycleComponent, "ApplicationLifetimeDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UApplicationLifecycleComponent::StaticRegisterNativesUApplicationLifecycleComponent()
	{
	}
	UClass* Z_Construct_UClass_UApplicationLifecycleComponent_NoRegister()
	{
		return UApplicationLifecycleComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UApplicationLifecycleComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_EDITOR
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, "ApplicationLifetimeDelegate__DelegateSignature" }, // 2001324391
			};
#endif //WITH_EDITOR
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Utility" },
				{ "HideCategories", "Activation Components|Activation Collision" },
				{ "IncludePath", "Components/ApplicationLifecycleComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
				{ "ToolTip", "Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc)." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillTerminateDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
				{ "ToolTip", "This *may* be called when the application is getting terminated by the OS.\nThere is no guarantee that this will ever be called on a mobile device,\nsave state when ApplicationWillEnterBackgroundDelegate is called instead." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillTerminateDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillTerminateDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillTerminateDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationWillTerminateDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationWillTerminateDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasEnteredForegroundDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
				{ "ToolTip", "Called when the application is returning to the foreground (reverse any processing done in the EnterBackground delegate)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasEnteredForegroundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationHasEnteredForegroundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationHasEnteredForegroundDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationHasEnteredForegroundDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationHasEnteredForegroundDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillEnterBackgroundDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
				{ "ToolTip", "This is called when the application is being backgrounded (e.g., due to switching\nto another app or closing it via the home button)\nThe game should release shared resources, save state, etc..., since it can be\nterminated from the background state without any further warning." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillEnterBackgroundDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillEnterBackgroundDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillEnterBackgroundDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationWillEnterBackgroundDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationWillEnterBackgroundDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationHasReactivatedDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
				{ "ToolTip", "Called when the application has been reactivated (reverse any processing done in the Deactivate delegate)" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationHasReactivatedDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationHasReactivatedDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationHasReactivatedDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationHasReactivatedDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationHasReactivatedDelegate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApplicationWillDeactivateDelegate_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Components/ApplicationLifecycleComponent.h" },
				{ "ToolTip", "This is called when the application is about to be deactivated (e.g., due to a phone call or SMS or the sleep button).\nThe game should be paused if possible, etc..." },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ApplicationWillDeactivateDelegate = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "ApplicationWillDeactivateDelegate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UApplicationLifecycleComponent, ApplicationWillDeactivateDelegate), Z_Construct_UDelegateFunction_UApplicationLifecycleComponent_ApplicationLifetimeDelegate__DelegateSignature, METADATA_PARAMS(NewProp_ApplicationWillDeactivateDelegate_MetaData, ARRAY_COUNT(NewProp_ApplicationWillDeactivateDelegate_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationWillTerminateDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationHasEnteredForegroundDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationWillEnterBackgroundDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationHasReactivatedDelegate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ApplicationWillDeactivateDelegate,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UApplicationLifecycleComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UApplicationLifecycleComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				IF_WITH_EDITOR(FuncInfo, nullptr), IF_WITH_EDITOR(ARRAY_COUNT(FuncInfo), 0),
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
	IMPLEMENT_CLASS(UApplicationLifecycleComponent, 3827369918);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UApplicationLifecycleComponent(Z_Construct_UClass_UApplicationLifecycleComponent, &UApplicationLifecycleComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UApplicationLifecycleComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApplicationLifecycleComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
