// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
#ifdef ENGINE_SplineMeshComponent_generated_h
#error "SplineMeshComponent.generated.h already included, missing '#pragma once' in SplineMeshComponent.h"
#endif
#define ENGINE_SplineMeshComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_35_GENERATED_BODY \
	friend ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FSplineMeshParams(); \
	ENGINE_API static class UScriptStruct* StaticStruct();


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBoundaryMax) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBoundaryMax); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoundaryMax(Z_Param_InBoundaryMax,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryMax) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetBoundaryMax(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoundaryMin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBoundaryMin); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoundaryMin(Z_Param_InBoundaryMin,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryMin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetBoundaryMin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineUpDir) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InSplineUpDir); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSplineUpDir(Z_Param_Out_InSplineUpDir,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineUpDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetSplineUpDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForwardAxis) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InForwardAxis); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForwardAxis(ESplineMeshAxis::Type(Z_Param_InForwardAxis),Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardAxis) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESplineMeshAxis::Type>*)Z_Param__Result=this->GetForwardAxis(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EndOffset); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndOffset(Z_Param_EndOffset,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetEndOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndRoll) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndRoll); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndRoll(Z_Param_EndRoll,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEndRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EndScale); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndScale(Z_Param_EndScale,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetEndScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_StartOffset); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartOffset(Z_Param_StartOffset,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetStartOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartRoll) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartRoll); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartRoll(Z_Param_StartRoll,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetStartRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_StartScale); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartScale(Z_Param_StartScale,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetStartScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartAndEnd) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_StartTangent); \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_STRUCT(FVector,Z_Param_EndTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartAndEnd(Z_Param_StartPos,Z_Param_StartTangent,Z_Param_EndPos,Z_Param_EndTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndTangent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_EndTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndTangent(Z_Param_EndTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndTangent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetEndTangent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndPosition(Z_Param_EndPos,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetEndPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartTangent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartTangent(Z_Param_StartTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTangent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetStartTangent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartPosition(Z_Param_StartPos,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetStartPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMesh(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBoundaryMax) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBoundaryMax); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoundaryMax(Z_Param_InBoundaryMax,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryMax) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetBoundaryMax(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBoundaryMin) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBoundaryMin); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBoundaryMin(Z_Param_InBoundaryMin,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundaryMin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetBoundaryMin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSplineUpDir) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InSplineUpDir); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetSplineUpDir(Z_Param_Out_InSplineUpDir,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSplineUpDir) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetSplineUpDir(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForwardAxis) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_InForwardAxis); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetForwardAxis(ESplineMeshAxis::Type(Z_Param_InForwardAxis),Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetForwardAxis) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<ESplineMeshAxis::Type>*)Z_Param__Result=this->GetForwardAxis(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EndOffset); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndOffset(Z_Param_EndOffset,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetEndOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndRoll) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_EndRoll); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndRoll(Z_Param_EndRoll,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEndRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_EndScale); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndScale(Z_Param_EndScale,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetEndScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartOffset) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_StartOffset); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartOffset(Z_Param_StartOffset,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartOffset) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetStartOffset(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartRoll) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_StartRoll); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartRoll(Z_Param_StartRoll,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartRoll) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetStartRoll(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartScale) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_StartScale); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartScale(Z_Param_StartScale,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=this->GetStartScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartAndEnd) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_STRUCT(FVector,Z_Param_StartTangent); \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_STRUCT(FVector,Z_Param_EndTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartAndEnd(Z_Param_StartPos,Z_Param_StartTangent,Z_Param_EndPos,Z_Param_EndTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndTangent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_EndTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndTangent(Z_Param_EndTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndTangent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetEndTangent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEndPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_EndPos); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetEndPosition(Z_Param_EndPos,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEndPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetEndPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartTangent) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartTangent); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartTangent(Z_Param_StartTangent,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartTangent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetStartTangent(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStartPosition) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_StartPos); \
		P_GET_UBOOL(Z_Param_bUpdateMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStartPosition(Z_Param_StartPos,Z_Param_bUpdateMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStartPosition) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=this->GetStartPosition(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateMesh(); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplineMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USplineMeshComponent(); \
public: \
	DECLARE_CLASS(USplineMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USplineMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_INCLASS \
private: \
	static void StaticRegisterNativesUSplineMeshComponent(); \
	friend ENGINE_API class UClass* Z_Construct_UClass_USplineMeshComponent(); \
public: \
	DECLARE_CLASS(USplineMeshComponent, UStaticMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USplineMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<USplineMeshComponent*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineMeshComponent(USplineMeshComponent&&); \
	NO_API USplineMeshComponent(const USplineMeshComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplineMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USplineMeshComponent(USplineMeshComponent&&); \
	NO_API USplineMeshComponent(const USplineMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplineMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplineMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplineMeshComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_98_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h_101_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SplineMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_SplineMeshComponent_h


#define FOREACH_ENUM_ESPLINEMESHAXIS(op) \
	op(ESplineMeshAxis::X) \
	op(ESplineMeshAxis::Y) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
