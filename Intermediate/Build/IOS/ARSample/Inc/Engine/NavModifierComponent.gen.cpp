// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/AI/Navigation/NavModifierComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavModifierComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavModifierComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UNavModifierComponent_SetAreaClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UNavModifierComponent::StaticRegisterNativesUNavModifierComponent()
	{
		UClass* Class = UNavModifierComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAreaClass", (Native)&UNavModifierComponent::execSetAreaClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UNavModifierComponent_SetAreaClass()
	{
		struct NavModifierComponent_eventSetAreaClass_Parms
		{
			TSubclassOf<UNavArea>  NewAreaClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewAreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "NewAreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(NavModifierComponent_eventSetAreaClass_Parms, NewAreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewAreaClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "AI|Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavModifierComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavModifierComponent, "SetAreaClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(NavModifierComponent_eventSetAreaClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavModifierComponent_NoRegister()
	{
		return UNavModifierComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UNavModifierComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavRelevantComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UNavModifierComponent_SetAreaClass, "SetAreaClass" }, // 2956775687
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Navigation" },
				{ "HideCategories", "Activation" },
				{ "IncludePath", "AI/Navigation/NavModifierComponent.h" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavModifierComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailsafeExtent_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavModifierComponent.h" },
				{ "ToolTip", "box extent used ONLY when owning actor doesn't have collision component" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_FailsafeExtent = { UE4CodeGen_Private::EPropertyClass::Struct, "FailsafeExtent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UNavModifierComponent, FailsafeExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_FailsafeExtent_MetaData, ARRAY_COUNT(NewProp_FailsafeExtent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[] = {
				{ "Category", "Navigation" },
				{ "ModuleRelativePath", "Classes/AI/Navigation/NavModifierComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaClass = { UE4CodeGen_Private::EPropertyClass::Class, "AreaClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000015, 1, nullptr, STRUCT_OFFSET(UNavModifierComponent, AreaClass), Z_Construct_UClass_UNavArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_AreaClass_MetaData, ARRAY_COUNT(NewProp_AreaClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FailsafeExtent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AreaClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UNavModifierComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UNavModifierComponent::StaticClass,
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
	IMPLEMENT_CLASS(UNavModifierComponent, 1237743377);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavModifierComponent(Z_Construct_UClass_UNavModifierComponent, &UNavModifierComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UNavModifierComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavModifierComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
