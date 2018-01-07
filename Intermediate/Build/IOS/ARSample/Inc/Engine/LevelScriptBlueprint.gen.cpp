// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/LevelScriptBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelScriptBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelScriptBlueprint::StaticRegisterNativesULevelScriptBlueprint()
	{
	}
	UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister()
	{
		return ULevelScriptBlueprint::StaticClass();
	}
	UClass* Z_Construct_UClass_ULevelScriptBlueprint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprint,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Engine/LevelScriptBlueprint.h" },
				{ "ModuleRelativePath", "Classes/Engine/LevelScriptBlueprint.h" },
				{ "NotBlueprintType", "true" },
				{ "ToolTip", "A level blueprint is a specialized type of blueprint. It is used to house\nglobal, level-wide logic. In a level blueprint, you can operate on specific\nlevel-actor instances through blueprint's node-based interface. UE3 users\nshould be familiar with this concept, as it is very similar to Kismet.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n@see UBlueprint\n@see ALevelScriptActor" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Engine/LevelScriptBlueprint.h" },
				{ "ToolTip", "The friendly name to use for UI" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FriendlyName = { UE4CodeGen_Private::EPropertyClass::Str, "FriendlyName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800002000, 1, nullptr, STRUCT_OFFSET(ULevelScriptBlueprint, FriendlyName), METADATA_PARAMS(NewProp_FriendlyName_MetaData, ARRAY_COUNT(NewProp_FriendlyName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FriendlyName,
			};
#endif // WITH_EDITORONLY_DATA
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULevelScriptBlueprint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULevelScriptBlueprint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880084u,
				nullptr, 0,
				IF_WITH_EDITORONLY_DATA(PropPointers, nullptr), IF_WITH_EDITORONLY_DATA(ARRAY_COUNT(PropPointers), 0),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelScriptBlueprint, 4019444380);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelScriptBlueprint(Z_Construct_UClass_ULevelScriptBlueprint, &ULevelScriptBlueprint::StaticClass, TEXT("/Script/Engine"), TEXT("ULevelScriptBlueprint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelScriptBlueprint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
