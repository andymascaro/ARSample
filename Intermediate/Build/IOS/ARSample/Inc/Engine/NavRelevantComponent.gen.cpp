// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavRelevantComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavRelevantComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
// End Cross Module References
	void UNavRelevantComponent::StaticRegisterNativesUNavRelevantComponent()
	{
		UClass* Class = UNavRelevantComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetNavigationRelevancy", (Native)&UNavRelevantComponent::execSetNavigationRelevancy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy()
	{
		struct NavRelevantComponent_eventSetNavigationRelevancy_Parms
		{
			bool bRelevant;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bRelevant_SetBit = [](void* Obj){ ((NavRelevantComponent_eventSetNavigationRelevancy_Parms*)Obj)->bRelevant = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRelevant = { UE4CodeGen_Private::EPropertyClass::Bool, "bRelevant", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(NavRelevantComponent_eventSetNavigationRelevancy_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRelevant_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRelevant,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavRelevantComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavRelevantComponent, "SetNavigationRelevancy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavRelevantComponent_eventSetNavigationRelevancy_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavRelevantComponent_NoRegister()
	{
		return UNavRelevantComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavRelevantComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UNavRelevantComponent_SetNavigationRelevancy, "SetNavigationRelevancy" }, // 2690421982
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "AI/Navigation/NavRelevantComponent.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavRelevantComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedNavParent_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavRelevantComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CachedNavParent = { UE4CodeGen_Private::EPropertyClass::Object, "CachedNavParent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UNavRelevantComponent, CachedNavParent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_CachedNavParent_MetaData, ARRAY_COUNT(NewProp_CachedNavParent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAttachToOwnersRoot_MetaData[] = {
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavRelevantComponent.h" },
				{ "ToolTip", "attach navigation data to entry for owner's root component (depends on its relevancy)" },
			};
#endif
			auto NewProp_bAttachToOwnersRoot_SetBit = [](void* Obj){ ((UNavRelevantComponent*)Obj)->bAttachToOwnersRoot = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAttachToOwnersRoot = { UE4CodeGen_Private::EPropertyClass::Bool, "bAttachToOwnersRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UNavRelevantComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAttachToOwnersRoot_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAttachToOwnersRoot_MetaData, ARRAY_COUNT(NewProp_bAttachToOwnersRoot_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedNavParent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAttachToOwnersRoot,
			};
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(UNavRelevantComponent, INavRelevantInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavRelevantComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavRelevantComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavRelevantComponent, 1443577847);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavRelevantComponent(Z_Construct_UClass_UNavRelevantComponent, &UNavRelevantComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavRelevantComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavRelevantComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
