// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AgoraBluePrintPlugin/AgoraBPuIRtcEngineEventHandlerEx.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAgoraBPuIRtcEngineEventHandlerExCBExecutor;
enum class ECLIENT_ROLE_CHANGE_FAILED_REASON : uint8;
enum class ECLIENT_ROLE_TYPE : uint8;
enum class ECONNECTION_CHANGED_REASON_TYPE : uint8;
enum class ECONNECTION_STATE_TYPE : uint8;
enum class EENCRYPTION_ERROR_TYPE : uint8;
enum class ELICENSE_ERROR_TYPE : uint8;
enum class ELOCAL_AUDIO_STREAM_REASON : uint8;
enum class ELOCAL_AUDIO_STREAM_STATE : uint8;
enum class EMEDIA_TRACE_EVENT : uint8;
enum class EREMOTE_AUDIO_STATE : uint8;
enum class EREMOTE_AUDIO_STATE_REASON : uint8;
enum class EREMOTE_VIDEO_STATE : uint8;
enum class EREMOTE_VIDEO_STATE_REASON : uint8;
enum class EUPLOAD_ERROR_REASON : uint8;
enum class EUSER_OFFLINE_REASON_TYPE : uint8;
enum class EVIDEO_SOURCE_TYPE : uint8;
enum class EWLACC_MESSAGE_REASON : uint8;
enum class EWLACC_SUGGEST_ACTION : uint8;
struct FAudioVolumeInfo;
struct FClientRoleOptions;
struct FENUMWRAP_NETWORK_TYPE;
struct FLocalAudioStats;
struct FLocalVideoStats;
struct FRemoteAudioStats;
struct FRemoteVideoStats;
struct FRtcConnection;
struct FRtcStats;
struct FVideoLayout;
struct FVideoRenderingTracingInfo;
struct FWlAccStats;
#ifdef AGORAPLUGIN_AgoraBPuIRtcEngineEventHandlerEx_generated_h
#error "AgoraBPuIRtcEngineEventHandlerEx.generated.h already included, missing '#pragma once' in AgoraBPuIRtcEngineEventHandlerEx.h"
#endif
#define AGORAPLUGIN_AgoraBPuIRtcEngineEventHandlerEx_generated_h

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_11_DELEGATE \
AGORAPLUGIN_API void FOnJoinChannelSuccessEx_DelegateWrapper(const FMulticastScriptDelegate& OnJoinChannelSuccessEx, FRtcConnection const& connection, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_12_DELEGATE \
AGORAPLUGIN_API void FOnLeaveChannelEx_DelegateWrapper(const FMulticastScriptDelegate& OnLeaveChannelEx, FRtcConnection const& connection, FRtcStats const& stats);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_13_DELEGATE \
AGORAPLUGIN_API void FOnUserJoinedEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserJoinedEx, FRtcConnection const& connection, int64 remoteUid, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_14_DELEGATE \
AGORAPLUGIN_API void FOnUserOfflineEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserOfflineEx, FRtcConnection const& connection, int64 remoteUid, EUSER_OFFLINE_REASON_TYPE reason);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_18_DELEGATE \
AGORAPLUGIN_API void FOnRejoinChannelSuccessEx_DelegateWrapper(const FMulticastScriptDelegate& OnRejoinChannelSuccessEx, FRtcConnection const& connection, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_19_DELEGATE \
AGORAPLUGIN_API void FOnAudioQualityEx_DelegateWrapper(const FMulticastScriptDelegate& OnAudioQualityEx, FRtcConnection const& connection, int64 remoteUid, int32 quality, int32 delay, int32 lost);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_20_DELEGATE \
AGORAPLUGIN_API void FOnAudioVolumeIndicationEx_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeIndicationEx, FRtcConnection const& connection, TArray<FAudioVolumeInfo> const& speakers, int32 totalVolume);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_21_DELEGATE \
AGORAPLUGIN_API void FOnRtcStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRtcStatsEx, FRtcConnection const& connection, FRtcStats const& stats);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_22_DELEGATE \
AGORAPLUGIN_API void FOnNetworkQualityEx_DelegateWrapper(const FMulticastScriptDelegate& OnNetworkQualityEx, FRtcConnection const& connection, int64 remoteUid, int32 txQuality, int32 rxQuality);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_23_DELEGATE \
AGORAPLUGIN_API void FOnIntraRequestReceivedEx_DelegateWrapper(const FMulticastScriptDelegate& OnIntraRequestReceivedEx, FRtcConnection const& connection);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_24_DELEGATE \
AGORAPLUGIN_API void FOnFirstLocalVideoFramePublishedEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstLocalVideoFramePublishedEx, FRtcConnection const& connection, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_25_DELEGATE \
AGORAPLUGIN_API void FOnVideoSourceFrameSizeChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnVideoSourceFrameSizeChangedEx, FRtcConnection const& connection, EVIDEO_SOURCE_TYPE sourceType, int32 width, int32 height);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_26_DELEGATE \
AGORAPLUGIN_API void FOnFirstRemoteVideoDecodedEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteVideoDecodedEx, FRtcConnection const& connection, int64 remoteUid, int32 width, int32 height, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_27_DELEGATE \
AGORAPLUGIN_API void FOnVideoSizeChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnVideoSizeChangedEx, FRtcConnection const& connection, EVIDEO_SOURCE_TYPE sourceType, int64 uid, int32 width, int32 height, int32 rotation);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_28_DELEGATE \
AGORAPLUGIN_API void FOnRemoteVideoStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteVideoStateChangedEx, FRtcConnection const& connection, int64 remoteUid, EREMOTE_VIDEO_STATE state, EREMOTE_VIDEO_STATE_REASON reason, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_29_DELEGATE \
AGORAPLUGIN_API void FOnFirstRemoteVideoFrameEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteVideoFrameEx, FRtcConnection const& connection, int64 remoteUid, int32 width, int32 height, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_31_DELEGATE \
AGORAPLUGIN_API void FOnUserMuteAudioEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserMuteAudioEx, FRtcConnection const& connection, int64 remoteUid, bool muted);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_32_DELEGATE \
AGORAPLUGIN_API void FOnUserMuteVideoEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserMuteVideoEx, FRtcConnection const& connection, int64 remoteUid, bool muted);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_33_DELEGATE \
AGORAPLUGIN_API void FOnUserEnableVideoEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserEnableVideoEx, FRtcConnection const& connection, int64 remoteUid, bool enabled);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_34_DELEGATE \
AGORAPLUGIN_API void FOnUserEnableLocalVideoEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserEnableLocalVideoEx, FRtcConnection const& connection, int64 remoteUid, bool enabled);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_35_DELEGATE \
AGORAPLUGIN_API void FOnUserStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserStateChangedEx, FRtcConnection const& connection, int64 remoteUid, int32 state);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_36_DELEGATE \
AGORAPLUGIN_API void FOnLocalAudioStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnLocalAudioStatsEx, FRtcConnection const& connection, FLocalAudioStats const& stats);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_37_DELEGATE \
AGORAPLUGIN_API void FOnRemoteAudioStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioStatsEx, FRtcConnection const& connection, FRemoteAudioStats const& stats);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_38_DELEGATE \
AGORAPLUGIN_API void FOnLocalVideoStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnLocalVideoStatsEx, FRtcConnection const& connection, FLocalVideoStats const& stats);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_39_DELEGATE \
AGORAPLUGIN_API void FOnRemoteVideoStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteVideoStatsEx, FRtcConnection const& connection, FRemoteVideoStats const& stats);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_40_DELEGATE \
AGORAPLUGIN_API void FOnConnectionLostEx_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionLostEx, FRtcConnection const& connection);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_41_DELEGATE \
AGORAPLUGIN_API void FOnConnectionInterruptedEx_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionInterruptedEx, FRtcConnection const& connection);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_42_DELEGATE \
AGORAPLUGIN_API void FOnConnectionBannedEx_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionBannedEx, FRtcConnection const& connection);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_43_DELEGATE \
AGORAPLUGIN_API void FOnStreamMessageEx_DelegateWrapper(const FMulticastScriptDelegate& OnStreamMessageEx, FRtcConnection const& connection, int64 remoteUid, int32 streamId, const FString& data, int64 length, int64 sentTs);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_44_DELEGATE \
AGORAPLUGIN_API void FOnStreamMessageErrorEx_DelegateWrapper(const FMulticastScriptDelegate& OnStreamMessageErrorEx, FRtcConnection const& connection, int64 remoteUid, int32 streamId, int32 code, int32 missed, int32 cached);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_45_DELEGATE \
AGORAPLUGIN_API void FOnRequestTokenEx_DelegateWrapper(const FMulticastScriptDelegate& OnRequestTokenEx, FRtcConnection const& connection);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_46_DELEGATE \
AGORAPLUGIN_API void FOnLicenseValidationFailureEx_DelegateWrapper(const FMulticastScriptDelegate& OnLicenseValidationFailureEx, FRtcConnection const& connection, ELICENSE_ERROR_TYPE reason);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_47_DELEGATE \
AGORAPLUGIN_API void FOnTokenPrivilegeWillExpireEx_DelegateWrapper(const FMulticastScriptDelegate& OnTokenPrivilegeWillExpireEx, FRtcConnection const& connection, const FString& token);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_48_DELEGATE \
AGORAPLUGIN_API void FOnFirstLocalAudioFramePublishedEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstLocalAudioFramePublishedEx, FRtcConnection const& connection, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_49_DELEGATE \
AGORAPLUGIN_API void FOnFirstRemoteAudioFrameEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteAudioFrameEx, FRtcConnection const& connection, int64 userId, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_50_DELEGATE \
AGORAPLUGIN_API void FOnFirstRemoteAudioDecodedEx_DelegateWrapper(const FMulticastScriptDelegate& OnFirstRemoteAudioDecodedEx, FRtcConnection const& connection, int64 uid, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_51_DELEGATE \
AGORAPLUGIN_API void FOnLocalAudioStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnLocalAudioStateChangedEx, FRtcConnection const& connection, ELOCAL_AUDIO_STREAM_STATE state, ELOCAL_AUDIO_STREAM_REASON reason);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_52_DELEGATE \
AGORAPLUGIN_API void FOnRemoteAudioStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioStateChangedEx, FRtcConnection const& connection, int64 remoteUid, EREMOTE_AUDIO_STATE state, EREMOTE_AUDIO_STATE_REASON reason, int32 elapsed);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_53_DELEGATE \
AGORAPLUGIN_API void FOnActiveSpeakerEx_DelegateWrapper(const FMulticastScriptDelegate& OnActiveSpeakerEx, FRtcConnection const& connection, int64 uid);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_54_DELEGATE \
AGORAPLUGIN_API void FOnClientRoleChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnClientRoleChangedEx, FRtcConnection const& connection, ECLIENT_ROLE_TYPE oldRole, ECLIENT_ROLE_TYPE newRole, FClientRoleOptions const& newRoleOptions);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_55_DELEGATE \
AGORAPLUGIN_API void FOnClientRoleChangeFailedEx_DelegateWrapper(const FMulticastScriptDelegate& OnClientRoleChangeFailedEx, FRtcConnection const& connection, ECLIENT_ROLE_CHANGE_FAILED_REASON reason, ECLIENT_ROLE_TYPE currentRole);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_56_DELEGATE \
AGORAPLUGIN_API void FOnRemoteAudioTransportStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteAudioTransportStatsEx, FRtcConnection const& connection, int64 remoteUid, int32 delay, int32 lost, int32 rxKBitRate);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_57_DELEGATE \
AGORAPLUGIN_API void FOnRemoteVideoTransportStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteVideoTransportStatsEx, FRtcConnection const& connection, int64 remoteUid, int32 delay, int32 lost, int32 rxKBitRate);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_58_DELEGATE \
AGORAPLUGIN_API void FOnConnectionStateChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnConnectionStateChangedEx, FRtcConnection const& connection, ECONNECTION_STATE_TYPE state, ECONNECTION_CHANGED_REASON_TYPE reason);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_59_DELEGATE \
AGORAPLUGIN_API void FOnWlAccMessageEx_DelegateWrapper(const FMulticastScriptDelegate& OnWlAccMessageEx, FRtcConnection const& connection, EWLACC_MESSAGE_REASON reason, EWLACC_SUGGEST_ACTION action, const FString& wlAccMsg);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_60_DELEGATE \
AGORAPLUGIN_API void FOnWlAccStatsEx_DelegateWrapper(const FMulticastScriptDelegate& OnWlAccStatsEx, FRtcConnection const& connection, FWlAccStats const& currentStats, FWlAccStats const& averageStats);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_61_DELEGATE \
AGORAPLUGIN_API void FOnNetworkTypeChangedEx_DelegateWrapper(const FMulticastScriptDelegate& OnNetworkTypeChangedEx, FRtcConnection const& connection, FENUMWRAP_NETWORK_TYPE type);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_62_DELEGATE \
AGORAPLUGIN_API void FOnEncryptionErrorEx_DelegateWrapper(const FMulticastScriptDelegate& OnEncryptionErrorEx, FRtcConnection const& connection, EENCRYPTION_ERROR_TYPE errorType);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_63_DELEGATE \
AGORAPLUGIN_API void FOnUploadLogResultEx_DelegateWrapper(const FMulticastScriptDelegate& OnUploadLogResultEx, FRtcConnection const& connection, const FString& requestId, bool success, EUPLOAD_ERROR_REASON reason);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_64_DELEGATE \
AGORAPLUGIN_API void FOnUserAccountUpdatedEx_DelegateWrapper(const FMulticastScriptDelegate& OnUserAccountUpdatedEx, FRtcConnection const& connection, int64 remoteUid, const FString& remoteUserAccount);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_65_DELEGATE \
AGORAPLUGIN_API void FOnSnapshotTakenEx_DelegateWrapper(const FMulticastScriptDelegate& OnSnapshotTakenEx, FRtcConnection const& connection, int64 uid, const FString& filePath, int32 width, int32 height, int32 errCode);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_66_DELEGATE \
AGORAPLUGIN_API void FOnVideoRenderingTracingResultEx_DelegateWrapper(const FMulticastScriptDelegate& OnVideoRenderingTracingResultEx, FRtcConnection const& connection, int64 uid, EMEDIA_TRACE_EVENT currentEvent, FVideoRenderingTracingInfo const& tracingInfo);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_68_DELEGATE \
AGORAPLUGIN_API void FOnSetRtmFlagResultEx_DelegateWrapper(const FMulticastScriptDelegate& OnSetRtmFlagResultEx, FRtcConnection const& connection, int32 code);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_69_DELEGATE \
AGORAPLUGIN_API void FOnTranscodedStreamLayoutInfoEx_DelegateWrapper(const FMulticastScriptDelegate& OnTranscodedStreamLayoutInfoEx, FRtcConnection const& connection, int64 uid, int32 width, int32 height, TArray<FVideoLayout> const& layoutlist);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_70_DELEGATE \
AGORAPLUGIN_API void FOnAudioMetadataReceivedEx_DelegateWrapper(const FMulticastScriptDelegate& OnAudioMetadataReceivedEx, FRtcConnection const& connection, int64 uid, const FString& metadata);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveAllBlueprintCallbackExecutorExs); \
	DECLARE_FUNCTION(execAddBlueprintCallbackExecutorEx);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgoraBPuIRtcEngineEventHandlerEx(); \
	friend struct Z_Construct_UClass_UAgoraBPuIRtcEngineEventHandlerEx_Statics; \
