// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Sound/SoundGroups.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundGroups() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESoundGroup();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSoundGroup();
	ENGINE_API UClass* Z_Construct_UClass_USoundGroups_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundGroups();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ESoundGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESoundGroup, Z_Construct_UPackage__Script_Engine(), TEXT("ESoundGroup"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESoundGroup(ESoundGroup_StaticEnum, TEXT("/Script/Engine"), TEXT("ESoundGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESoundGroup_CRC() { return 2997089880U; }
	UEnum* Z_Construct_UEnum_Engine_ESoundGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESoundGroup"), 0, Get_Z_Construct_UEnum_Engine_ESoundGroup_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SOUNDGROUP_Default", (int64)SOUNDGROUP_Default },
				{ "SOUNDGROUP_Effects", (int64)SOUNDGROUP_Effects },
				{ "SOUNDGROUP_UI", (int64)SOUNDGROUP_UI },
				{ "SOUNDGROUP_Music", (int64)SOUNDGROUP_Music },
				{ "SOUNDGROUP_Voice", (int64)SOUNDGROUP_Voice },
				{ "SOUNDGROUP_GameSoundGroup1", (int64)SOUNDGROUP_GameSoundGroup1 },
				{ "SOUNDGROUP_GameSoundGroup2", (int64)SOUNDGROUP_GameSoundGroup2 },
				{ "SOUNDGROUP_GameSoundGroup3", (int64)SOUNDGROUP_GameSoundGroup3 },
				{ "SOUNDGROUP_GameSoundGroup4", (int64)SOUNDGROUP_GameSoundGroup4 },
				{ "SOUNDGROUP_GameSoundGroup5", (int64)SOUNDGROUP_GameSoundGroup5 },
				{ "SOUNDGROUP_GameSoundGroup6", (int64)SOUNDGROUP_GameSoundGroup6 },
				{ "SOUNDGROUP_GameSoundGroup7", (int64)SOUNDGROUP_GameSoundGroup7 },
				{ "SOUNDGROUP_GameSoundGroup8", (int64)SOUNDGROUP_GameSoundGroup8 },
				{ "SOUNDGROUP_GameSoundGroup9", (int64)SOUNDGROUP_GameSoundGroup9 },
				{ "SOUNDGROUP_GameSoundGroup10", (int64)SOUNDGROUP_GameSoundGroup10 },
				{ "SOUNDGROUP_GameSoundGroup11", (int64)SOUNDGROUP_GameSoundGroup11 },
				{ "SOUNDGROUP_GameSoundGroup12", (int64)SOUNDGROUP_GameSoundGroup12 },
				{ "SOUNDGROUP_GameSoundGroup13", (int64)SOUNDGROUP_GameSoundGroup13 },
				{ "SOUNDGROUP_GameSoundGroup14", (int64)SOUNDGROUP_GameSoundGroup14 },
				{ "SOUNDGROUP_GameSoundGroup15", (int64)SOUNDGROUP_GameSoundGroup15 },
				{ "SOUNDGROUP_GameSoundGroup16", (int64)SOUNDGROUP_GameSoundGroup16 },
				{ "SOUNDGROUP_GameSoundGroup17", (int64)SOUNDGROUP_GameSoundGroup17 },
				{ "SOUNDGROUP_GameSoundGroup18", (int64)SOUNDGROUP_GameSoundGroup18 },
				{ "SOUNDGROUP_GameSoundGroup19", (int64)SOUNDGROUP_GameSoundGroup19 },
				{ "SOUNDGROUP_GameSoundGroup20", (int64)SOUNDGROUP_GameSoundGroup20 },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
				{ "SOUNDGROUP_Default.DisplayName", "Default" },
				{ "SOUNDGROUP_Effects.DisplayName", "Effects" },
				{ "SOUNDGROUP_GameSoundGroup1.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup10.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup11.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup12.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup13.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup14.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup15.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup16.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup17.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup18.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup19.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup2.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup20.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup3.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup4.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup5.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup6.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup7.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup8.Hidden", "" },
				{ "SOUNDGROUP_GameSoundGroup9.Hidden", "" },
				{ "SOUNDGROUP_Music.DisplayName", "Music" },
				{ "SOUNDGROUP_UI.DisplayName", "UI" },
				{ "SOUNDGROUP_Voice.DisplayName", "Voice" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ESoundGroup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ESoundGroup",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSoundGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSoundGroup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSoundGroup, Z_Construct_UPackage__Script_Engine(), TEXT("SoundGroup"), sizeof(FSoundGroup), Get_Z_Construct_UScriptStruct_FSoundGroup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSoundGroup(FSoundGroup::StaticStruct, TEXT("/Script/Engine"), TEXT("SoundGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSoundGroup
{
	FScriptStruct_Engine_StaticRegisterNativesFSoundGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SoundGroup")),new UScriptStruct::TCppStructOps<FSoundGroup>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSoundGroup;
	UScriptStruct* Z_Construct_UScriptStruct_FSoundGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSoundGroup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SoundGroup"), sizeof(FSoundGroup), Get_Z_Construct_UScriptStruct_FSoundGroup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSoundGroup>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecompressedDuration_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
				{ "ToolTip", "Sound duration in seconds below which sounds are entirely expanded to PCM at load time\nDisregarded if bAlwaysDecompressOnLoad is true" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecompressedDuration = { UE4CodeGen_Private::EPropertyClass::Float, "DecompressedDuration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(FSoundGroup, DecompressedDuration), METADATA_PARAMS(NewProp_DecompressedDuration_MetaData, ARRAY_COUNT(NewProp_DecompressedDuration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysDecompressOnLoad_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
				{ "ToolTip", "Whether sounds in this group should always decompress on load" },
			};
#endif
			auto NewProp_bAlwaysDecompressOnLoad_SetBit = [](void* Obj){ ((FSoundGroup*)Obj)->bAlwaysDecompressOnLoad = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysDecompressOnLoad = { UE4CodeGen_Private::EPropertyClass::Bool, "bAlwaysDecompressOnLoad", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FSoundGroup), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bAlwaysDecompressOnLoad_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bAlwaysDecompressOnLoad_MetaData, ARRAY_COUNT(NewProp_bAlwaysDecompressOnLoad_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
				{ "ToolTip", "An override display name for custom game sound groups" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName = { UE4CodeGen_Private::EPropertyClass::Str, "DisplayName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(FSoundGroup, DisplayName), METADATA_PARAMS(NewProp_DisplayName_MetaData, ARRAY_COUNT(NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGroup_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
				{ "ToolTip", "The sound group enumeration we are setting values for" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SoundGroup = { UE4CodeGen_Private::EPropertyClass::Byte, "SoundGroup", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004000, 1, nullptr, STRUCT_OFFSET(FSoundGroup, SoundGroup), Z_Construct_UEnum_Engine_ESoundGroup, METADATA_PARAMS(NewProp_SoundGroup_MetaData, ARRAY_COUNT(NewProp_SoundGroup_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DecompressedDuration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bAlwaysDecompressOnLoad,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DisplayName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundGroup,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"SoundGroup",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FSoundGroup),
				alignof(FSoundGroup),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSoundGroup_CRC() { return 621521820U; }
	void USoundGroups::StaticRegisterNativesUSoundGroups()
	{
	}
	UClass* Z_Construct_UClass_USoundGroups_NoRegister()
	{
		return USoundGroups::StaticClass();
	}
	UClass* Z_Construct_UClass_USoundGroups()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Sound/SoundGroups.h" },
				{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
				{ "ToolTip", "This class is a singleton initialized from the ini" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundGroupProfiles_MetaData[] = {
				{ "ModuleRelativePath", "Classes/Sound/SoundGroups.h" },
				{ "ToolTip", "The ini editable array of profiles" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundGroupProfiles = { UE4CodeGen_Private::EPropertyClass::Array, "SoundGroupProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000004000, 1, nullptr, STRUCT_OFFSET(USoundGroups, SoundGroupProfiles), METADATA_PARAMS(NewProp_SoundGroupProfiles_MetaData, ARRAY_COUNT(NewProp_SoundGroupProfiles_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SoundGroupProfiles_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SoundGroupProfiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, Z_Construct_UScriptStruct_FSoundGroup, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundGroupProfiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SoundGroupProfiles_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USoundGroups>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USoundGroups::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000085u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundGroups, 2645596421);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundGroups(Z_Construct_UClass_USoundGroups, &USoundGroups::StaticClass, TEXT("/Script/Engine"), TEXT("USoundGroups"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundGroups);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
