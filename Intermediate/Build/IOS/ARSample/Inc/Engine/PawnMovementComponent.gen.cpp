// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/GameFramework/PawnMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnMovementComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UFunction* Z_Construct_UFunction_UPawnMovementComponent_AddInputVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector();
	ENGINE_API UFunction* Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored();
	ENGINE_API UFunction* Z_Construct_UFunction_UPawnMovementComponent_K2_GetInputVector();
// End Cross Module References
	void UPawnMovementComponent::StaticRegisterNativesUPawnMovementComponent()
	{
		UClass* Class = UPawnMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputVector", (Native)&UPawnMovementComponent::execAddInputVector },
			{ "ConsumeInputVector", (Native)&UPawnMovementComponent::execConsumeInputVector },
			{ "GetLastInputVector", (Native)&UPawnMovementComponent::execGetLastInputVector },
			{ "GetPawnOwner", (Native)&UPawnMovementComponent::execGetPawnOwner },
			{ "GetPendingInputVector", (Native)&UPawnMovementComponent::execGetPendingInputVector },
			{ "IsMoveInputIgnored", (Native)&UPawnMovementComponent::execIsMoveInputIgnored },
			{ "K2_GetInputVector", (Native)&UPawnMovementComponent::execK2_GetInputVector },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_AddInputVector()
	{
		struct PawnMovementComponent_eventAddInputVector_Parms
		{
			FVector WorldVector;
			bool bForce;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bForce_SetBit = [](void* Obj){ ((PawnMovementComponent_eventAddInputVector_Parms*)Obj)->bForce = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce = { UE4CodeGen_Private::EPropertyClass::Bool, "bForce", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PawnMovementComponent_eventAddInputVector_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bForce_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldVector = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldVector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventAddInputVector_Parms, WorldVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bForce,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldVector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Components|PawnMovement" },
				{ "CPP_Default_bForce", "false" },
				{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
				{ "ToolTip", "Adds the given vector to the accumulated input in world space. Input vectors are usually between 0 and 1 in magnitude.\nThey are accumulated during a frame then applied as acceleration during the movement update.\n\n@param WorldDirection        Direction in world space to apply input\n@param ScaleValue            Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value.\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see APawn::AddMovementInput()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, "AddInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(PawnMovementComponent_eventAddInputVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector()
	{
		struct PawnMovementComponent_eventConsumeInputVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventConsumeInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Components|PawnMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
				{ "ToolTip", "Returns the pending input vector and resets it to zero.\n       * This should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.\n       * Copies the pending input vector to the saved input vector (GetLastMovementInputVector()).\n       * @return The pending input vector." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, "ConsumeInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820400, sizeof(PawnMovementComponent_eventConsumeInputVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector()
	{
		struct PawnMovementComponent_eventGetLastInputVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventGetLastInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Components|PawnMovement" },
				{ "Keywords", "GetInput" },
				{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
				{ "ToolTip", "Return the last input vector in world space that was processed by ConsumeInputVector(), which is usually done by the Pawn or PawnMovementComponent.\nAny user that needs to know about the input that last affected movement should use this function.\n@return The last input vector in world space that was processed by ConsumeInputVector().\n@see AddInputVector(), ConsumeInputVector(), GetPendingInputVector()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, "GetLastInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PawnMovementComponent_eventGetLastInputVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner()
	{
		struct PawnMovementComponent_eventGetPawnOwner_Parms
		{
			APawn* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Components|PawnMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
				{ "ToolTip", "Return the Pawn that owns UpdatedComponent." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, "GetPawnOwner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(PawnMovementComponent_eventGetPawnOwner_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector()
	{
		struct PawnMovementComponent_eventGetPendingInputVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventGetPendingInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Components|PawnMovement" },
				{ "Keywords", "GetInput" },
				{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
				{ "ToolTip", "Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it.\nPawnMovementComponents implementing movement usually want to use either this or ConsumeInputVector() as these functions represent the most recent state of input.\n@return The pending input vector in world space.\n@see AddInputVector(), ConsumeInputVector(), GetLastInputVector()" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, "GetPendingInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PawnMovementComponent_eventGetPendingInputVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored()
	{
		struct PawnMovementComponent_eventIsMoveInputIgnored_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((PawnMovementComponent_eventIsMoveInputIgnored_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(PawnMovementComponent_eventIsMoveInputIgnored_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Components|PawnMovement" },
				{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
				{ "ToolTip", "Helper to see if move input is ignored. If there is no Pawn or UpdatedComponent, returns true, otherwise defers to the Pawn's implementation of IsMoveInputIgnored()." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, "IsMoveInputIgnored", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020400, sizeof(PawnMovementComponent_eventIsMoveInputIgnored_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_K2_GetInputVector()
	{
		struct PawnMovementComponent_eventK2_GetInputVector_Parms
		{
			FVector ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventK2_GetInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Pawn|Components|PawnMovement" },
				{ "DeprecatedFunction", "" },
				{ "DeprecationMessage", "GetInputVector has been deprecated, use either GetPendingInputVector or GetLastInputVector" },
				{ "DisplayName", "GetInputVector" },
				{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, "K2_GetInputVector", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54820401, sizeof(PawnMovementComponent_eventK2_GetInputVector_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister()
	{
		return UPawnMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UPawnMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UNavMovementComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_Engine,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UPawnMovementComponent_AddInputVector, "AddInputVector" }, // 890031556
				{ &Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector, "ConsumeInputVector" }, // 2894537301
				{ &Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector, "GetLastInputVector" }, // 339319804
				{ &Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner, "GetPawnOwner" }, // 2436868041
				{ &Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector, "GetPendingInputVector" }, // 2100725773
				{ &Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored, "IsMoveInputIgnored" }, // 2775098339
				{ &Z_Construct_UFunction_UPawnMovementComponent_K2_GetInputVector, "K2_GetInputVector" }, // 3408502834
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GameFramework/PawnMovementComponent.h" },
				{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
				{ "ToolTip", "PawnMovementComponent can be used to update movement for an associated Pawn.\nIt also provides ways to accumulate and read directional input in a generic way (with AddInputVector(), ConsumeInputVector(), etc).\n@see APawn" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnOwner_MetaData[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
				{ "ToolTip", "Pawn that owns this component." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnOwner = { UE4CodeGen_Private::EPropertyClass::Object, "PawnOwner", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000202000, 1, nullptr, STRUCT_OFFSET(UPawnMovementComponent, PawnOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(NewProp_PawnOwner_MetaData, ARRAY_COUNT(NewProp_PawnOwner_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PawnOwner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UPawnMovementComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UPawnMovementComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00085u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(UPawnMovementComponent, 2142837568);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnMovementComponent(Z_Construct_UClass_UPawnMovementComponent, &UPawnMovementComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
