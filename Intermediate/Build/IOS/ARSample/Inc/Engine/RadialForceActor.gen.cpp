// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/RadialForceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadialForceActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ARadialForceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ARadialForceActor();
	ENGINE_API UClass* Z_Construct_UClass_ARigidBodyBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_ARadialForceActor_DisableForce();
	ENGINE_API UFunction* Z_Construct_UFunction_ARadialForceActor_EnableForce();
	ENGINE_API UFunction* Z_Construct_UFunction_ARadialForceActor_FireImpulse();
	ENGINE_API UFunction* Z_Construct_UFunction_ARadialForceActor_ToggleForce();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
// End Cross Module References
	void ARadialForceActor::StaticRegisterNativesARadialForceActor()
	{
		UClass* Class = ARadialForceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableForce", (Native)&ARadialForceActor::execDisableForce },
			{ "EnableForce", (Native)&ARadialForceActor::execEnableForce },
			{ "FireImpulse", (Native)&ARadialForceActor::execFireImpulse },
			{ "ToggleForce", (Native)&ARadialForceActor::execToggleForce },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ARadialForceActor_DisableForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadialForceActor, "DisableForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARadialForceActor_EnableForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadialForceActor, "EnableForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARadialForceActor_FireImpulse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
				{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadialForceActor, "FireImpulse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARadialForceActor_ToggleForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "DeprecatedFunction", "" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARadialForceActor, "ToggleForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARadialForceActor_NoRegister()
	{
		return ARadialForceActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ARadialForceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ARigidBodyBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ARadialForceActor_DisableForce, "DisableForce" }, // 3873858646
				{ &Z_Construct_UFunction_ARadialForceActor_EnableForce, "EnableForce" }, // 2378661275
				{ &Z_Construct_UFunction_ARadialForceActor_FireImpulse, "FireImpulse" }, // 1824779584
				{ &Z_Construct_UFunction_ARadialForceActor_ToggleForce, "ToggleForce" }, // 1235407762
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Input" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "PhysicsEngine/RadialForceActor.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpriteComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000800080008, 1, nullptr, STRUCT_OFFSET(ARadialForceActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(NewProp_SpriteComponent_MetaData, ARRAY_COUNT(NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "RadialForceActor" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Activation,Components|Activation,Physics,Physics|Components|RadialForce" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/RadialForceActor.h" },
				{ "ToolTip", "Force component" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ForceComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ARadialForceActor, ForceComponent), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(NewProp_ForceComponent_MetaData, ARRAY_COUNT(NewProp_ForceComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForceComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARadialForceActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARadialForceActor::StaticClass,
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
	IMPLEMENT_CLASS(ARadialForceActor, 3298939675);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARadialForceActor(Z_Construct_UClass_ARadialForceActor, &ARadialForceActor::StaticClass, TEXT("/Script/Engine"), TEXT("ARadialForceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadialForceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
