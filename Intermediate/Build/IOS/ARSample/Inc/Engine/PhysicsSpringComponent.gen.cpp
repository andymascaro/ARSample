// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/PhysicsEngine/PhysicsSpringComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSpringComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSpringComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsSpringComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection();
	ENGINE_API UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	void UPhysicsSpringComponent::StaticRegisterNativesUPhysicsSpringComponent()
	{
		UClass* Class = UPhysicsSpringComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNormalizedCompressionScalar", (Native)&UPhysicsSpringComponent::execGetNormalizedCompressionScalar },
			{ "GetSpringCurrentEndPoint", (Native)&UPhysicsSpringComponent::execGetSpringCurrentEndPoint },
			{ "GetSpringDirection", (Native)&UPhysicsSpringComponent::execGetSpringDirection },
			{ "GetSpringRestingPoint", (Native)&UPhysicsSpringComponent::execGetSpringRestingPoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar()
	{
		struct PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Returns the spring compression as a normalized scalar along spring direction.\n0 implies spring is at rest\n1 implies fully compressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, "GetNormalizedCompressionScalar", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PhysicsSpringComponent_eventGetNormalizedCompressionScalar_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint()
	{
		struct PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Returns the spring current end point in world space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, "GetSpringCurrentEndPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PhysicsSpringComponent_eventGetSpringCurrentEndPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection()
	{
		struct PhysicsSpringComponent_eventGetSpringDirection_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsSpringComponent_eventGetSpringDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Returns the spring direction from start to resting point" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, "GetSpringDirection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PhysicsSpringComponent_eventGetSpringDirection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint()
	{
		struct PhysicsSpringComponent_eventGetSpringRestingPoint_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PhysicsSpringComponent_eventGetSpringRestingPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Returns the spring resting point in world space." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsSpringComponent, "GetSpringRestingPoint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PhysicsSpringComponent_eventGetSpringRestingPoint_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPhysicsSpringComponent_NoRegister()
	{
		return UPhysicsSpringComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPhysicsSpringComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetNormalizedCompressionScalar, "GetNormalizedCompressionScalar" }, // 1452254396
				{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringCurrentEndPoint, "GetSpringCurrentEndPoint" }, // 1593179352
				{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringDirection, "GetSpringDirection" }, // 1882745236
				{ &Z_Construct_UFunction_UPhysicsSpringComponent_GetSpringRestingPoint, "GetSpringRestingPoint" }, // 2519383290
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "Physics" },
				{ "HideCategories", "Object Mobility LOD PhysicsVolume" },
				{ "IncludePath", "PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Note: this component is still work in progress. Uses raycast springs for simple vehicle forces\n   Used with objects that have physics to create a spring down the X direction\n   ie. point X in the direction you want generate spring." },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringCompression_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "The current compression of the spring. A spring at rest will have SpringCompression 0." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringCompression = { UE4CodeGen_Private::EPropertyClass::Float, "SpringCompression", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000002014, 1, nullptr, STRUCT_OFFSET(UPhysicsSpringComponent, SpringCompression), METADATA_PARAMS(NewProp_SpringCompression_MetaData, ARRAY_COUNT(NewProp_SpringCompression_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSelf_MetaData[] = {
				{ "Category", "Physics" },
				{ "ClampMin", "0.010000" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "If true, the spring will ignore all components in its own actor" },
				{ "UIMin", "0.010000" },
			};
#endif
			auto NewProp_bIgnoreSelf_SetBit = [](void* Obj){ ((UPhysicsSpringComponent*)Obj)->bIgnoreSelf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSelf = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoreSelf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UPhysicsSpringComponent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIgnoreSelf_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIgnoreSelf_MetaData, ARRAY_COUNT(NewProp_bIgnoreSelf_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringChannel_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Strength of thrust force applied to the base object." },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SpringChannel = { UE4CodeGen_Private::EPropertyClass::Byte, "SpringChannel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(UPhysicsSpringComponent, SpringChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(NewProp_SpringChannel_MetaData, ARRAY_COUNT(NewProp_SpringChannel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringRadius_MetaData[] = {
				{ "Category", "Physics" },
				{ "ClampMin", "0.010000" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Determines the radius of the spring." },
				{ "UIMin", "0.010000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringRadius = { UE4CodeGen_Private::EPropertyClass::Float, "SpringRadius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsSpringComponent, SpringRadius), METADATA_PARAMS(NewProp_SpringRadius_MetaData, ARRAY_COUNT(NewProp_SpringRadius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringLengthAtRest_MetaData[] = {
				{ "Category", "Physics" },
				{ "ClampMin", "0.010000" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Determines how long the spring will be along the X-axis at rest. The spring will apply 0 force on a body when it's at rest." },
				{ "UIMin", "0.010000" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringLengthAtRest = { UE4CodeGen_Private::EPropertyClass::Float, "SpringLengthAtRest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsSpringComponent, SpringLengthAtRest), METADATA_PARAMS(NewProp_SpringLengthAtRest_MetaData, ARRAY_COUNT(NewProp_SpringLengthAtRest_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Specifies how quickly the spring can absorb energy of a body. The higher the damping the less oscillation" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringDamping = { UE4CodeGen_Private::EPropertyClass::Float, "SpringDamping", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsSpringComponent, SpringDamping), METADATA_PARAMS(NewProp_SpringDamping_MetaData, ARRAY_COUNT(NewProp_SpringDamping_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringStiffness_MetaData[] = {
				{ "Category", "Physics" },
				{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsSpringComponent.h" },
				{ "ToolTip", "Specifies how much strength the spring has. The higher the SpringStiffness the more force the spring can push on a body with." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpringStiffness = { UE4CodeGen_Private::EPropertyClass::Float, "SpringStiffness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UPhysicsSpringComponent, SpringStiffness), METADATA_PARAMS(NewProp_SpringStiffness_MetaData, ARRAY_COUNT(NewProp_SpringStiffness_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringCompression,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIgnoreSelf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringChannel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringRadius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringLengthAtRest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringDamping,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringStiffness,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPhysicsSpringComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPhysicsSpringComponent::StaticClass,
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
	IMPLEMENT_CLASS(UPhysicsSpringComponent, 3785366847);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPhysicsSpringComponent(Z_Construct_UClass_UPhysicsSpringComponent, &UPhysicsSpringComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPhysicsSpringComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsSpringComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
