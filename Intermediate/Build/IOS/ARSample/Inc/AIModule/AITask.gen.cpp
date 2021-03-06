// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/Tasks/AITask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask() {}
// Cross Module References
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAITaskPriority();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
// End Cross Module References
	static UEnum* EAITaskPriority_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EAITaskPriority, Z_Construct_UPackage__Script_AIModule(), TEXT("EAITaskPriority"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAITaskPriority(EAITaskPriority_StaticEnum, TEXT("/Script/AIModule"), TEXT("EAITaskPriority"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AIModule_EAITaskPriority_CRC() { return 3090038136U; }
	UEnum* Z_Construct_UEnum_AIModule_EAITaskPriority()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AIModule();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAITaskPriority"), 0, Get_Z_Construct_UEnum_AIModule_EAITaskPriority_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAITaskPriority::Lowest", (int64)EAITaskPriority::Lowest },
				{ "EAITaskPriority::Low", (int64)EAITaskPriority::Low },
				{ "EAITaskPriority::AutonomousAI", (int64)EAITaskPriority::AutonomousAI },
				{ "EAITaskPriority::High", (int64)EAITaskPriority::High },
				{ "EAITaskPriority::Ultimate", (int64)EAITaskPriority::Ultimate },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AutonomousAI.ToolTip", "FGameplayTasks::DefaultPriority / 2," },
				{ "High.ToolTip", "FGameplayTasks::DefaultPriority," },
				{ "ModuleRelativePath", "Classes/Tasks/AITask.h" },
				{ "Ultimate.ToolTip", "(1.5 * FGameplayTasks::DefaultPriority)," },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EAITaskPriority",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EAITaskPriority",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UAITask::StaticRegisterNativesUAITask()
	{
	}
	UClass* Z_Construct_UClass_UAITask_NoRegister()
	{
		return UAITask::StaticClass();
	}
	UClass* Z_Construct_UClass_UAITask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UGameplayTask,
				(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "Tasks/AITask.h" },
				{ "ModuleRelativePath", "Classes/Tasks/AITask.h" },
				{ "ObjectInitializerConstructorDeclared", "" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[] = {
				{ "Category", "AI|Tasks" },
				{ "ModuleRelativePath", "Classes/Tasks/AITask.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerController = { UE4CodeGen_Private::EPropertyClass::Object, "OwnerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000014, 1, nullptr, STRUCT_OFFSET(UAITask, OwnerController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(NewProp_OwnerController_MetaData, ARRAY_COUNT(NewProp_OwnerController_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OwnerController,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UAITask>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UAITask::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100085u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAITask, 1187515388);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAITask(Z_Construct_UClass_UAITask, &UAITask::StaticClass, TEXT("/Script/AIModule"), TEXT("UAITask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
