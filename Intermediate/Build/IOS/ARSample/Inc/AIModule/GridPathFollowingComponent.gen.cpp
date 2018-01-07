// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Navigation/GridPathFollowingComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPathFollowingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UGridPathFollowingComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UGridPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UNavLocalGridManager_NoRegister();
// End Cross Module References
	void UGridPathFollowingComponent::StaticRegisterNativesUGridPathFollowingComponent()
	{
	}
	UClass* Z_Construct_UClass_UGridPathFollowingComponent_NoRegister()
	{
		return UGridPathFollowingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UGridPathFollowingComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UPathFollowingComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DevelopmentStatus", "Experimental" },
				{ "IncludePath", "Navigation/GridPathFollowingComponent.h" },
				{ "ModuleRelativePath", "Classes/Navigation/GridPathFollowingComponent.h" },
				{ "ToolTip", "Path following augmented with local navigation grids\n\nKeeps track of nearby grids and use them instead of navigation path when agent is inside.\nOnce outside grid, regular path following is resumed.\n\nThis allows creating dynamic navigation obstacles with fully static navigation (e.g. static navmesh),\nas long as they are minor modifications for path. Not recommended for blocking off entire corridors.\n\nDoes not replace proper avoidance for dynamic obstacles!" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridManager_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Navigation/GridPathFollowingComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GridManager = { UE4CodeGen_Private::EPropertyClass::Object, "GridManager", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000002000, 1, nullptr, STRUCT_OFFSET(UGridPathFollowingComponent, GridManager), Z_Construct_UClass_UNavLocalGridManager_NoRegister, METADATA_PARAMS(NewProp_GridManager_MetaData, ARRAY_COUNT(NewProp_GridManager_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GridManager,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UGridPathFollowingComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UGridPathFollowingComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UGridPathFollowingComponent, 1120148673);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGridPathFollowingComponent(Z_Construct_UClass_UGridPathFollowingComponent, &UGridPathFollowingComponent::StaticClass, TEXT("/Script/AIModule"), TEXT("UGridPathFollowingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridPathFollowingComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
