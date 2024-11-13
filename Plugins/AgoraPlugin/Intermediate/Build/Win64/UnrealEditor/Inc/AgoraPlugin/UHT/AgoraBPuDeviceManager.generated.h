// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/AgoraBPuDeviceManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAgoraBPuAudioDeviceManager;
class UAgoraBPuVideoDeviceManager;
class UAudioDeviceCollection;
class UVideoDeviceCollection;
struct FVideoFormat;
#ifdef AGORAPLUGIN_AgoraBPuDeviceManager_generated_h
#error "AgoraBPuDeviceManager.generated.h already included, missing '#pragma once' in AgoraBPuDeviceManager.h"
#endif
#define AGORAPLUGIN_AgoraBPuDeviceManager_generated_h

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGetDevice); \
	DECLARE_FUNCTION(execSetDevice); \
	DECLARE_FUNCTION(execGetCount);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVideoDeviceCollection(); \
	friend struct Z_Construct_UClass_UVideoDeviceCollection_Statics; \
public: \
	DECLARE_CLASS(UVideoDeviceCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVideoDeviceCollection)


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVideoDeviceCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVideoDeviceCollection(UVideoDeviceCollection&&); \
	UVideoDeviceCollection(const UVideoDeviceCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVideoDeviceCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVideoDeviceCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVideoDeviceCollection) \
	NO_API virtual ~UVideoDeviceCollection();


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_13_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UVideoDeviceCollection>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execIsApplicationMute); \
	DECLARE_FUNCTION(execSetApplicationMute); \
	DECLARE_FUNCTION(execGetApplicationVolume); \
	DECLARE_FUNCTION(execSetApplicationVolume); \
	DECLARE_FUNCTION(execGetDefaultDevice); \
	DECLARE_FUNCTION(execSetDevice); \
	DECLARE_FUNCTION(execGetDevice); \
	DECLARE_FUNCTION(execGetCount);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioDeviceCollection(); \
	friend struct Z_Construct_UClass_UAudioDeviceCollection_Statics; \
public: \
	DECLARE_CLASS(UAudioDeviceCollection, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAudioDeviceCollection)


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioDeviceCollection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioDeviceCollection(UAudioDeviceCollection&&); \
	UAudioDeviceCollection(const UAudioDeviceCollection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioDeviceCollection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioDeviceCollection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAudioDeviceCollection) \
	NO_API virtual ~UAudioDeviceCollection();


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_36_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_39_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAudioDeviceCollection>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execStopDeviceTest); \
	DECLARE_FUNCTION(execStartDeviceTest); \
	DECLARE_FUNCTION(execGetCapability); \
	DECLARE_FUNCTION(execNumberOfCapabilities); \
	DECLARE_FUNCTION(execGetDevice); \
	DECLARE_FUNCTION(execSetDevice); \
	DECLARE_FUNCTION(execEnumerateVideoDevices); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGetAgoraVideoDeviceManager);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_74_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgoraBPuVideoDeviceManager(); \
	friend struct Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics; \
public: \
	DECLARE_CLASS(UAgoraBPuVideoDeviceManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAgoraBPuVideoDeviceManager)


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_74_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgoraBPuVideoDeviceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAgoraBPuVideoDeviceManager(UAgoraBPuVideoDeviceManager&&); \
	UAgoraBPuVideoDeviceManager(const UAgoraBPuVideoDeviceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgoraBPuVideoDeviceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgoraBPuVideoDeviceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgoraBPuVideoDeviceManager) \
	NO_API virtual ~UAgoraBPuVideoDeviceManager();


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_71_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_74_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_74_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_74_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_74_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAgoraBPuVideoDeviceManager>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFollowSystemLoopbackDevice); \
	DECLARE_FUNCTION(execFollowSystemRecordingDevice); \
	DECLARE_FUNCTION(execFollowSystemPlaybackDevice); \
	DECLARE_FUNCTION(execStopAudioDeviceLoopbackTest); \
	DECLARE_FUNCTION(execStartAudioDeviceLoopbackTest); \
	DECLARE_FUNCTION(execStopRecordingDeviceTest); \
	DECLARE_FUNCTION(execStartRecordingDeviceTest); \
	DECLARE_FUNCTION(execStopPlaybackDeviceTest); \
	DECLARE_FUNCTION(execStartPlaybackDeviceTest); \
	DECLARE_FUNCTION(execGetRecordingDeviceMute); \
	DECLARE_FUNCTION(execSetRecordingDeviceMute); \
	DECLARE_FUNCTION(execGetPlaybackDeviceMute); \
	DECLARE_FUNCTION(execSetPlaybackDeviceMute); \
	DECLARE_FUNCTION(execGetLoopbackDevice); \
	DECLARE_FUNCTION(execSetLoopbackDevice); \
	DECLARE_FUNCTION(execGetRecordingDeviceVolume); \
	DECLARE_FUNCTION(execSetRecordingDeviceVolume); \
	DECLARE_FUNCTION(execGetRecordingDeviceInfo); \
	DECLARE_FUNCTION(execGetRecordingDevice); \
	DECLARE_FUNCTION(execSetRecordingDevice); \
	DECLARE_FUNCTION(execGetPlaybackDeviceVolume); \
	DECLARE_FUNCTION(execSetPlaybackDeviceVolume); \
	DECLARE_FUNCTION(execGetPlaybackDeviceInfo); \
	DECLARE_FUNCTION(execGetPlaybackDevice); \
	DECLARE_FUNCTION(execSetPlaybackDevice); \
	DECLARE_FUNCTION(execEnumerateRecordingDevices); \
	DECLARE_FUNCTION(execEnumeratePlaybackDevices); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGetAgoraAudioDeviceManager);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgoraBPuAudioDeviceManager(); \
	friend struct Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics; \
public: \
	DECLARE_CLASS(UAgoraBPuAudioDeviceManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAgoraBPuAudioDeviceManager)


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgoraBPuAudioDeviceManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAgoraBPuAudioDeviceManager(UAgoraBPuAudioDeviceManager&&); \
	UAgoraBPuAudioDeviceManager(const UAgoraBPuAudioDeviceManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgoraBPuAudioDeviceManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgoraBPuAudioDeviceManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgoraBPuAudioDeviceManager) \
	NO_API virtual ~UAgoraBPuAudioDeviceManager();


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_114_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_117_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAgoraBPuAudioDeviceManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
