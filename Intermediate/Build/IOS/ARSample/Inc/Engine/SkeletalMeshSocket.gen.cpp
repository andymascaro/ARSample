// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Engine/SkeletalMeshSocket.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSocket() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void USkeletalMeshSocket::StaticRegisterNativesUSkeletalMeshSocket()
	{
		UClass* Class = USkeletalMeshSocket::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSocketLocation", (Native)&USkeletalMeshSocket::execGetSocketLocation },
			{ "InitializeSocketFromLocation", (Native)&USkeletalMeshSocket::execInitializeSocketFromLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation()
	{
		struct SkeletalMeshSocket_eventGetSocketLocation_Parms
		{
			const USkeletalMeshComponent* SkelComp;
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventGetSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkelComp = { UE4CodeGen_Private::EPropertyClass::Object, "SkelComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080082, 1, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventGetSocketLocation_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SkelComp_MetaData, ARRAY_COUNT(NewProp_SkelComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshSocket, "GetSocketLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820403, sizeof(SkeletalMeshSocket_eventGetSocketLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation()
	{
		struct SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms
		{
			const USkeletalMeshComponent* SkelComp;
			FVector WorldLocation;
			FVector WorldNormal;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, WorldNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkelComp = { UE4CodeGen_Private::EPropertyClass::Object, "SkelComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080082, 1, nullptr, STRUCT_OFFSET(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms, SkelComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(NewProp_SkelComp_MetaData, ARRAY_COUNT(NewProp_SkelComp_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SkelComp,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|SkeletalMesh" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
				{ "ToolTip", "Sets BoneName, RelativeLocation and RelativeRotation based on closest bone to WorldLocation and WorldNormal" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMeshSocket, "InitializeSocketFromLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820403, sizeof(SkeletalMeshSocket_eventInitializeSocketFromLocation_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister()
	{
		return USkeletalMeshSocket::StaticClass();
	}
	UClass* Z_Construct_UClass_USkeletalMeshSocket()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_USkeletalMeshSocket_GetSocketLocation, "GetSocketLocation" }, // 372729086
				{ &Z_Construct_UFunction_USkeletalMeshSocket_InitializeSocketFromLocation, "InitializeSocketFromLocation" }, // 1527801032
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Actor" },
				{ "IncludePath", "Engine/SkeletalMeshSocket.h" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceAlwaysAnimated_MetaData[] = {
				{ "Category", "Socket Parameters" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
				{ "ToolTip", "If true then the hierarchy of bones this socket is attached to will always be\n          evaluated, even if it had previously been removed due to the current lod setting" },
			};
#endif
			auto NewProp_bForceAlwaysAnimated_SetBit = [](void* Obj){ ((USkeletalMeshSocket*)Obj)->bForceAlwaysAnimated = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceAlwaysAnimated = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceAlwaysAnimated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(USkeletalMeshSocket), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForceAlwaysAnimated_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bForceAlwaysAnimated_MetaData, ARRAY_COUNT(NewProp_bForceAlwaysAnimated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeScale_MetaData[] = {
				{ "Category", "Socket Parameters" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeScale = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeScale", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, RelativeScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RelativeScale_MetaData, ARRAY_COUNT(NewProp_RelativeScale_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[] = {
				{ "Category", "Socket Parameters" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeRotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_RelativeRotation_MetaData, ARRAY_COUNT(NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelativeLocation_MetaData[] = {
				{ "Category", "Socket Parameters" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RelativeLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "RelativeLocation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000015, 1, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, RelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_RelativeLocation_MetaData, ARRAY_COUNT(NewProp_RelativeLocation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
				{ "Category", "Socket Parameters" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName = { UE4CodeGen_Private::EPropertyClass::Name, "BoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, BoneName), METADATA_PARAMS(NewProp_BoneName_MetaData, ARRAY_COUNT(NewProp_BoneName_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
				{ "Category", "Socket Parameters" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSocket.h" },
				{ "ToolTip", "Defines a named attachment location on the USkeletalMesh.\nThese are set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent.\nThe Outer of a SkeletalMeshSocket should always be the USkeletalMesh." },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SocketName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(USkeletalMeshSocket, SocketName), METADATA_PARAMS(NewProp_SocketName_MetaData, ARRAY_COUNT(NewProp_SocketName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForceAlwaysAnimated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeScale,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeRotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RelativeLocation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SocketName,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USkeletalMeshSocket>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USkeletalMeshSocket::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
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
	IMPLEMENT_CLASS(USkeletalMeshSocket, 649356905);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMeshSocket(Z_Construct_UClass_USkeletalMeshSocket, &USkeletalMeshSocket::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalMeshSocket"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshSocket);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
