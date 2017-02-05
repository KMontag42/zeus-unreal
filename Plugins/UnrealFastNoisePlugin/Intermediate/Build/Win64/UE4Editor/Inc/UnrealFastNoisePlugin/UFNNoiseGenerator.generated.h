// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNREALFASTNOISEPLUGIN_UFNNoiseGenerator_generated_h
#error "UFNNoiseGenerator.generated.h already included, missing '#pragma once' in UFNNoiseGenerator.h"
#endif
#define UNREALFASTNOISEPLUGIN_UFNNoiseGenerator_generated_h

#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNoise3D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNoise3D(Z_Param_aX,Z_Param_aY,Z_Param_aZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNoise2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNoise2D(Z_Param_aX,Z_Param_aY); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNoise3D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aY); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aZ); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNoise3D(Z_Param_aX,Z_Param_aY,Z_Param_aZ); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNoise2D) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_aY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetNoise2D(Z_Param_aX,Z_Param_aY); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUUFNNoiseGenerator(); \
	friend UNREALFASTNOISEPLUGIN_API class UClass* Z_Construct_UClass_UUFNNoiseGenerator(); \
	public: \
	DECLARE_CLASS(UUFNNoiseGenerator, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealFastNoisePlugin"), NO_API) \
	DECLARE_SERIALIZER(UUFNNoiseGenerator) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesUUFNNoiseGenerator(); \
	friend UNREALFASTNOISEPLUGIN_API class UClass* Z_Construct_UClass_UUFNNoiseGenerator(); \
	public: \
	DECLARE_CLASS(UUFNNoiseGenerator, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/UnrealFastNoisePlugin"), NO_API) \
	DECLARE_SERIALIZER(UUFNNoiseGenerator) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUFNNoiseGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUFNNoiseGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUFNNoiseGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUFNNoiseGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUFNNoiseGenerator(UUFNNoiseGenerator&&); \
	NO_API UUFNNoiseGenerator(const UUFNNoiseGenerator&); \
public:


#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUFNNoiseGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUFNNoiseGenerator(UUFNNoiseGenerator&&); \
	NO_API UUFNNoiseGenerator(const UUFNNoiseGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUFNNoiseGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUFNNoiseGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUFNNoiseGenerator)


#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_6_PROLOG
#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_RPC_WRAPPERS \
	HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_INCLASS \
	HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h_9_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class UFNNoiseGenerator."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_UnrealFastNoisePlugin_Source_UnrealFastNoisePlugin_Public_UFNNoiseGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
