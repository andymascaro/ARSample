// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelScriptActor;
class ULevelStreaming;
#ifdef ENGINE_LevelStreaming_generated_h
#error "LevelStreaming.generated.h already included, missing '#pragma once' in LevelStreaming.h"
#endif
#define ENGINE_LevelStreaming_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_71_DELEGATE \
static inline void FLevelStreamingVisibilityStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingVisibilityStatus) \
{ \
	LevelStreamingVisibilityStatus.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_70_DELEGATE \
static inline void FLevelStreamingLoadedStatus_DelegateWrapper(const FMulticastScriptDelegate& LevelStreamingLoadedStatus) \
{ \
	LevelStreamingLoadedStatus.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLevelScriptActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALevelScriptActor**)Z_Param__Result=this->GetLevelScriptActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInstance) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UniqueInstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=this->CreateInstance(Z_Param_UniqueInstanceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStreamingStatePending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsStreamingStatePending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLevelLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLevelLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLevelVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLevelVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldAssetPackageFName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetWorldAssetPackageFName(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLevelScriptActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ALevelScriptActor**)Z_Param__Result=this->GetLevelScriptActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateInstance) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UniqueInstanceName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULevelStreaming**)Z_Param__Result=this->CreateInstance(Z_Param_UniqueInstanceName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStreamingStatePending) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsStreamingStatePending(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLevelLoaded) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLevelLoaded(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsLevelVisible) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsLevelVisible(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldAssetPackageFName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetWorldAssetPackageFName(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelStreaming(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULevelStreaming(); \
public: \
	DECLARE_CLASS(ULevelStreaming, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelStreaming) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UWorld)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_INCLASS \
private: \
	static void StaticRegisterNativesULevelStreaming(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_ULevelStreaming(); \
public: \
	DECLARE_CLASS(ULevelStreaming, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), 0, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevelStreaming) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	DECLARE_WITHIN(UWorld)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreaming) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreaming); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreaming); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevelStreaming(ULevelStreaming&&); \
	ENGINE_API ULevelStreaming(const ULevelStreaming&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevelStreaming(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevelStreaming(ULevelStreaming&&); \
	ENGINE_API ULevelStreaming(const ULevelStreaming&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, ULevelStreaming); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelStreaming); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelStreaming)


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldAsset() { return STRUCT_OFFSET(ULevelStreaming, WorldAsset); } \
	FORCEINLINE static uint32 __PPO__LoadedLevel() { return STRUCT_OFFSET(ULevelStreaming, LoadedLevel); } \
	FORCEINLINE static uint32 __PPO__PendingUnloadLevel() { return STRUCT_OFFSET(ULevelStreaming, PendingUnloadLevel); }


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_78_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h_81_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LevelStreaming."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_LevelStreaming_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
