// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MeshReconstructorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshReconstructorBase() {}
// Cross Module References
	MRMESH_API UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration();
	UPackage* Z_Construct_UPackage__Script_MRMesh();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister();
	MRMESH_API UClass* Z_Construct_UClass_UMeshReconstructorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh();
	MRMESH_API UClass* Z_Construct_UClass_UMRMeshComponent_NoRegister();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction();
	MRMESH_API UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction();
// End Cross Module References
class UScriptStruct* FMRMeshConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MRMESH_API uint32 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMRMeshConfiguration, Z_Construct_UPackage__Script_MRMesh(), TEXT("MRMeshConfiguration"), sizeof(FMRMeshConfiguration), Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMRMeshConfiguration(FMRMeshConfiguration::StaticStruct, TEXT("/Script/MRMesh"), TEXT("MRMeshConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration
{
	FScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MRMeshConfiguration")),new UScriptStruct::TCppStructOps<FMRMeshConfiguration>);
	}
} ScriptStruct_MRMesh_StaticRegisterNativesFMRMeshConfiguration;
	UScriptStruct* Z_Construct_UScriptStruct_FMRMeshConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MRMesh();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MRMeshConfiguration"), sizeof(FMRMeshConfiguration), Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMRMeshConfiguration>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MRMeshConfiguration",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMRMeshConfiguration),
				alignof(FMRMeshConfiguration),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMRMeshConfiguration_CRC() { return 256248143U; }
	void UMeshReconstructorBase::StaticRegisterNativesUMeshReconstructorBase()
	{
		UClass* Class = UMeshReconstructorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConnectMRMesh", (Native)&UMeshReconstructorBase::execConnectMRMesh },
			{ "DisconnectMRMesh", (Native)&UMeshReconstructorBase::execDisconnectMRMesh },
			{ "IsReconstructionPaused", (Native)&UMeshReconstructorBase::execIsReconstructionPaused },
			{ "IsReconstructionStarted", (Native)&UMeshReconstructorBase::execIsReconstructionStarted },
			{ "PauseReconstruction", (Native)&UMeshReconstructorBase::execPauseReconstruction },
			{ "StartReconstruction", (Native)&UMeshReconstructorBase::execStartReconstruction },
			{ "StopReconstruction", (Native)&UMeshReconstructorBase::execStopReconstruction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh()
	{
		struct MeshReconstructorBase_eventConnectMRMesh_Parms
		{
			UMRMeshComponent* Mesh;
			FMRMeshConfiguration ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MeshReconstructorBase_eventConnectMRMesh_Parms, ReturnValue), Z_Construct_UScriptStruct_FMRMeshConfiguration, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MeshReconstructorBase_eventConnectMRMesh_Parms, Mesh), Z_Construct_UClass_UMRMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "ConnectMRMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(MeshReconstructorBase_eventConnectMRMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "DisconnectMRMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused()
	{
		struct MeshReconstructorBase_eventIsReconstructionPaused_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MeshReconstructorBase_eventIsReconstructionPaused_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshReconstructorBase_eventIsReconstructionPaused_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh Reconstruction" },
				{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "IsReconstructionPaused", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MeshReconstructorBase_eventIsReconstructionPaused_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted()
	{
		struct MeshReconstructorBase_eventIsReconstructionStarted_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MeshReconstructorBase_eventIsReconstructionStarted_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MeshReconstructorBase_eventIsReconstructionStarted_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh Reconstruction" },
				{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "IsReconstructionStarted", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(MeshReconstructorBase_eventIsReconstructionStarted_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh Reconstruction" },
				{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "PauseReconstruction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh Reconstruction" },
				{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "StartReconstruction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Mesh Reconstruction" },
				{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshReconstructorBase, "StopReconstruction", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeshReconstructorBase_NoRegister()
	{
		return UMeshReconstructorBase::StaticClass();
	}
	UClass* Z_Construct_UClass_UMeshReconstructorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_MRMesh,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMeshReconstructorBase_ConnectMRMesh, "ConnectMRMesh" }, // 4244893443
				{ &Z_Construct_UFunction_UMeshReconstructorBase_DisconnectMRMesh, "DisconnectMRMesh" }, // 2266179205
				{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionPaused, "IsReconstructionPaused" }, // 3168910218
				{ &Z_Construct_UFunction_UMeshReconstructorBase_IsReconstructionStarted, "IsReconstructionStarted" }, // 3230669936
				{ &Z_Construct_UFunction_UMeshReconstructorBase_PauseReconstruction, "PauseReconstruction" }, // 335547887
				{ &Z_Construct_UFunction_UMeshReconstructorBase_StartReconstruction, "StartReconstruction" }, // 137971778
				{ &Z_Construct_UFunction_UMeshReconstructorBase_StopReconstruction, "StopReconstruction" }, // 3081726371
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "Experimental", "" },
				{ "IncludePath", "MeshReconstructorBase.h" },
				{ "ModuleRelativePath", "Public/MeshReconstructorBase.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMeshReconstructorBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMeshReconstructorBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeshReconstructorBase, 2435645244);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeshReconstructorBase(Z_Construct_UClass_UMeshReconstructorBase, &UMeshReconstructorBase::StaticClass, TEXT("/Script/MRMesh"), TEXT("UMeshReconstructorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshReconstructorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
