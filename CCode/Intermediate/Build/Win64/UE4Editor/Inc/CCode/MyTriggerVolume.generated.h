// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef CCODE_MyTriggerVolume_generated_h
#error "MyTriggerVolume.generated.h already included, missing '#pragma once' in MyTriggerVolume.h"
#endif
#define CCODE_MyTriggerVolume_generated_h

#define CCode_Source_CCode_MyTriggerVolume_h_15_SPARSE_DATA
#define CCode_Source_CCode_MyTriggerVolume_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CCode_Source_CCode_MyTriggerVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define CCode_Source_CCode_MyTriggerVolume_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyTriggerVolume(); \
	friend struct Z_Construct_UClass_AMyTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(AMyTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CCode"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerVolume)


#define CCode_Source_CCode_MyTriggerVolume_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyTriggerVolume(); \
	friend struct Z_Construct_UClass_AMyTriggerVolume_Statics; \
public: \
	DECLARE_CLASS(AMyTriggerVolume, ATriggerVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CCode"), NO_API) \
	DECLARE_SERIALIZER(AMyTriggerVolume)


#define CCode_Source_CCode_MyTriggerVolume_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyTriggerVolume(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyTriggerVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerVolume(AMyTriggerVolume&&); \
	NO_API AMyTriggerVolume(const AMyTriggerVolume&); \
public:


#define CCode_Source_CCode_MyTriggerVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyTriggerVolume(AMyTriggerVolume&&); \
	NO_API AMyTriggerVolume(const AMyTriggerVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyTriggerVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyTriggerVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyTriggerVolume)


#define CCode_Source_CCode_MyTriggerVolume_h_15_PRIVATE_PROPERTY_OFFSET
#define CCode_Source_CCode_MyTriggerVolume_h_12_PROLOG
#define CCode_Source_CCode_MyTriggerVolume_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CCode_Source_CCode_MyTriggerVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	CCode_Source_CCode_MyTriggerVolume_h_15_SPARSE_DATA \
	CCode_Source_CCode_MyTriggerVolume_h_15_RPC_WRAPPERS \
	CCode_Source_CCode_MyTriggerVolume_h_15_INCLASS \
	CCode_Source_CCode_MyTriggerVolume_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CCode_Source_CCode_MyTriggerVolume_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CCode_Source_CCode_MyTriggerVolume_h_15_PRIVATE_PROPERTY_OFFSET \
	CCode_Source_CCode_MyTriggerVolume_h_15_SPARSE_DATA \
	CCode_Source_CCode_MyTriggerVolume_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CCode_Source_CCode_MyTriggerVolume_h_15_INCLASS_NO_PURE_DECLS \
	CCode_Source_CCode_MyTriggerVolume_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CCODE_API UClass* StaticClass<class AMyTriggerVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CCode_Source_CCode_MyTriggerVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
