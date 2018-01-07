// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationBoneSocket() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSource();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLocationBoneSocketInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	static UEnum* ELocationBoneSocketSelectionMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod, Z_Construct_UPackage__Script_Engine(), TEXT("ELocationBoneSocketSelectionMethod"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationBoneSocketSelectionMethod(ELocationBoneSocketSelectionMethod_StaticEnum, TEXT("/Script/Engine"), TEXT("ELocationBoneSocketSelectionMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_CRC() { return 2841788366U; }
	UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationBoneSocketSelectionMethod"), 0, Get_Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BONESOCKETSEL_Sequential", (int64)BONESOCKETSEL_Sequential },
				{ "BONESOCKETSEL_Random", (int64)BONESOCKETSEL_Random },
				{ "BONESOCKETSEL_MAX", (int64)BONESOCKETSEL_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELocationBoneSocketSelectionMethod",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELocationBoneSocketSelectionMethod",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELocationBoneSocketSource_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELocationBoneSocketSource, Z_Construct_UPackage__Script_Engine(), TEXT("ELocationBoneSocketSource"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELocationBoneSocketSource(ELocationBoneSocketSource_StaticEnum, TEXT("/Script/Engine"), TEXT("ELocationBoneSocketSource"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ELocationBoneSocketSource_CRC() { return 1953091163U; }
	UEnum* Z_Construct_UEnum_Engine_ELocationBoneSocketSource()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELocationBoneSocketSource"), 0, Get_Z_Construct_UEnum_Engine_ELocationBoneSocketSource_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BONESOCKETSOURCE_Bones", (int64)BONESOCKETSOURCE_Bones },
				{ "BONESOCKETSOURCE_Sockets", (int64)BONESOCKETSOURCE_Sockets },
				{ "BONESOCKETSOURCE_MAX", (int64)BONESOCKETSOURCE_MAX },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ELocationBoneSocketSource",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"ELocationBoneSocketSource",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLocationBoneSocketInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLocationBoneSocketInfo, Z_Construct_UPackage__Script_Engine(), TEXT("LocationBoneSocketInfo"), sizeof(FLocationBoneSocketInfo), Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLocationBoneSocketInfo(FLocationBoneSocketInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("LocationBoneSocketInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLocationBoneSocketInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFLocationBoneSocketInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LocationBoneSocketInfo")),new UScriptStruct::TCppStructOps<FLocationBoneSocketInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLocationBoneSocketInfo;
	UScriptStruct* Z_Construct_UScriptStruct_FLocationBoneSocketInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LocationBoneSocketInfo"), sizeof(FLocationBoneSocketInfo), Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLocationBoneSocketInfo>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
				{ "Category", "LocationBoneSocketInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "The offset from the bone/socket to use" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset = { UE4CodeGen_Private::EPropertyClass::Struct, "Offset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLocationBoneSocketInfo, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Offset_MetaData, ARRAY_COUNT(NewProp_Offset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneSocketName_MetaData[] = {
				{ "Category", "LocationBoneSocketInfo" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "The name of the bone/socket on the skeletal mesh" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneSocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FLocationBoneSocketInfo, BoneSocketName), METADATA_PARAMS(NewProp_BoneSocketName_MetaData, ARRAY_COUNT(NewProp_BoneSocketName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Offset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneSocketName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"LocationBoneSocketInfo",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FLocationBoneSocketInfo),
				alignof(FLocationBoneSocketInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLocationBoneSocketInfo_CRC() { return 1721341762U; }
	void UParticleModuleLocationBoneSocket::StaticRegisterNativesUParticleModuleLocationBoneSocket()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket_NoRegister()
	{
		return UParticleModuleLocationBoneSocket::StaticClass();
	}
	UClass* Z_Construct_UClass_UParticleModuleLocationBoneSocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "DisplayName", "Bone/Socket Location" },
				{ "HideCategories", "Object Object Object" },
				{ "IncludePath", "Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
			};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorSkelMesh_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "The name of the skeletal mesh to use in the editor" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorSkelMesh = { UE4CodeGen_Private::EPropertyClass::Object, "EditorSkelMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000800000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, EditorSkelMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(NewProp_EditorSkelMesh_MetaData, ARRAY_COUNT(NewProp_EditorSkelMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPreSelectedIndices_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "When we have no source locations and we need to track bone velocities due to bInheritBoneVelocity, we pre select a set of bones to use each frame. This property determines how big the list is.\nToo low and the randomness of selection may suffer, too high and memory will be wasted." },
				{ "UIMin", "1" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPreSelectedIndices = { UE4CodeGen_Private::EPropertyClass::Int, "NumPreSelectedIndices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, NumPreSelectedIndices), METADATA_PARAMS(NewProp_NumPreSelectedIndices_MetaData, ARRAY_COUNT(NewProp_NumPreSelectedIndices_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMeshActorParamName_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "The parameter name of the skeletal mesh actor that supplies the SkelMeshComponent for in-game." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SkelMeshActorParamName = { UE4CodeGen_Private::EPropertyClass::Name, "SkelMeshActorParamName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SkelMeshActorParamName), METADATA_PARAMS(NewProp_SkelMeshActorParamName_MetaData, ARRAY_COUNT(NewProp_SkelMeshActorParamName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InheritVelocityScale_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "A scale on how much of the bone's velocity a particle will inherit." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InheritVelocityScale = { UE4CodeGen_Private::EPropertyClass::Float, "InheritVelocityScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, InheritVelocityScale), METADATA_PARAMS(NewProp_InheritVelocityScale_MetaData, ARRAY_COUNT(NewProp_InheritVelocityScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInheritBoneVelocity_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "If true, particles inherit the associated bone velocity when spawned" },
			};
#endif
			auto NewProp_bInheritBoneVelocity_SetBit = [](void* Obj){ ((UParticleModuleLocationBoneSocket*)Obj)->bInheritBoneVelocity = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInheritBoneVelocity = { UE4CodeGen_Private::EPropertyClass::Bool, "bInheritBoneVelocity", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationBoneSocket), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bInheritBoneVelocity_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bInheritBoneVelocity_MetaData, ARRAY_COUNT(NewProp_bInheritBoneVelocity_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOrientMeshEmitters_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "If true, rotate mesh emitter meshes to orient w/ the socket" },
			};
#endif
			auto NewProp_bOrientMeshEmitters_SetBit = [](void* Obj){ ((UParticleModuleLocationBoneSocket*)Obj)->bOrientMeshEmitters = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOrientMeshEmitters = { UE4CodeGen_Private::EPropertyClass::Bool, "bOrientMeshEmitters", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationBoneSocket), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bOrientMeshEmitters_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bOrientMeshEmitters_MetaData, ARRAY_COUNT(NewProp_bOrientMeshEmitters_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdatePositionEachFrame_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "If true, update the particle locations each frame with that of the bone/socket" },
			};
#endif
			auto NewProp_bUpdatePositionEachFrame_SetBit = [](void* Obj){ ((UParticleModuleLocationBoneSocket*)Obj)->bUpdatePositionEachFrame = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdatePositionEachFrame = { UE4CodeGen_Private::EPropertyClass::Bool, "bUpdatePositionEachFrame", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(UParticleModuleLocationBoneSocket), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bUpdatePositionEachFrame_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bUpdatePositionEachFrame_MetaData, ARRAY_COUNT(NewProp_bUpdatePositionEachFrame_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionMethod_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "The method by which to select the bone/socket to spawn at.\n\nSEL_Sequential                  - loop through the bone/socket array in order\nSEL_Random                              - randomly select a bone/socket from the array" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SelectionMethod = { UE4CodeGen_Private::EPropertyClass::Byte, "SelectionMethod", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SelectionMethod), Z_Construct_UEnum_Engine_ELocationBoneSocketSelectionMethod, METADATA_PARAMS(NewProp_SelectionMethod_MetaData, ARRAY_COUNT(NewProp_SelectionMethod_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLocations_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "The name(s) of the bone/socket(s) to position at. If this is empty, the module will attempt to spawn from all bones or sockets." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SourceLocations = { UE4CodeGen_Private::EPropertyClass::Array, "SourceLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SourceLocations), METADATA_PARAMS(NewProp_SourceLocations_MetaData, ARRAY_COUNT(NewProp_SourceLocations_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceLocations_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceLocations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLocationBoneSocketInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniversalOffset_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "An offset to apply to each bone/socket" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniversalOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "UniversalOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, UniversalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_UniversalOffset_MetaData, ARRAY_COUNT(NewProp_UniversalOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[] = {
				{ "Category", "BoneSocket" },
				{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationBoneSocket.h" },
				{ "ToolTip", "Whether the module uses Bones or Sockets for locations.\n\nBONESOCKETSOURCE_Bones          - Use Bones as the source locations.\nBONESOCKETSOURCE_Sockets        - Use Sockets as the source locations." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType = { UE4CodeGen_Private::EPropertyClass::Byte, "SourceType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UParticleModuleLocationBoneSocket, SourceType), Z_Construct_UEnum_Engine_ELocationBoneSocketSource, METADATA_PARAMS(NewProp_SourceType_MetaData, ARRAY_COUNT(NewProp_SourceType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
#if WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EditorSkelMesh,
#endif // WITH_EDITORONLY_DATA
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NumPreSelectedIndices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelMeshActorParamName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InheritVelocityScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bInheritBoneVelocity,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bOrientMeshEmitters,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bUpdatePositionEachFrame,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectionMethod,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceLocations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceLocations_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UniversalOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SourceType,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UParticleModuleLocationBoneSocket>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UParticleModuleLocationBoneSocket::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00101080u,
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
	IMPLEMENT_CLASS(UParticleModuleLocationBoneSocket, 1213352603);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleLocationBoneSocket(Z_Construct_UClass_UParticleModuleLocationBoneSocket, &UParticleModuleLocationBoneSocket::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleLocationBoneSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationBoneSocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
