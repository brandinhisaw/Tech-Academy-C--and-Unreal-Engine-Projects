// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Boundary_generated_h
#error "Boundary.generated.h already included, missing '#pragma once' in Boundary.h"
#endif
#define MYPROJECT_Boundary_generated_h

#define MyProject_Source_MyProject_Boundary_h_14_SPARSE_DATA
#define MyProject_Source_MyProject_Boundary_h_14_RPC_WRAPPERS
#define MyProject_Source_MyProject_Boundary_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Boundary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoundary(); \
	friend struct Z_Construct_UClass_ABoundary_Statics; \
public: \
	DECLARE_CLASS(ABoundary, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABoundary)


#define MyProject_Source_MyProject_Boundary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABoundary(); \
	friend struct Z_Construct_UClass_ABoundary_Statics; \
public: \
	DECLARE_CLASS(ABoundary, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABoundary)


#define MyProject_Source_MyProject_Boundary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoundary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoundary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoundary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoundary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoundary(ABoundary&&); \
	NO_API ABoundary(const ABoundary&); \
public:


#define MyProject_Source_MyProject_Boundary_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoundary(ABoundary&&); \
	NO_API ABoundary(const ABoundary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoundary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoundary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoundary)


#define MyProject_Source_MyProject_Boundary_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__isGoalTrigger() { return STRUCT_OFFSET(ABoundary, isGoalTrigger); } \
	FORCEINLINE static uint32 __PPO__Bounds() { return STRUCT_OFFSET(ABoundary, Bounds); }


#define MyProject_Source_MyProject_Boundary_h_11_PROLOG
#define MyProject_Source_MyProject_Boundary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Boundary_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Boundary_h_14_SPARSE_DATA \
	MyProject_Source_MyProject_Boundary_h_14_RPC_WRAPPERS \
	MyProject_Source_MyProject_Boundary_h_14_INCLASS \
	MyProject_Source_MyProject_Boundary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Boundary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Boundary_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Boundary_h_14_SPARSE_DATA \
	MyProject_Source_MyProject_Boundary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Boundary_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Boundary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABoundary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Boundary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
