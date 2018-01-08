// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Components/ChildActorComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChildActorComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UChildActorComponent_SetChildActorClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UChildActorComponent::StaticRegisterNativesUChildActorComponent()
	{
		UClass* Class = UChildActorComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetChildActorClass", (Native)&UChildActorComponent::execSetChildActorClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UChildActorComponent_SetChildActorClass()
	{
		struct ChildActorComponent_eventSetChildActorClass_Parms
		{
			TSubclassOf<AActor>  InClass;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass = { UE4CodeGen_Private::EPropertyClass::Class, "InClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(ChildActorComponent_eventSetChildActorClass_Parms, InClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ChildActorComponent" },
				{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UChildActorComponent, "SetChildActorClass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ChildActorComponent_eventSetChildActorClass_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UChildActorComponent_NoRegister()
	{
		return UChildActorComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UChildActorComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UChildActorComponent_SetChildActorClass, "SetChildActorClass" }, // 2440744667
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Utility" },
				{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Trigger PhysicsVolume" },
				{ "IncludePath", "Components/ChildActorComponent.h" },
				{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
				{ "ToolTip", "A component that spawns an Actor when registered, and destroys it when unregistered." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActorTemplate_MetaData[] = {
				{ "Category", "ChildActorComponent" },
				{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
				{ "ShowInnerProperties", "" },
				{ "ToolTip", "Property to point to the template child actor for details panel purposes" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildActorTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "ChildActorTemplate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000230001, 1, nullptr, STRUCT_OFFSET(UChildActorComponent, ChildActorTemplate), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ChildActorTemplate_MetaData, ARRAY_COUNT(NewProp_ChildActorTemplate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActor_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "ChildActorComponent" },
				{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
				{ "ToolTip", "The actor that we spawned and own" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildActor = { UE4CodeGen_Private::EPropertyClass::Object, "ChildActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040c00000000034, 1, nullptr, STRUCT_OFFSET(UChildActorComponent, ChildActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(NewProp_ChildActor_MetaData, ARRAY_COUNT(NewProp_ChildActor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActorClass_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "ChildActorComponent" },
				{ "ForceRebuildProperty", "ChildActorTemplate" },
				{ "ModuleRelativePath", "Classes/Components/ChildActorComponent.h" },
				{ "OnlyPlaceable", "" },
				{ "ToolTip", "The class of Actor to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ChildActorClass = { UE4CodeGen_Private::EPropertyClass::Class, "ChildActorClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0044000000000015, 1, nullptr, STRUCT_OFFSET(UChildActorComponent, ChildActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ChildActorClass_MetaData, ARRAY_COUNT(NewProp_ChildActorClass_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildActorTemplate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildActor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChildActorClass,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UChildActorComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UChildActorComponent::StaticClass,
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
	IMPLEMENT_CLASS(UChildActorComponent, 3433040085);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UChildActorComponent(Z_Construct_UClass_UChildActorComponent, &UChildActorComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UChildActorComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChildActorComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
