// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNamedCurveValue;
#ifdef ENGINE_CurveSourceInterface_generated_h
#error "CurveSourceInterface.generated.h already included, missing '#pragma once' in CurveSourceInterface.h"
#endif
#define ENGINE_CurveSourceInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_21_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FNamedCurveValue(); \
	static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS \
	virtual void GetCurves_Implementation(TArray<FNamedCurveValue>& OutValues) const=0; \
	virtual float GetCurveValue_Implementation(FName CurveName) const=0; \
	virtual FName GetBindingName_Implementation() const=0; \
 \
	DECLARE_FUNCTION(execGetCurves) \
	{ \
		P_GET_TARRAY_REF(FNamedCurveValue,Z_Param_Out_OutValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCurves_Implementation(Z_Param_Out_OutValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurveValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurveValue_Implementation(Z_Param_CurveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBindingName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetBindingName_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetCurves_Implementation(TArray<FNamedCurveValue>& OutValues) const=0; \
	virtual float GetCurveValue_Implementation(FName CurveName) const=0; \
	virtual FName GetBindingName_Implementation() const=0; \
 \
	DECLARE_FUNCTION(execGetCurves) \
	{ \
		P_GET_TARRAY_REF(FNamedCurveValue,Z_Param_Out_OutValues); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->GetCurves_Implementation(Z_Param_Out_OutValues); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurveValue) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_CurveName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurveValue_Implementation(Z_Param_CurveName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBindingName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=this->GetBindingName_Implementation(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_EVENT_PARMS \
	struct CurveSourceInterface_eventGetBindingName_Parms \
	{ \
		FName ReturnValue; \
	}; \
	struct CurveSourceInterface_eventGetCurves_Parms \
	{ \
		TArray<FNamedCurveValue> OutValues; \
	}; \
	struct CurveSourceInterface_eventGetCurveValue_Parms \
	{ \
		FName CurveName; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		CurveSourceInterface_eventGetCurveValue_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveSourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveSourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveSourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveSourceInterface(UCurveSourceInterface&&); \
	NO_API UCurveSourceInterface(const UCurveSourceInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCurveSourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCurveSourceInterface(UCurveSourceInterface&&); \
	NO_API UCurveSourceInterface(const UCurveSourceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCurveSourceInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCurveSourceInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCurveSourceInterface)


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCurveSourceInterface(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_UCurveSourceInterface(); \
public: \
	DECLARE_CLASS(UCurveSourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCurveSourceInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICurveSourceInterface() {} \
public: \
	typedef UCurveSourceInterface UClassType; \
	static FName Execute_GetBindingName(const UObject* O); \
	static void Execute_GetCurves(const UObject* O, TArray<FNamedCurveValue>& OutValues); \
	static float Execute_GetCurveValue(const UObject* O, FName CurveName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ICurveSourceInterface() {} \
public: \
	typedef UCurveSourceInterface UClassType; \
	static FName Execute_GetBindingName(const UObject* O); \
	static void Execute_GetCurves(const UObject* O, TArray<FNamedCurveValue>& OutValues); \
	static float Execute_GetCurveValue(const UObject* O, FName CurveName); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_11_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_CurveSourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
