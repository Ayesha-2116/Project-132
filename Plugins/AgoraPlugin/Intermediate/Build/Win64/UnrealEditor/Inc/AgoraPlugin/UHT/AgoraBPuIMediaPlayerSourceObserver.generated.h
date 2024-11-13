// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAgoraBPuIMediaPlayerSourceObserverCBExecutor;
enum class EMEDIA_PLAYER_STATE : uint8;
enum class EPLAYER_PRELOAD_EVENT : uint8;
struct FCacheStatistics;
struct FENUMWRAP_MEDIA_PLAYER_REASON;
struct FPlayerPlaybackStats;
struct FPlayerUpdatedInfo;
struct FSrcInfo;
#ifdef AGORAPLUGIN_AgoraBPuIMediaPlayerSourceObserver_generated_h
#error "AgoraBPuIMediaPlayerSourceObserver.generated.h already included, missing '#pragma once' in AgoraBPuIMediaPlayerSourceObserver.h"
#endif
#define AGORAPLUGIN_AgoraBPuIMediaPlayerSourceObserver_generated_h

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FENUMWRAP_MEDIA_PLAYER_REASON>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_136_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSrcInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FSrcInfo>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCacheStatistics_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FCacheStatistics>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_200_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FPlayerPlaybackStats>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FPlayerUpdatedInfo>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_296_DELEGATE \
AGORAPLUGIN_API void FOnPlayerSourceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSourceStateChanged, EMEDIA_PLAYER_STATE state, FENUMWRAP_MEDIA_PLAYER_REASON ec);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_297_DELEGATE \
AGORAPLUGIN_API void FOnPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPositionChanged, int64 position_ms, int64 timestampMs);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_298_DELEGATE \
AGORAPLUGIN_API void FOnPlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEvent, EMEDIA_PLAYER_EVENT eventCode, int64 elapsedTime, const FString& message);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_299_DELEGATE \
AGORAPLUGIN_API void FOnMetaDataSource_DelegateWrapper(const FMulticastScriptDelegate& OnMetaDataSource, const FString& Data);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_300_DELEGATE \
AGORAPLUGIN_API void FOnPlayBufferUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayBufferUpdated, int64 playCachedBuffer);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_301_DELEGATE \
AGORAPLUGIN_API void FOnPreloadEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPreloadEvent, const FString& src, EPLAYER_PRELOAD_EVENT event);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_302_DELEGATE \
AGORAPLUGIN_API void FOnCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnCompleted);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_303_DELEGATE \
AGORAPLUGIN_API void FOnAgoraCDNTokenWillExpire_DelegateWrapper(const FMulticastScriptDelegate& OnAgoraCDNTokenWillExpire);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_304_DELEGATE \
AGORAPLUGIN_API void FOnPlayerSrcInfoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSrcInfoChanged, FSrcInfo const& from, FSrcInfo const& to);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_305_DELEGATE \
AGORAPLUGIN_API void FOnPlayerInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInfoUpdated, FPlayerUpdatedInfo const& info);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_306_DELEGATE \
AGORAPLUGIN_API void FOnAudioVolumeIndicationSource_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeIndicationSource, int32 volume);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_308_DELEGATE \
AGORAPLUGIN_API void FOnPlayerCacheStats_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerCacheStats, FCacheStatistics const& stats);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_309_DELEGATE \
AGORAPLUGIN_API void FOnPlayerPlaybackStats_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerPlaybackStats, FPlayerPlaybackStats const& stats);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_322_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveAllBlueprintCallbackExecutors); \
	DECLARE_FUNCTION(execAddBlueprintCallbackExecutor);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_322_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgoraBPuIMediaPlayerSourceObserver(); \
	friend struct Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics; \
