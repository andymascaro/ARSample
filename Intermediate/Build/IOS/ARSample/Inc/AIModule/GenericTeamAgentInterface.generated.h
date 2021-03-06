// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIMODULE_GenericTeamAgentInterface_generated_h
#error "GenericTeamAgentInterface.generated.h already included, missing '#pragma once' in GenericTeamAgentInterface.h"
#endif
#define AIMODULE_GenericTeamAgentInterface_generated_h

#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_25_GENERATED_BODY \
	friend AIMODULE_API class UScriptStruct* Z_Construct_UScriptStruct_FGenericTeamId(); \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__TeamID() { return STRUCT_OFFSET(FGenericTeamId, TeamID); }


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_RPC_WRAPPERS
#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericTeamAgentInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericTeamAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericTeamAgentInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericTeamAgentInterface(UGenericTeamAgentInterface&&); \
	NO_API UGenericTeamAgentInterface(const UGenericTeamAgentInterface&); \
public:


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGenericTeamAgentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGenericTeamAgentInterface(UGenericTeamAgentInterface&&); \
	NO_API UGenericTeamAgentInterface(const UGenericTeamAgentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGenericTeamAgentInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGenericTeamAgentInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGenericTeamAgentInterface)


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGenericTeamAgentInterface(); \
	friend AIMODULE_API class UClass* Z_Construct_UClass_UGenericTeamAgentInterface(); \
public: \
	DECLARE_CLASS(UGenericTeamAgentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/AIModule"), NO_API) \
	DECLARE_SERIALIZER(UGenericTeamAgentInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGenericTeamAgentInterface() {} \
public: \
	typedef UGenericTeamAgentInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_INCLASS_IINTERFACE \
protected: \
	virtual ~IGenericTeamAgentInterface() {} \
public: \
	typedef UGenericTeamAgentInterface UClassType; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_69_PROLOG
#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_RPC_WRAPPERS \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h_72_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AIModule_Classes_GenericTeamAgentInterface_h


#define FOREACH_ENUM_ETEAMATTITUDE(op) \
	op(ETeamAttitude::Friendly) \
	op(ETeamAttitude::Neutral) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