public: \
	DECLARE_CLASS(UAgoraBPuIRtcEngineEventHandlerEx, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAgoraBPuIRtcEngineEventHandlerEx)


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_86_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgoraBPuIRtcEngineEventHandlerEx(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAgoraBPuIRtcEngineEventHandlerEx(UAgoraBPuIRtcEngineEventHandlerEx&&); \
	UAgoraBPuIRtcEngineEventHandlerEx(const UAgoraBPuIRtcEngineEventHandlerEx&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgoraBPuIRtcEngineEventHandlerEx); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgoraBPuIRtcEngineEventHandlerEx); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgoraBPuIRtcEngineEventHandlerEx) \
	NO_API virtual ~UAgoraBPuIRtcEngineEventHandlerEx();


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_83_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_86_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAgoraBPuIRtcEngineEventHandlerEx>();

#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_471_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnAudioMetadataReceived_Implementation(FRtcConnection const& connection, int64 Uid, const FString& Metadata); \
	virtual void OnTranscodedStreamLayoutInfo_Implementation(FRtcConnection const& connection, int64 Uid, int32 Width, int32 Height, TArray<FVideoLayout> const& Layoutlist); \
	virtual void OnSetRtmFlagResult_Implementation(FRtcConnection const& connection, int32 Code); \
	virtual void OnVideoRenderingTracingResult_Implementation(FRtcConnection const& connection, int64 Uid, EMEDIA_TRACE_EVENT CurrentEvent, FVideoRenderingTracingInfo const& TracingInfo); \
	virtual void OnSnapshotTaken_Implementation(FRtcConnection const& connection, int64 Uid, const FString& FilePath, int32 Width, int32 Height, int32 ErrCode); \
	virtual void OnUserAccountUpdated_Implementation(FRtcConnection const& connection, int64 RemoteUid, const FString& RemoteUserAccount); \
	virtual void OnUploadLogResult_Implementation(FRtcConnection const& connection, const FString& RequestId, bool Success, EUPLOAD_ERROR_REASON Reason); \
	virtual void OnEncryptionError_Implementation(FRtcConnection const& connection, EENCRYPTION_ERROR_TYPE ErrorType); \
	virtual void OnNetworkTypeChanged_Implementation(FRtcConnection const& connection, FENUMWRAP_NETWORK_TYPE Type); \
	virtual void OnWlAccStats_Implementation(FRtcConnection const& connection, FWlAccStats const& CurrentStats, FWlAccStats const& AverageStats); \
	virtual void OnWlAccMessage_Implementation(FRtcConnection const& connection, EWLACC_MESSAGE_REASON Reason, EWLACC_SUGGEST_ACTION Action, const FString& WlAccMsg); \
	virtual void OnConnectionStateChanged_Implementation(FRtcConnection const& connection, ECONNECTION_STATE_TYPE State, ECONNECTION_CHANGED_REASON_TYPE Reason); \
	virtual void OnRemoteVideoTransportStats_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 Delay, int32 Lost, int32 RxKBitRate); \
	virtual void OnRemoteAudioTransportStats_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 Delay, int32 Lost, int32 RxKBitRate); \
	virtual void OnClientRoleChangeFailed_Implementation(FRtcConnection const& connection, ECLIENT_ROLE_CHANGE_FAILED_REASON Reason, ECLIENT_ROLE_TYPE CurrentRole); \
	virtual void OnClientRoleChanged_Implementation(FRtcConnection const& connection, ECLIENT_ROLE_TYPE OldRole, ECLIENT_ROLE_TYPE NewRole, FClientRoleOptions const& NewRoleOptions); \
	virtual void OnActiveSpeaker_Implementation(FRtcConnection const& connection, int64 Uid); \
	virtual void OnRemoteAudioStateChanged_Implementation(FRtcConnection const& connection, int64 RemoteUid, EREMOTE_AUDIO_STATE State, EREMOTE_AUDIO_STATE_REASON Reason, int32 Elapsed); \
	virtual void OnLocalAudioStateChanged_Implementation(FRtcConnection const& connection, ELOCAL_AUDIO_STREAM_STATE State, ELOCAL_AUDIO_STREAM_REASON Reason); \
	virtual void OnFirstRemoteAudioDecoded_Implementation(FRtcConnection const& connection, int64 Uid, int32 Elapsed); \
	virtual void OnFirstRemoteAudioFrame_Implementation(FRtcConnection const& connection, int64 UserId, int32 Elapsed); \
	virtual void OnFirstLocalAudioFramePublished_Implementation(FRtcConnection const& connection, int32 Elapsed); \
	virtual void OnTokenPrivilegeWillExpire_Implementation(FRtcConnection const& connection, const FString& Token); \
	virtual void OnLicenseValidationFailure_Implementation(FRtcConnection const& connection, ELICENSE_ERROR_TYPE Reason); \
	virtual void OnRequestToken_Implementation(FRtcConnection const& connection); \
	virtual void OnStreamMessageError_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 StreamId, int32 Code, int32 Missed, int32 Cached); \
	virtual void OnStreamMessage_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 StreamId, const FString& Data, int64 Length, int64 SentTs); \
	virtual void OnConnectionBanned_Implementation(FRtcConnection const& connection); \
	virtual void OnConnectionInterrupted_Implementation(FRtcConnection const& connection); \
	virtual void OnConnectionLost_Implementation(FRtcConnection const& connection); \
	virtual void OnRemoteVideoStats_Implementation(FRtcConnection const& connection, FRemoteVideoStats const& Stats); \
	virtual void OnLocalVideoStats_Implementation(FRtcConnection const& connection, FLocalVideoStats const& Stats); \
	virtual void OnRemoteAudioStats_Implementation(FRtcConnection const& connection, FRemoteAudioStats const& Stats); \
	virtual void OnLocalAudioStats_Implementation(FRtcConnection const& connection, FLocalAudioStats const& Stats); \
	virtual void OnUserStateChanged_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 State); \
	virtual void OnUserEnableLocalVideo_Implementation(FRtcConnection const& connection, int64 RemoteUid, bool Enabled); \
	virtual void OnUserEnableVideo_Implementation(FRtcConnection const& connection, int64 RemoteUid, bool Enabled); \
	virtual void OnUserMuteVideo_Implementation(FRtcConnection const& connection, int64 RemoteUid, bool Muted); \
	virtual void OnUserMuteAudio_Implementation(FRtcConnection const& connection, int64 RemoteUid, bool Muted); \
	virtual void OnFirstRemoteVideoFrame_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 Width, int32 Height, int32 Elapsed); \
	virtual void OnRemoteVideoStateChanged_Implementation(FRtcConnection const& connection, int64 RemoteUid, EREMOTE_VIDEO_STATE State, EREMOTE_VIDEO_STATE_REASON Reason, int32 Elapsed); \
	virtual void OnVideoSizeChanged_Implementation(FRtcConnection const& connection, EVIDEO_SOURCE_TYPE SourceType, int64 Uid, int32 Width, int32 Height, int32 Rotation); \
	virtual void OnFirstRemoteVideoDecoded_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 Width, int32 Height, int32 Elapsed); \
	virtual void OnFirstLocalVideoFramePublished_Implementation(FRtcConnection const& connection, int32 Elapsed); \
	virtual void OnIntraRequestReceived_Implementation(FRtcConnection const& connection); \
	virtual void OnNetworkQuality_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 TxQuality, int32 RxQuality); \
	virtual void OnRtcStats_Implementation(FRtcConnection const& connection, FRtcStats const& Stats); \
	virtual void OnAudioVolumeIndication_Implementation(FRtcConnection const& connection, TArray<FAudioVolumeInfo> const& Speakers, int32 TotalVolume); \
	virtual void OnAudioQuality_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 Quality, int32 Delay, int32 Lost); \
	virtual void OnRejoinChannelSuccess_Implementation(FRtcConnection const& connection, int32 Elapsed); \
	virtual void OnUserOffline_Implementation(FRtcConnection const& connection, int64 RemoteUid, EUSER_OFFLINE_REASON_TYPE Reason); \
	virtual void OnUserJoined_Implementation(FRtcConnection const& connection, int64 RemoteUid, int32 Elapsed); \
	virtual void OnLeaveChannel_Implementation(FRtcConnection const& connection, FRtcStats const& stats); \
	virtual void OnJoinChannelSuccess_Implementation(FRtcConnection const& Connection, int32 Elapsed); \
	DECLARE_FUNCTION(execOnAudioMetadataReceived); \
	DECLARE_FUNCTION(execOnTranscodedStreamLayoutInfo); \
	DECLARE_FUNCTION(execOnSetRtmFlagResult); \
	DECLARE_FUNCTION(execOnVideoRenderingTracingResult); \
	DECLARE_FUNCTION(execOnSnapshotTaken); \
	DECLARE_FUNCTION(execOnUserAccountUpdated); \
	DECLARE_FUNCTION(execOnUploadLogResult); \
	DECLARE_FUNCTION(execOnEncryptionError); \
	DECLARE_FUNCTION(execOnNetworkTypeChanged); \
	DECLARE_FUNCTION(execOnWlAccStats); \
	DECLARE_FUNCTION(execOnWlAccMessage); \
	DECLARE_FUNCTION(execOnConnectionStateChanged); \
	DECLARE_FUNCTION(execOnRemoteVideoTransportStats); \
	DECLARE_FUNCTION(execOnRemoteAudioTransportStats); \
	DECLARE_FUNCTION(execOnClientRoleChangeFailed); \
	DECLARE_FUNCTION(execOnClientRoleChanged); \
	DECLARE_FUNCTION(execOnActiveSpeaker); \
	DECLARE_FUNCTION(execOnRemoteAudioStateChanged); \
	DECLARE_FUNCTION(execOnLocalAudioStateChanged); \
	DECLARE_FUNCTION(execOnFirstRemoteAudioDecoded); \
	DECLARE_FUNCTION(execOnFirstRemoteAudioFrame); \
	DECLARE_FUNCTION(execOnFirstLocalAudioFramePublished); \
	DECLARE_FUNCTION(execOnTokenPrivilegeWillExpire); \
	DECLARE_FUNCTION(execOnLicenseValidationFailure); \
	DECLARE_FUNCTION(execOnRequestToken); \
	DECLARE_FUNCTION(execOnStreamMessageError); \
	DECLARE_FUNCTION(execOnStreamMessage); \
	DECLARE_FUNCTION(execOnConnectionBanned); \
	DECLARE_FUNCTION(execOnConnectionInterrupted); \
	DECLARE_FUNCTION(execOnConnectionLost); \
	DECLARE_FUNCTION(execOnRemoteVideoStats); \
	DECLARE_FUNCTION(execOnLocalVideoStats); \
	DECLARE_FUNCTION(execOnRemoteAudioStats); \
	DECLARE_FUNCTION(execOnLocalAudioStats); \
	DECLARE_FUNCTION(execOnUserStateChanged); \
	DECLARE_FUNCTION(execOnUserEnableLocalVideo); \
	DECLARE_FUNCTION(execOnUserEnableVideo); \
	DECLARE_FUNCTION(execOnUserMuteVideo); \
	DECLARE_FUNCTION(execOnUserMuteAudio); \
	DECLARE_FUNCTION(execOnFirstRemoteVideoFrame); \
	DECLARE_FUNCTION(execOnRemoteVideoStateChanged); \
	DECLARE_FUNCTION(execOnVideoSizeChanged); \
	DECLARE_FUNCTION(execOnFirstRemoteVideoDecoded); \
	DECLARE_FUNCTION(execOnFirstLocalVideoFramePublished); \
	DECLARE_FUNCTION(execOnIntraRequestReceived); \
	DECLARE_FUNCTION(execOnNetworkQuality); \
	DECLARE_FUNCTION(execOnRtcStats); \
	DECLARE_FUNCTION(execOnAudioVolumeIndication); \
	DECLARE_FUNCTION(execOnAudioQuality); \
	DECLARE_FUNCTION(execOnRejoinChannelSuccess); \
	DECLARE_FUNCTION(execOnUserOffline); \
	DECLARE_FUNCTION(execOnUserJoined); \
	DECLARE_FUNCTION(execOnLeaveChannel); \
	DECLARE_FUNCTION(execOnJoinChannelSuccess);


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_471_CALLBACK_WRAPPERS
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_471_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAgoraBPuIRtcEngineEventHandlerExCBExecutor(); \
	friend struct Z_Construct_UClass_UAgoraBPuIRtcEngineEventHandlerExCBExecutor_Statics; \
public: \
	DECLARE_CLASS(UAgoraBPuIRtcEngineEventHandlerExCBExecutor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AgoraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAgoraBPuIRtcEngineEventHandlerExCBExecutor)


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_471_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAgoraBPuIRtcEngineEventHandlerExCBExecutor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAgoraBPuIRtcEngineEventHandlerExCBExecutor(UAgoraBPuIRtcEngineEventHandlerExCBExecutor&&); \
	UAgoraBPuIRtcEngineEventHandlerExCBExecutor(const UAgoraBPuIRtcEngineEventHandlerExCBExecutor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAgoraBPuIRtcEngineEventHandlerExCBExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAgoraBPuIRtcEngineEventHandlerExCBExecutor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAgoraBPuIRtcEngineEventHandlerExCBExecutor) \
	NO_API virtual ~UAgoraBPuIRtcEngineEventHandlerExCBExecutor();


#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_469_PROLOG
#define FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_471_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_471_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_471_CALLBACK_WRAPPERS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_471_INCLASS_NO_PURE_DECLS \
	FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h_471_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGORAPLUGIN_API UClass* StaticClass<class UAgoraBPuIRtcEngineEventHandlerExCBExecutor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIRtcEngineEventHandlerEx_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