public: \
	DECLARE_CLASS(UAgoraBPuIMediaPlayerSourceObserver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAgoraBPuIMediaPlayerSourceObserver)


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_322_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgoraBPuIMediaPlayerSourceObserver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAgoraBPuIMediaPlayerSourceObserver(UAgoraBPuIMediaPlayerSourceObserver&&); \
	UAgoraBPuIMediaPlayerSourceObserver(const UAgoraBPuIMediaPlayerSourceObserver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgoraBPuIMediaPlayerSourceObserver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgoraBPuIMediaPlayerSourceObserver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgoraBPuIMediaPlayerSourceObserver) \
	NO_API virtual ~UAgoraBPuIMediaPlayerSourceObserver();


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_319_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_322_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_322_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_322_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_322_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAgoraBPuIMediaPlayerSourceObserver>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_398_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAudioVolumeIndication_Implementation(int32 volume); \
	virtual void OnPlayerPlaybackStats_Implementation(FPlayerPlaybackStats const& stats); \
	virtual void OnPlayerCacheStats_Implementation(FCacheStatistics const& stats); \
	virtual void OnPlayerInfoUpdated_Implementation(FPlayerUpdatedInfo const& info); \
	virtual void OnPlayerSrcInfoChanged_Implementation(FSrcInfo const& from, FSrcInfo const& to); \
	virtual void OnAgoraCDNTokenWillExpire_Implementation(); \
	virtual void OnCompleted_Implementation(); \
	virtual void OnPreloadEvent_Implementation(const FString& src, EPLAYER_PRELOAD_EVENT event); \
	virtual void OnPlayBufferUpdated_Implementation(int64 playCachedBuffer); \
	virtual void OnMetaData_Implementation(const FString& Data); \
	virtual void OnPlayerEvent_Implementation(EMEDIA_PLAYER_EVENT eventCode, int64 elapsedTime, const FString& message); \
	virtual void OnPositionChanged_Implementation(int64 position_ms, int64 timestampMs); \
	virtual void OnPlayerSourceStateChanged_Implementation(EMEDIA_PLAYER_STATE state, FENUMWRAP_MEDIA_PLAYER_REASON ec); \
	DECLARE_FUNCTION(execOnAudioVolumeIndication); \
	DECLARE_FUNCTION(execOnPlayerPlaybackStats); \
	DECLARE_FUNCTION(execOnPlayerCacheStats); \
	DECLARE_FUNCTION(execOnPlayerInfoUpdated); \
	DECLARE_FUNCTION(execOnPlayerSrcInfoChanged); \
	DECLARE_FUNCTION(execOnAgoraCDNTokenWillExpire); \
	DECLARE_FUNCTION(execOnCompleted); \
	DECLARE_FUNCTION(execOnPreloadEvent); \
	DECLARE_FUNCTION(execOnPlayBufferUpdated); \
	DECLARE_FUNCTION(execOnMetaData); \
	DECLARE_FUNCTION(execOnPlayerEvent); \
	DECLARE_FUNCTION(execOnPositionChanged); \
	DECLARE_FUNCTION(execOnPlayerSourceStateChanged);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_398_CALLBACK_WRAPPERS
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_398_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgoraBPuIMediaPlayerSourceObserverCBExecutor(); \
	friend struct Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics; \
public: \
	DECLARE_CLASS(UAgoraBPuIMediaPlayerSourceObserverCBExecutor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAgoraBPuIMediaPlayerSourceObserverCBExecutor)


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_398_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgoraBPuIMediaPlayerSourceObserverCBExecutor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAgoraBPuIMediaPlayerSourceObserverCBExecutor(UAgoraBPuIMediaPlayerSourceObserverCBExecutor&&); \
	UAgoraBPuIMediaPlayerSourceObserverCBExecutor(const UAgoraBPuIMediaPlayerSourceObserverCBExecutor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgoraBPuIMediaPlayerSourceObserverCBExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgoraBPuIMediaPlayerSourceObserverCBExecutor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgoraBPuIMediaPlayerSourceObserverCBExecutor) \
	NO_API virtual ~UAgoraBPuIMediaPlayerSourceObserverCBExecutor();


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_396_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_398_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_398_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_398_CALLBACK_WRAPPERS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_398_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_398_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAgoraBPuIMediaPlayerSourceObserverCBExecutor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h


#define FOREACH_ENUM_EENUMCUSTOM_MEDIA_PLAYER_REASON(op) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NONE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_ARGUMENTS) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INTERNAL) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NO_RESOURCE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_MEDIA_SOURCE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_UNKNOWN_STREAM_TYPE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_OBJ_NOT_INITIALIZED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_CODEC_NOT_SUPPORTED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_VIDEO_RENDER_FAILED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_STATE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_URL_NOT_FOUND) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_CONNECTION_STATE) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_SRC_BUFFER_UNDERFLOW) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INTERRUPTED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NOT_SUPPORTED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_TOKEN_EXPIRED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_IP_EXPIRED) \
	op(EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_UNKNOWN) 

enum class EENUMCUSTOM_MEDIA_PLAYER_REASON : uint8;
template<> struct TIsUEnumClass<EENUMCUSTOM_MEDIA_PLAYER_REASON> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EENUMCUSTOM_MEDIA_PLAYER_REASON>();

#define FOREACH_ENUM_EMEDIA_PLAYER_EVENT(op) \
	op(PLAYER_EVENT_SEEK_BEGIN) \
	op(PLAYER_EVENT_SEEK_COMPLETE) \
	op(PLAYER_EVENT_SEEK_ERROR) \
	op(PLAYER_EVENT_AUDIO_TRACK_CHANGED) \
	op(PLAYER_EVENT_BUFFER_LOW) \
	op(PLAYER_EVENT_BUFFER_RECOVER) \
	op(PLAYER_EVENT_FREEZE_START) \
	op(PLAYER_EVENT_FREEZE_STOP) \
	op(PLAYER_EVENT_SWITCH_BEGIN) \
	op(PLAYER_EVENT_SWITCH_COMPLETE) \
	op(PLAYER_EVENT_SWITCH_ERROR) \
	op(PLAYER_EVENT_FIRST_DISPLAYED) \
	op(PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT) \
	op(PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE) \
	op(PLAYER_EVENT_TRY_OPEN_START) \
	op(PLAYER_EVENT_TRY_OPEN_SUCCEED) \
	op(PLAYER_EVENT_TRY_OPEN_FAILED) 
#define FOREACH_ENUM_EPLAYER_PRELOAD_EVENT(op) \
	op(EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN) \
	op(EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE) \
	op(EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR) 

enum class EPLAYER_PRELOAD_EVENT : uint8;
template<> struct TIsUEnumClass<EPLAYER_PRELOAD_EVENT> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EPLAYER_PRELOAD_EVENT>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
