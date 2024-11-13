// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAgoraBPuIMediaPlayerSourceObserver;
class UAgoraBPuMediaPlayer;
enum class EAUDIO_DUAL_MONO_MODE : uint8;
enum class EMEDIA_PLAYER_STATE : uint8;
enum class ERENDER_MODE_TYPE : uint8;
struct FAgoraMediaSource;
struct FPlayerStreamInfo;
struct FSpatialAudioParams;
#ifdef AGORAPLUGIN_AgoraBPuMediaPlayer_generated_h
#error "AgoraBPuMediaPlayer.generated.h already included, missing '#pragma once' in AgoraBPuMediaPlayer.h"
#endif
#define AGORAPLUGIN_AgoraBPuMediaPlayer_generated_h

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAgoraMediaSource_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FAgoraMediaSource>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_103_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics; \
	AGORAPLUGIN_API static class UScriptStruct* StaticStruct();


template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<struct FPlayerStreamInfo>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetSoundPositionParams); \
	DECLARE_FUNCTION(execSetSpatialAudioParams); \
	DECLARE_FUNCTION(execUnloadSrc); \
	DECLARE_FUNCTION(execPlayPreloadedSrc); \
	DECLARE_FUNCTION(execPreloadSrc); \
	DECLARE_FUNCTION(execSwitchSrc); \
	DECLARE_FUNCTION(execSwitchAgoraCDNSrc); \
	DECLARE_FUNCTION(execRenewAgoraCDNSrcToken); \
	DECLARE_FUNCTION(execEnableAutoSwitchAgoraCDN); \
	DECLARE_FUNCTION(execGetCurrentAgoraCDNIndex); \
	DECLARE_FUNCTION(execSwitchAgoraCDNLineByIndex); \
	DECLARE_FUNCTION(execGetAgoraCDNLineCount); \
	DECLARE_FUNCTION(execOpenWithAgoraCDNSrc); \
	DECLARE_FUNCTION(execGetPlaySrc); \
	DECLARE_FUNCTION(execGetPlayerSdkVersion); \
	DECLARE_FUNCTION(execSetAudioDualMonoMode); \
	DECLARE_FUNCTION(execSetRenderMode); \
	DECLARE_FUNCTION(execSetView); \
	DECLARE_FUNCTION(execGetPublishSignalVolume); \
	DECLARE_FUNCTION(execAdjustPublishSignalVolume); \
	DECLARE_FUNCTION(execGetPlayoutVolume); \
	DECLARE_FUNCTION(execAdjustPlayoutVolume); \
	DECLARE_FUNCTION(execGetMute); \
	DECLARE_FUNCTION(execMute); \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execSetExternalSubtitle); \
	DECLARE_FUNCTION(execSelectInternalSubtitle); \
	DECLARE_FUNCTION(execTakeScreenshot); \
	DECLARE_FUNCTION(execSetPlayerOptionWithString); \
	DECLARE_FUNCTION(execSetPlayerOptionWithInt); \
	DECLARE_FUNCTION(execSelectMultiAudioTrack); \
	DECLARE_FUNCTION(execSelectAudioTrack); \
	DECLARE_FUNCTION(execSetPlaybackSpeed); \
	DECLARE_FUNCTION(execSetLoopCount); \
	DECLARE_FUNCTION(execGetStreamInfo); \
	DECLARE_FUNCTION(execGetStreamCount); \
	DECLARE_FUNCTION(execGetPlayPosition); \
	DECLARE_FUNCTION(execGetDuration); \
	DECLARE_FUNCTION(execSetAudioPitch); \
	DECLARE_FUNCTION(execSeek); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execOpenWithMediaSource); \
	DECLARE_FUNCTION(execOpen); \
	DECLARE_FUNCTION(execGetMediaPlayerId); \
	DECLARE_FUNCTION(execGetMediaPlayerSourceObserver); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execGetAgoraMediaPlayer);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_184_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgoraBPuMediaPlayer(); \
	friend struct Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics; \
public: \
	DECLARE_CLASS(UAgoraBPuMediaPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAgoraBPuMediaPlayer)


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_184_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgoraBPuMediaPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAgoraBPuMediaPlayer(UAgoraBPuMediaPlayer&&); \
	UAgoraBPuMediaPlayer(const UAgoraBPuMediaPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgoraBPuMediaPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgoraBPuMediaPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgoraBPuMediaPlayer) \
	NO_API virtual ~UAgoraBPuMediaPlayer();


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_181_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_184_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_184_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_184_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_184_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAgoraBPuMediaPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h


#define FOREACH_ENUM_EAUDIO_DUAL_MONO_MODE(op) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R) \
	op(EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX) 

enum class EAUDIO_DUAL_MONO_MODE : uint8;
template<> struct TIsUEnumClass<EAUDIO_DUAL_MONO_MODE> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_DUAL_MONO_MODE>();

#define FOREACH_ENUM_EMEDIA_STREAM_TYPE(op) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO) \
	op(EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE) 

enum class EMEDIA_STREAM_TYPE : uint8;
template<> struct TIsUEnumClass<EMEDIA_STREAM_TYPE> { enum { Value = true }; };
template<> AGORAPLUGIN_API UEnum* StaticEnum<EMEDIA_STREAM_TYPE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
