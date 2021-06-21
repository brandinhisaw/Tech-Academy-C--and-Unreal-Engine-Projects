// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_Block_generated_h
#error "Block.generated.h already included, missing '#pragma once' in Block.h"
#endif
#define MYPROJECT_Block_generated_h

#define MyProject_Source_MyProject_Block_h_14_SPARSE_DATA
#define MyProject_Source_MyProject_Block_h_14_RPC_WRAPPERS
#define MyProject_Source_MyProject_Block_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_Block_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define MyProject_Source_MyProject_Block_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABlock(); \
	friend struct Z_Construct_UClass_ABlock_Statics; \
public: \
	DECLARE_CLASS(ABlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABlock)


#define MyProject_Source_MyProject_Block_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlock(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlock) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public:


#define MyProject_Source_MyProject_Block_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlock(ABlock&&); \
	NO_API ABlock(const ABlock&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlock); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlock)


#define MyProject_Source_MyProject_Block_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Collision() { return STRUCT_OFFSET(ABlock, Collision); }


#define MyProject_Source_MyProject_Block_h_11_PROLOG
#define MyProject_Source_MyProject_Block_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Block_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Block_h_14_SPARSE_DATA \
	MyProject_Source_MyProject_Block_h_14_RPC_WRAPPERS \
	MyProject_Source_MyProject_Block_h_14_INCLASS \
	MyProject_Source_MyProject_Block_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_Block_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_Block_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_Block_h_14_SPARSE_DATA \
	MyProject_Source_MyProject_Block_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Block_h_14_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_Block_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABlock>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_Block_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
