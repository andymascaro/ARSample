// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GeometryCacheActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheActor() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_AGeometryCacheActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UFunction* Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
// End Cross Module References
	void AGeometryCacheActor::StaticRegisterNativesAGeometryCacheActor()
	{
		UClass* Class = AGeometryCacheActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGeometryCacheComponent", (Native)&AGeometryCacheActor::execGetGeometryCacheComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent()
	{
		struct GeometryCacheActor_eventGetGeometryCacheComponent_Parms
		{
			UGeometryCacheComponent* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080588, 1, nullptr, STRUCT_OFFSET(GeometryCacheActor_eventGetGeometryCacheComponent_Parms, ReturnValue), Z_Construct_UClass_UGeometryCacheComponent_NoRegister, METADATA_PARAMS(NewProp_ReturnValue_MetaData, ARRAY_COUNT(NewProp_ReturnValue_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
				{ "ToolTip", "Returns GeometryCacheComponent subobject *" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryCacheActor, "GetGeometryCacheComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(GeometryCacheActor_eventGetGeometryCacheComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister()
	{
		return AGeometryCacheActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AGeometryCacheActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent, "GetGeometryCacheComponent" }, // 836377911
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "GeometryCacheActor.h" },
				{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
				{ "ToolTip", "GeometryCache actor, serves as a place-able actor for GeometryCache objects" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "GeometryCacheActor" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|GeometryCache" },
				{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCacheComponent = { UE4CodeGen_Private::EPropertyClass::Object, "GeometryCacheComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AGeometryCacheActor, GeometryCacheComponent), Z_Construct_UClass_UGeometryCacheComponent_NoRegister, METADATA_PARAMS(NewProp_GeometryCacheComponent_MetaData, ARRAY_COUNT(NewProp_GeometryCacheComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GeometryCacheComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGeometryCacheActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGeometryCacheActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(AGeometryCacheActor, 469789973);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryCacheActor(Z_Construct_UClass_AGeometryCacheActor, &AGeometryCacheActor::StaticClass, TEXT("/Script/GeometryCache"), TEXT("AGeometryCacheActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCacheActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
