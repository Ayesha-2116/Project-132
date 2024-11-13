// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraBPuIMediaPlayerSourceObserver() {}

// Begin Cross Module References
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_NoRegister();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_NoRegister();
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON();
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT();
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE();
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature();
AGORAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature();
AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FCacheStatistics();
AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON();
AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerPlaybackStats();
AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerUpdatedInfo();
AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSrcInfo();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References

// Begin Enum EENUMCUSTOM_MEDIA_PLAYER_REASON
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_REASON;
static UEnum* EENUMCUSTOM_MEDIA_PLAYER_REASON_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_REASON.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_REASON.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EENUMCUSTOM_MEDIA_PLAYER_REASON"));
	}
	return Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_REASON.OuterSingleton;
}
template<> AGORAPLUGIN_API UEnum* StaticEnum<EENUMCUSTOM_MEDIA_PLAYER_REASON>()
{
	return EENUMCUSTOM_MEDIA_PLAYER_REASON_StaticEnum();
}
struct Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
		{ "PLAYER_REASON_CODEC_NOT_SUPPORTED.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_CODEC_NOT_SUPPORTED" },
		{ "PLAYER_REASON_INTERNAL.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INTERNAL" },
		{ "PLAYER_REASON_INTERRUPTED.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INTERRUPTED" },
		{ "PLAYER_REASON_INVALID_ARGUMENTS.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_ARGUMENTS" },
		{ "PLAYER_REASON_INVALID_CONNECTION_STATE.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_CONNECTION_STATE" },
		{ "PLAYER_REASON_INVALID_MEDIA_SOURCE.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_MEDIA_SOURCE" },
		{ "PLAYER_REASON_INVALID_STATE.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_STATE" },
		{ "PLAYER_REASON_IP_EXPIRED.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_IP_EXPIRED" },
		{ "PLAYER_REASON_NO_RESOURCE.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NO_RESOURCE" },
		{ "PLAYER_REASON_NONE.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NONE" },
		{ "PLAYER_REASON_NOT_SUPPORTED.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NOT_SUPPORTED" },
		{ "PLAYER_REASON_OBJ_NOT_INITIALIZED.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_OBJ_NOT_INITIALIZED" },
		{ "PLAYER_REASON_SRC_BUFFER_UNDERFLOW.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_SRC_BUFFER_UNDERFLOW" },
		{ "PLAYER_REASON_TOKEN_EXPIRED.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_TOKEN_EXPIRED" },
		{ "PLAYER_REASON_UNKNOWN.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_UNKNOWN" },
		{ "PLAYER_REASON_UNKNOWN_STREAM_TYPE.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_UNKNOWN_STREAM_TYPE" },
		{ "PLAYER_REASON_URL_NOT_FOUND.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_URL_NOT_FOUND" },
		{ "PLAYER_REASON_VIDEO_RENDER_FAILED.Name", "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_VIDEO_RENDER_FAILED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NONE", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NONE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_ARGUMENTS", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_ARGUMENTS },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INTERNAL", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INTERNAL },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NO_RESOURCE", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NO_RESOURCE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_MEDIA_SOURCE", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_MEDIA_SOURCE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_UNKNOWN_STREAM_TYPE", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_UNKNOWN_STREAM_TYPE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_OBJ_NOT_INITIALIZED", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_OBJ_NOT_INITIALIZED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_CODEC_NOT_SUPPORTED", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_CODEC_NOT_SUPPORTED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_VIDEO_RENDER_FAILED", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_VIDEO_RENDER_FAILED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_STATE", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_STATE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_URL_NOT_FOUND", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_URL_NOT_FOUND },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_CONNECTION_STATE", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INVALID_CONNECTION_STATE },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_SRC_BUFFER_UNDERFLOW", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_SRC_BUFFER_UNDERFLOW },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INTERRUPTED", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_INTERRUPTED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NOT_SUPPORTED", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_NOT_SUPPORTED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_TOKEN_EXPIRED", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_TOKEN_EXPIRED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_IP_EXPIRED", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_IP_EXPIRED },
		{ "EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_UNKNOWN", (int64)EENUMCUSTOM_MEDIA_PLAYER_REASON::PLAYER_REASON_UNKNOWN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	"EENUMCUSTOM_MEDIA_PLAYER_REASON",
	"EENUMCUSTOM_MEDIA_PLAYER_REASON",
	Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON()
{
	if (!Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_REASON.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_REASON.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_REASON.InnerSingleton;
}
// End Enum EENUMCUSTOM_MEDIA_PLAYER_REASON

// Begin ScriptStruct FENUMWRAP_MEDIA_PLAYER_REASON
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_REASON;
class UScriptStruct* FENUMWRAP_MEDIA_PLAYER_REASON::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_REASON.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_REASON.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("ENUMWRAP_MEDIA_PLAYER_REASON"));
	}
	return Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_REASON.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FENUMWRAP_MEDIA_PLAYER_REASON>()
{
	return FENUMWRAP_MEDIA_PLAYER_REASON::StaticStruct();
}
struct Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueWrapper_MetaData[] = {
		{ "Category", "Agora|FENUMWRAP_MEDIA_PLAYER_REASON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// require to call [GetRawValue] method to get the raw value\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "require to call [GetRawValue] method to get the raw value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ValueWrapper_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueWrapper;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FENUMWRAP_MEDIA_PLAYER_REASON>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::NewProp_ValueWrapper_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::NewProp_ValueWrapper = { "ValueWrapper", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FENUMWRAP_MEDIA_PLAYER_REASON, ValueWrapper), Z_Construct_UEnum_AgoraPlugin_EENUMCUSTOM_MEDIA_PLAYER_REASON, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueWrapper_MetaData), NewProp_ValueWrapper_MetaData) }; // 3934901920
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::NewProp_ValueWrapper_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::NewProp_ValueWrapper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	&NewStructOps,
	"ENUMWRAP_MEDIA_PLAYER_REASON",
	Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::PropPointers),
	sizeof(FENUMWRAP_MEDIA_PLAYER_REASON),
	alignof(FENUMWRAP_MEDIA_PLAYER_REASON),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON()
{
	if (!Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_REASON.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_REASON.InnerSingleton, Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_REASON.InnerSingleton;
}
// End ScriptStruct FENUMWRAP_MEDIA_PLAYER_REASON

// Begin Enum EMEDIA_PLAYER_EVENT
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT;
static UEnum* EMEDIA_PLAYER_EVENT_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMEDIA_PLAYER_EVENT"));
	}
	return Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.OuterSingleton;
}
template<> AGORAPLUGIN_API UEnum* StaticEnum<EMEDIA_PLAYER_EVENT>()
{
	return EMEDIA_PLAYER_EVENT_StaticEnum();
}
struct Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
		{ "PLAYER_EVENT_AUDIO_TRACK_CHANGED.Name", "PLAYER_EVENT_AUDIO_TRACK_CHANGED" },
		{ "PLAYER_EVENT_BUFFER_LOW.Name", "PLAYER_EVENT_BUFFER_LOW" },
		{ "PLAYER_EVENT_BUFFER_RECOVER.Name", "PLAYER_EVENT_BUFFER_RECOVER" },
		{ "PLAYER_EVENT_FIRST_DISPLAYED.Name", "PLAYER_EVENT_FIRST_DISPLAYED" },
		{ "PLAYER_EVENT_FREEZE_START.Name", "PLAYER_EVENT_FREEZE_START" },
		{ "PLAYER_EVENT_FREEZE_STOP.Name", "PLAYER_EVENT_FREEZE_STOP" },
		{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT.Name", "PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT" },
		{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE.Name", "PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE" },
		{ "PLAYER_EVENT_SEEK_BEGIN.Name", "PLAYER_EVENT_SEEK_BEGIN" },
		{ "PLAYER_EVENT_SEEK_COMPLETE.Name", "PLAYER_EVENT_SEEK_COMPLETE" },
		{ "PLAYER_EVENT_SEEK_ERROR.Name", "PLAYER_EVENT_SEEK_ERROR" },
		{ "PLAYER_EVENT_SWITCH_BEGIN.Name", "PLAYER_EVENT_SWITCH_BEGIN" },
		{ "PLAYER_EVENT_SWITCH_COMPLETE.Name", "PLAYER_EVENT_SWITCH_COMPLETE" },
		{ "PLAYER_EVENT_SWITCH_ERROR.Name", "PLAYER_EVENT_SWITCH_ERROR" },
		{ "PLAYER_EVENT_TRY_OPEN_FAILED.Name", "PLAYER_EVENT_TRY_OPEN_FAILED" },
		{ "PLAYER_EVENT_TRY_OPEN_START.Name", "PLAYER_EVENT_TRY_OPEN_START" },
		{ "PLAYER_EVENT_TRY_OPEN_SUCCEED.Name", "PLAYER_EVENT_TRY_OPEN_SUCCEED" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "PLAYER_EVENT_SEEK_BEGIN", (int64)PLAYER_EVENT_SEEK_BEGIN },
		{ "PLAYER_EVENT_SEEK_COMPLETE", (int64)PLAYER_EVENT_SEEK_COMPLETE },
		{ "PLAYER_EVENT_SEEK_ERROR", (int64)PLAYER_EVENT_SEEK_ERROR },
		{ "PLAYER_EVENT_AUDIO_TRACK_CHANGED", (int64)PLAYER_EVENT_AUDIO_TRACK_CHANGED },
		{ "PLAYER_EVENT_BUFFER_LOW", (int64)PLAYER_EVENT_BUFFER_LOW },
		{ "PLAYER_EVENT_BUFFER_RECOVER", (int64)PLAYER_EVENT_BUFFER_RECOVER },
		{ "PLAYER_EVENT_FREEZE_START", (int64)PLAYER_EVENT_FREEZE_START },
		{ "PLAYER_EVENT_FREEZE_STOP", (int64)PLAYER_EVENT_FREEZE_STOP },
		{ "PLAYER_EVENT_SWITCH_BEGIN", (int64)PLAYER_EVENT_SWITCH_BEGIN },
		{ "PLAYER_EVENT_SWITCH_COMPLETE", (int64)PLAYER_EVENT_SWITCH_COMPLETE },
		{ "PLAYER_EVENT_SWITCH_ERROR", (int64)PLAYER_EVENT_SWITCH_ERROR },
		{ "PLAYER_EVENT_FIRST_DISPLAYED", (int64)PLAYER_EVENT_FIRST_DISPLAYED },
		{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT", (int64)PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT },
		{ "PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE", (int64)PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE },
		{ "PLAYER_EVENT_TRY_OPEN_START", (int64)PLAYER_EVENT_TRY_OPEN_START },
		{ "PLAYER_EVENT_TRY_OPEN_SUCCEED", (int64)PLAYER_EVENT_TRY_OPEN_SUCCEED },
		{ "PLAYER_EVENT_TRY_OPEN_FAILED", (int64)PLAYER_EVENT_TRY_OPEN_FAILED },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	"EMEDIA_PLAYER_EVENT",
	"EMEDIA_PLAYER_EVENT",
	Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT()
{
	if (!Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT.InnerSingleton;
}
// End Enum EMEDIA_PLAYER_EVENT

// Begin Enum EPLAYER_PRELOAD_EVENT
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT;
static UEnum* EPLAYER_PRELOAD_EVENT_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EPLAYER_PRELOAD_EVENT"));
	}
	return Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.OuterSingleton;
}
template<> AGORAPLUGIN_API UEnum* StaticEnum<EPLAYER_PRELOAD_EVENT>()
{
	return EPLAYER_PRELOAD_EVENT_StaticEnum();
}
struct Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
		{ "PLAYER_PRELOAD_EVENT_BEGIN.Name", "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN" },
		{ "PLAYER_PRELOAD_EVENT_COMPLETE.Name", "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE" },
		{ "PLAYER_PRELOAD_EVENT_ERROR.Name", "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN", (int64)EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_BEGIN },
		{ "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE", (int64)EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_COMPLETE },
		{ "EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR", (int64)EPLAYER_PRELOAD_EVENT::PLAYER_PRELOAD_EVENT_ERROR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	"EPLAYER_PRELOAD_EVENT",
	"EPLAYER_PRELOAD_EVENT",
	Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT()
{
	if (!Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT.InnerSingleton;
}
// End Enum EPLAYER_PRELOAD_EVENT

// Begin ScriptStruct FSrcInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SrcInfo;
class UScriptStruct* FSrcInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SrcInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SrcInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSrcInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("SrcInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SrcInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FSrcInfo>()
{
	return FSrcInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSrcInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bitrateInKbps_MetaData[] = {
		{ "Category", "Agora|SrcInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[] = {
		{ "Category", "Agora|SrcInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_bitrateInKbps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSrcInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps = { "bitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSrcInfo, bitrateInKbps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bitrateInKbps_MetaData), NewProp_bitrateInKbps_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSrcInfo, name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_name_MetaData), NewProp_name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_bitrateInKbps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSrcInfo_Statics::NewProp_name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSrcInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	&NewStructOps,
	"SrcInfo",
	Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::PropPointers),
	sizeof(FSrcInfo),
	alignof(FSrcInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSrcInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSrcInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSrcInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SrcInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SrcInfo.InnerSingleton, Z_Construct_UScriptStruct_FSrcInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SrcInfo.InnerSingleton;
}
// End ScriptStruct FSrcInfo

// Begin ScriptStruct FCacheStatistics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CacheStatistics;
class UScriptStruct* FCacheStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CacheStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CacheStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCacheStatistics, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("CacheStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_CacheStatistics.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FCacheStatistics>()
{
	return FCacheStatistics::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCacheStatistics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fileSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cacheSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_downloadSize_MetaData[] = {
		{ "Category", "Agora|CacheStatistics" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_fileSize;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_cacheSize;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_downloadSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCacheStatistics>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize = { "fileSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheStatistics, fileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fileSize_MetaData), NewProp_fileSize_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize = { "cacheSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheStatistics, cacheSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cacheSize_MetaData), NewProp_cacheSize_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize = { "downloadSize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCacheStatistics, downloadSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_downloadSize_MetaData), NewProp_downloadSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_fileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_cacheSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewProp_downloadSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCacheStatistics_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	&NewStructOps,
	"CacheStatistics",
	Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::PropPointers),
	sizeof(FCacheStatistics),
	alignof(FCacheStatistics),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCacheStatistics_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCacheStatistics_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCacheStatistics()
{
	if (!Z_Registration_Info_UScriptStruct_CacheStatistics.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CacheStatistics.InnerSingleton, Z_Construct_UScriptStruct_FCacheStatistics_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CacheStatistics.InnerSingleton;
}
// End ScriptStruct FCacheStatistics

// Begin ScriptStruct FPlayerPlaybackStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerPlaybackStats;
class UScriptStruct* FPlayerPlaybackStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerPlaybackStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerPlaybackStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerPlaybackStats, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("PlayerPlaybackStats"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerPlaybackStats.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FPlayerPlaybackStats>()
{
	return FPlayerPlaybackStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_videoFps_MetaData[] = {
		{ "Category", "Agora|FPlayerPlaybackStats" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_videoBitrateInKbps_MetaData[] = {
		{ "Category", "Agora|FPlayerPlaybackStats" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_audioBitrateInKbps_MetaData[] = {
		{ "Category", "Agora|FPlayerPlaybackStats" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_totalBitrateInKbps_MetaData[] = {
		{ "Category", "Agora|FPlayerPlaybackStats" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_videoFps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_videoBitrateInKbps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_audioBitrateInKbps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_totalBitrateInKbps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerPlaybackStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::NewProp_videoFps = { "videoFps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerPlaybackStats, videoFps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_videoFps_MetaData), NewProp_videoFps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::NewProp_videoBitrateInKbps = { "videoBitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerPlaybackStats, videoBitrateInKbps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_videoBitrateInKbps_MetaData), NewProp_videoBitrateInKbps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::NewProp_audioBitrateInKbps = { "audioBitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerPlaybackStats, audioBitrateInKbps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_audioBitrateInKbps_MetaData), NewProp_audioBitrateInKbps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::NewProp_totalBitrateInKbps = { "totalBitrateInKbps", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerPlaybackStats, totalBitrateInKbps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_totalBitrateInKbps_MetaData), NewProp_totalBitrateInKbps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::NewProp_videoFps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::NewProp_videoBitrateInKbps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::NewProp_audioBitrateInKbps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::NewProp_totalBitrateInKbps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	&NewStructOps,
	"PlayerPlaybackStats",
	Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::PropPointers),
	sizeof(FPlayerPlaybackStats),
	alignof(FPlayerPlaybackStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerPlaybackStats()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerPlaybackStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerPlaybackStats.InnerSingleton, Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerPlaybackStats.InnerSingleton;
}
// End ScriptStruct FPlayerPlaybackStats

// Begin ScriptStruct FPlayerUpdatedInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo;
class UScriptStruct* FPlayerUpdatedInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerUpdatedInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("PlayerUpdatedInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FPlayerUpdatedInfo>()
{
	return FPlayerUpdatedInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_internalPlayerUuid_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceId_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_videoHeight_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_videoWidth_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_audioSampleRate_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_audioChannels_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_audioBitsPerSample_MetaData[] = {
		{ "Category", "Agora|PlayerUpdatedInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_internalPlayerUuid;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_videoHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_videoWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_audioSampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_audioChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_audioBitsPerSample;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerUpdatedInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_internalPlayerUuid = { "internalPlayerUuid", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, internalPlayerUuid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_internalPlayerUuid_MetaData), NewProp_internalPlayerUuid_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, deviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceId_MetaData), NewProp_deviceId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_videoHeight = { "videoHeight", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, videoHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_videoHeight_MetaData), NewProp_videoHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_videoWidth = { "videoWidth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, videoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_videoWidth_MetaData), NewProp_videoWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_audioSampleRate = { "audioSampleRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, audioSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_audioSampleRate_MetaData), NewProp_audioSampleRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_audioChannels = { "audioChannels", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, audioChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_audioChannels_MetaData), NewProp_audioChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_audioBitsPerSample = { "audioBitsPerSample", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerUpdatedInfo, audioBitsPerSample), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_audioBitsPerSample_MetaData), NewProp_audioBitsPerSample_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_internalPlayerUuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_videoHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_videoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_audioSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_audioChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewProp_audioBitsPerSample,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	&NewStructOps,
	"PlayerUpdatedInfo",
	Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::PropPointers),
	sizeof(FPlayerUpdatedInfo),
	alignof(FPlayerUpdatedInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerUpdatedInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo.InnerSingleton;
}
// End ScriptStruct FPlayerUpdatedInfo

// Begin Delegate FOnPlayerSourceStateChanged
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms
	{
		EMEDIA_PLAYER_STATE state;
		FENUMWRAP_MEDIA_PLAYER_REASON ec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms, state), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE, METADATA_PARAMS(0, nullptr) }; // 3809826952
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec = { "ec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms, ec), Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON, METADATA_PARAMS(0, nullptr) }; // 2614981956
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::NewProp_ec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerSourceStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerSourceStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSourceStateChanged, EMEDIA_PLAYER_STATE state, FENUMWRAP_MEDIA_PLAYER_REASON ec)
{
	struct _Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms
	{
		EMEDIA_PLAYER_STATE state;
		FENUMWRAP_MEDIA_PLAYER_REASON ec;
	};
	_Script_AgoraPlugin_eventOnPlayerSourceStateChanged_Parms Parms;
	Parms.state=state;
	Parms.ec=ec;
	OnPlayerSourceStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerSourceStateChanged

// Begin Delegate FOnPositionChanged
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnPositionChanged_Parms
	{
		int64 position_ms;
		int64 timestampMs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_position_ms;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_timestampMs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_position_ms = { "position_ms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPositionChanged_Parms, position_ms), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_timestampMs = { "timestampMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPositionChanged_Parms, timestampMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_position_ms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::NewProp_timestampMs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPositionChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPositionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPositionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPositionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPositionChanged, int64 position_ms, int64 timestampMs)
{
	struct _Script_AgoraPlugin_eventOnPositionChanged_Parms
	{
		int64 position_ms;
		int64 timestampMs;
	};
	_Script_AgoraPlugin_eventOnPositionChanged_Parms Parms;
	Parms.position_ms=position_ms;
	Parms.timestampMs=timestampMs;
	OnPositionChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPositionChanged

// Begin Delegate FOnPlayerEvent
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnPlayerEvent_Parms
	{
		TEnumAsByte<EMEDIA_PLAYER_EVENT> eventCode;
		int64 elapsedTime;
		FString message;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_eventCode;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_elapsedTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode = { "eventCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, eventCode), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT, METADATA_PARAMS(0, nullptr) }; // 1608145119
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_elapsedTime = { "elapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, elapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerEvent_Parms, message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_message_MetaData), NewProp_message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_eventCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_elapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::NewProp_message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerEvent, EMEDIA_PLAYER_EVENT eventCode, int64 elapsedTime, const FString& message)
{
	struct _Script_AgoraPlugin_eventOnPlayerEvent_Parms
	{
		TEnumAsByte<EMEDIA_PLAYER_EVENT> eventCode;
		int64 elapsedTime;
		FString message;
	};
	_Script_AgoraPlugin_eventOnPlayerEvent_Parms Parms;
	Parms.eventCode=eventCode;
	Parms.elapsedTime=elapsedTime;
	Parms.message=message;
	OnPlayerEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerEvent

// Begin Delegate FOnMetaDataSource
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnMetaDataSource_Parms
	{
		FString Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnMetaDataSource_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnMetaDataSource__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMetaDataSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnMetaDataSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMetaDataSource_DelegateWrapper(const FMulticastScriptDelegate& OnMetaDataSource, const FString& Data)
{
	struct _Script_AgoraPlugin_eventOnMetaDataSource_Parms
	{
		FString Data;
	};
	_Script_AgoraPlugin_eventOnMetaDataSource_Parms Parms;
	Parms.Data=Data;
	OnMetaDataSource.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMetaDataSource

// Begin Delegate FOnPlayBufferUpdated
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms
	{
		int64 playCachedBuffer;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_playCachedBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::NewProp_playCachedBuffer = { "playCachedBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms, playCachedBuffer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::NewProp_playCachedBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayBufferUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayBufferUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayBufferUpdated, int64 playCachedBuffer)
{
	struct _Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms
	{
		int64 playCachedBuffer;
	};
	_Script_AgoraPlugin_eventOnPlayBufferUpdated_Parms Parms;
	Parms.playCachedBuffer=playCachedBuffer;
	OnPlayBufferUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayBufferUpdated

// Begin Delegate FOnPreloadEvent
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnPreloadEvent_Parms
	{
		FString src;
		EPLAYER_PRELOAD_EVENT event;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_src;
	static const UECodeGen_Private::FBytePropertyParams NewProp_event_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreloadEvent_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_src_MetaData), NewProp_src_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPreloadEvent_Parms, event), Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT, METADATA_PARAMS(0, nullptr) }; // 2127709764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_src,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::NewProp_event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPreloadEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPreloadEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPreloadEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPreloadEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPreloadEvent, const FString& src, EPLAYER_PRELOAD_EVENT event)
{
	struct _Script_AgoraPlugin_eventOnPreloadEvent_Parms
	{
		FString src;
		EPLAYER_PRELOAD_EVENT event;
	};
	_Script_AgoraPlugin_eventOnPreloadEvent_Parms Parms;
	Parms.src=src;
	Parms.event=event;
	OnPreloadEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPreloadEvent

// Begin Delegate FOnCompleted
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnCompleted)
{
	OnCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnCompleted

// Begin Delegate FOnAgoraCDNTokenWillExpire
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnAgoraCDNTokenWillExpire__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAgoraCDNTokenWillExpire_DelegateWrapper(const FMulticastScriptDelegate& OnAgoraCDNTokenWillExpire)
{
	OnAgoraCDNTokenWillExpire.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnAgoraCDNTokenWillExpire

// Begin Delegate FOnPlayerSrcInfoChanged
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms
	{
		FSrcInfo from;
		FSrcInfo to;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_from_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_to_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_from;
	static const UECodeGen_Private::FStructPropertyParams NewProp_to;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms, from), Z_Construct_UScriptStruct_FSrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_from_MetaData), NewProp_from_MetaData) }; // 2292425353
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms, to), Z_Construct_UScriptStruct_FSrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_to_MetaData), NewProp_to_MetaData) }; // 2292425353
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_from,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::NewProp_to,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerSrcInfoChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerSrcInfoChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerSrcInfoChanged, FSrcInfo const& from, FSrcInfo const& to)
{
	struct _Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms
	{
		FSrcInfo from;
		FSrcInfo to;
	};
	_Script_AgoraPlugin_eventOnPlayerSrcInfoChanged_Parms Parms;
	Parms.from=from;
	Parms.to=to;
	OnPlayerSrcInfoChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerSrcInfoChanged

// Begin Delegate FOnPlayerInfoUpdated
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms
	{
		FPlayerUpdatedInfo info;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms, info), Z_Construct_UScriptStruct_FPlayerUpdatedInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_info_MetaData), NewProp_info_MetaData) }; // 3087382686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerInfoUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInfoUpdated, FPlayerUpdatedInfo const& info)
{
	struct _Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms
	{
		FPlayerUpdatedInfo info;
	};
	_Script_AgoraPlugin_eventOnPlayerInfoUpdated_Parms Parms;
	Parms.info=info;
	OnPlayerInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerInfoUpdated

// Begin Delegate FOnAudioVolumeIndicationSource
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms
	{
		int32 volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::NewProp_volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnAudioVolumeIndicationSource__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAudioVolumeIndicationSource_DelegateWrapper(const FMulticastScriptDelegate& OnAudioVolumeIndicationSource, int32 volume)
{
	struct _Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms
	{
		int32 volume;
	};
	_Script_AgoraPlugin_eventOnAudioVolumeIndicationSource_Parms Parms;
	Parms.volume=volume;
	OnAudioVolumeIndicationSource.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnAudioVolumeIndicationSource

// Begin Delegate FOnPlayerCacheStats
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnPlayerCacheStats_Parms
	{
		FCacheStatistics stats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerCacheStats_Parms, stats), Z_Construct_UScriptStruct_FCacheStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stats_MetaData), NewProp_stats_MetaData) }; // 3318751033
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::NewProp_stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerCacheStats__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerCacheStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerCacheStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerCacheStats_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerCacheStats, FCacheStatistics const& stats)
{
	struct _Script_AgoraPlugin_eventOnPlayerCacheStats_Parms
	{
		FCacheStatistics stats;
	};
	_Script_AgoraPlugin_eventOnPlayerCacheStats_Parms Parms;
	Parms.stats=stats;
	OnPlayerCacheStats.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerCacheStats

// Begin Delegate FOnPlayerPlaybackStats
struct Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics
{
	struct _Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms
	{
		FPlayerPlaybackStats stats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms, stats), Z_Construct_UScriptStruct_FPlayerPlaybackStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stats_MetaData), NewProp_stats_MetaData) }; // 3430406648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::NewProp_stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin, nullptr, "OnPlayerPlaybackStats__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::_Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerPlaybackStats_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerPlaybackStats, FPlayerPlaybackStats const& stats)
{
	struct _Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms
	{
		FPlayerPlaybackStats stats;
	};
	_Script_AgoraPlugin_eventOnPlayerPlaybackStats_Parms Parms;
	Parms.stats=stats;
	OnPlayerPlaybackStats.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerPlaybackStats

// Begin Class UAgoraBPuIMediaPlayerSourceObserver Function AddBlueprintCallbackExecutor
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics
{
	struct AgoraBPuIMediaPlayerSourceObserver_eventAddBlueprintCallbackExecutor_Parms
	{
		UAgoraBPuIMediaPlayerSourceObserverCBExecutor* Executor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// You could add multiple executors to the target handler\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "You could add multiple executors to the target handler" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Executor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::NewProp_Executor = { "Executor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserver_eventAddBlueprintCallbackExecutor_Parms, Executor), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::NewProp_Executor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver, nullptr, "AddBlueprintCallbackExecutor", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::AgoraBPuIMediaPlayerSourceObserver_eventAddBlueprintCallbackExecutor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::AgoraBPuIMediaPlayerSourceObserver_eventAddBlueprintCallbackExecutor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserver::execAddBlueprintCallbackExecutor)
{
	P_GET_OBJECT(UAgoraBPuIMediaPlayerSourceObserverCBExecutor,Z_Param_Executor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBlueprintCallbackExecutor(Z_Param_Executor);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserver Function AddBlueprintCallbackExecutor

// Begin Class UAgoraBPuIMediaPlayerSourceObserver Function RemoveAllBlueprintCallbackExecutors
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver, nullptr, "RemoveAllBlueprintCallbackExecutors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserver::execRemoveAllBlueprintCallbackExecutors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllBlueprintCallbackExecutors();
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserver Function RemoveAllBlueprintCallbackExecutors

// Begin Class UAgoraBPuIMediaPlayerSourceObserver
void UAgoraBPuIMediaPlayerSourceObserver::StaticRegisterNativesUAgoraBPuIMediaPlayerSourceObserver()
{
	UClass* Class = UAgoraBPuIMediaPlayerSourceObserver::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBlueprintCallbackExecutor", &UAgoraBPuIMediaPlayerSourceObserver::execAddBlueprintCallbackExecutor },
		{ "RemoveAllBlueprintCallbackExecutors", &UAgoraBPuIMediaPlayerSourceObserver::execRemoveAllBlueprintCallbackExecutors },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuIMediaPlayerSourceObserver);
UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_NoRegister()
{
	return UAgoraBPuIMediaPlayerSourceObserver::StaticClass();
}
struct Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSourceStateChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPositionChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerEvent_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMetaData_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayBufferUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPreloadEvent_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAgoraCDNTokenWillExpire_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerSrcInfoChanged_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerInfoUpdated_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerCacheStats_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerPlaybackStats_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioVolumeIndication_MetaData[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSourceStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPositionChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMetaData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayBufferUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreloadEvent;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAgoraCDNTokenWillExpire;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerSrcInfoChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerInfoUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerCacheStats;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerPlaybackStats;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioVolumeIndication;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_AddBlueprintCallbackExecutor, "AddBlueprintCallbackExecutor" }, // 3983296267
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserver_RemoveAllBlueprintCallbackExecutors, "RemoveAllBlueprintCallbackExecutors" }, // 3115180911
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuIMediaPlayerSourceObserver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged = { "OnPlayerSourceStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerSourceStateChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSourceStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerSourceStateChanged_MetaData), NewProp_OnPlayerSourceStateChanged_MetaData) }; // 1879806887
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged = { "OnPositionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPositionChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPositionChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPositionChanged_MetaData), NewProp_OnPositionChanged_MetaData) }; // 1154508719
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent = { "OnPlayerEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerEvent), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerEvent_MetaData), NewProp_OnPlayerEvent_MetaData) }; // 1745334373
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData = { "OnMetaData", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnMetaData), Z_Construct_UDelegateFunction_AgoraPlugin_OnMetaDataSource__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMetaData_MetaData), NewProp_OnMetaData_MetaData) }; // 435409237
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated = { "OnPlayBufferUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayBufferUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayBufferUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayBufferUpdated_MetaData), NewProp_OnPlayBufferUpdated_MetaData) }; // 291026369
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent = { "OnPreloadEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPreloadEvent), Z_Construct_UDelegateFunction_AgoraPlugin_OnPreloadEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPreloadEvent_MetaData), NewProp_OnPreloadEvent_MetaData) }; // 1076611081
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnCompleted), Z_Construct_UDelegateFunction_AgoraPlugin_OnCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnCompleted_MetaData), NewProp_OnCompleted_MetaData) }; // 1422727386
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire = { "OnAgoraCDNTokenWillExpire", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnAgoraCDNTokenWillExpire), Z_Construct_UDelegateFunction_AgoraPlugin_OnAgoraCDNTokenWillExpire__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAgoraCDNTokenWillExpire_MetaData), NewProp_OnAgoraCDNTokenWillExpire_MetaData) }; // 63580380
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged = { "OnPlayerSrcInfoChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerSrcInfoChanged), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerSrcInfoChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerSrcInfoChanged_MetaData), NewProp_OnPlayerSrcInfoChanged_MetaData) }; // 3046330768
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated = { "OnPlayerInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerInfoUpdated), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerInfoUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerInfoUpdated_MetaData), NewProp_OnPlayerInfoUpdated_MetaData) }; // 1079957524
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerCacheStats = { "OnPlayerCacheStats", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerCacheStats), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerCacheStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerCacheStats_MetaData), NewProp_OnPlayerCacheStats_MetaData) }; // 1790391940
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerPlaybackStats = { "OnPlayerPlaybackStats", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnPlayerPlaybackStats), Z_Construct_UDelegateFunction_AgoraPlugin_OnPlayerPlaybackStats__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerPlaybackStats_MetaData), NewProp_OnPlayerPlaybackStats_MetaData) }; // 1321852383
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication = { "OnAudioVolumeIndication", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuIMediaPlayerSourceObserver, OnAudioVolumeIndication), Z_Construct_UDelegateFunction_AgoraPlugin_OnAudioVolumeIndicationSource__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAudioVolumeIndication_MetaData), NewProp_OnAudioVolumeIndication_MetaData) }; // 3882784085
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSourceStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPositionChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnMetaData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayBufferUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPreloadEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAgoraCDNTokenWillExpire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerSrcInfoChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerInfoUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerCacheStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnPlayerPlaybackStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::NewProp_OnAudioVolumeIndication,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::ClassParams = {
	&UAgoraBPuIMediaPlayerSourceObserver::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver()
{
	if (!Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserver.OuterSingleton, Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserver.OuterSingleton;
}
template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuIMediaPlayerSourceObserver>()
{
	return UAgoraBPuIMediaPlayerSourceObserver::StaticClass();
}
UAgoraBPuIMediaPlayerSourceObserver::UAgoraBPuIMediaPlayerSourceObserver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuIMediaPlayerSourceObserver);
UAgoraBPuIMediaPlayerSourceObserver::~UAgoraBPuIMediaPlayerSourceObserver() {}
// End Class UAgoraBPuIMediaPlayerSourceObserver

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnAgoraCDNTokenWillExpire
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire = FName(TEXT("OnAgoraCDNTokenWillExpire"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnAgoraCDNTokenWillExpire()
{
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire),NULL);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnAgoraCDNTokenWillExpire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnAgoraCDNTokenWillExpire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAgoraCDNTokenWillExpire_Implementation();
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnAgoraCDNTokenWillExpire

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnAudioVolumeIndication
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms
{
	int32 volume;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication = FName(TEXT("OnAudioVolumeIndication"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnAudioVolumeIndication(int32 volume)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms Parms;
	Parms.volume=volume;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::NewProp_volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnAudioVolumeIndication", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnAudioVolumeIndication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnAudioVolumeIndication)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAudioVolumeIndication_Implementation(Z_Param_volume);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnAudioVolumeIndication

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnCompleted
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted = FName(TEXT("OnCompleted"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnCompleted()
{
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted),NULL);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompleted_Implementation();
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnCompleted

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnMetaData
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms
{
	FString Data;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData = FName(TEXT("OnMetaData"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnMetaData(const FString& Data)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms Parms;
	Parms.Data=Data;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms, Data), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnMetaData", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnMetaData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnMetaData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMetaData_Implementation(Z_Param_Data);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnMetaData

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayBufferUpdated
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms
{
	int64 playCachedBuffer;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated = FName(TEXT("OnPlayBufferUpdated"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayBufferUpdated(int64 playCachedBuffer)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms Parms;
	Parms.playCachedBuffer=playCachedBuffer;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_playCachedBuffer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::NewProp_playCachedBuffer = { "playCachedBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms, playCachedBuffer), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::NewProp_playCachedBuffer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayBufferUpdated", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayBufferUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayBufferUpdated)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_playCachedBuffer);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayBufferUpdated_Implementation(Z_Param_playCachedBuffer);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayBufferUpdated

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerCacheStats
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms
{
	FCacheStatistics stats;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats = FName(TEXT("OnPlayerCacheStats"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerCacheStats(FCacheStatistics const& stats)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms Parms;
	Parms.stats=stats;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms, stats), Z_Construct_UScriptStruct_FCacheStatistics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stats_MetaData), NewProp_stats_MetaData) }; // 3318751033
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::NewProp_stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerCacheStats", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerCacheStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerCacheStats)
{
	P_GET_STRUCT_REF(FCacheStatistics,Z_Param_Out_stats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerCacheStats_Implementation(Z_Param_Out_stats);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerCacheStats

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerEvent
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms
{
	TEnumAsByte<EMEDIA_PLAYER_EVENT> eventCode;
	int64 elapsedTime;
	FString message;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent = FName(TEXT("OnPlayerEvent"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerEvent(EMEDIA_PLAYER_EVENT eventCode, int64 elapsedTime, const FString& message)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms Parms;
	Parms.eventCode=eventCode;
	Parms.elapsedTime=elapsedTime;
	Parms.message=message;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_eventCode;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_elapsedTime;
	static const UECodeGen_Private::FStrPropertyParams NewProp_message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_eventCode = { "eventCode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms, eventCode), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_EVENT, METADATA_PARAMS(0, nullptr) }; // 1608145119
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_elapsedTime = { "elapsedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms, elapsedTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms, message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_message_MetaData), NewProp_message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_eventCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_elapsedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::NewProp_message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerEvent", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerEvent)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_eventCode);
	P_GET_PROPERTY(FInt64Property,Z_Param_elapsedTime);
	P_GET_PROPERTY(FStrProperty,Z_Param_message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerEvent_Implementation(EMEDIA_PLAYER_EVENT(Z_Param_eventCode),Z_Param_elapsedTime,Z_Param_message);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerEvent

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerInfoUpdated
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms
{
	FPlayerUpdatedInfo info;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated = FName(TEXT("OnPlayerInfoUpdated"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerInfoUpdated(FPlayerUpdatedInfo const& info)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms Parms;
	Parms.info=info;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_info_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms, info), Z_Construct_UScriptStruct_FPlayerUpdatedInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_info_MetaData), NewProp_info_MetaData) }; // 3087382686
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::NewProp_info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerInfoUpdated", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerInfoUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerInfoUpdated)
{
	P_GET_STRUCT_REF(FPlayerUpdatedInfo,Z_Param_Out_info);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerInfoUpdated_Implementation(Z_Param_Out_info);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerInfoUpdated

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerPlaybackStats
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms
{
	FPlayerPlaybackStats stats;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats = FName(TEXT("OnPlayerPlaybackStats"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerPlaybackStats(FPlayerPlaybackStats const& stats)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms Parms;
	Parms.stats=stats;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stats_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::NewProp_stats = { "stats", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms, stats), Z_Construct_UScriptStruct_FPlayerPlaybackStats, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stats_MetaData), NewProp_stats_MetaData) }; // 3430406648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::NewProp_stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerPlaybackStats", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerPlaybackStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerPlaybackStats)
{
	P_GET_STRUCT_REF(FPlayerPlaybackStats,Z_Param_Out_stats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerPlaybackStats_Implementation(Z_Param_Out_stats);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerPlaybackStats

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerSourceStateChanged
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms
{
	EMEDIA_PLAYER_STATE state;
	FENUMWRAP_MEDIA_PLAYER_REASON ec;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged = FName(TEXT("OnPlayerSourceStateChanged"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerSourceStateChanged(EMEDIA_PLAYER_STATE state, FENUMWRAP_MEDIA_PLAYER_REASON ec)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms Parms;
	Parms.state=state;
	Parms.ec=ec;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_state;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms, state), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE, METADATA_PARAMS(0, nullptr) }; // 3809826952
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_ec = { "ec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms, ec), Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON, METADATA_PARAMS(0, nullptr) }; // 2614981956
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_state_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_state,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::NewProp_ec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerSourceStateChanged", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSourceStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerSourceStateChanged)
{
	P_GET_ENUM(EMEDIA_PLAYER_STATE,Z_Param_state);
	P_GET_STRUCT(FENUMWRAP_MEDIA_PLAYER_REASON,Z_Param_ec);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerSourceStateChanged_Implementation(EMEDIA_PLAYER_STATE(Z_Param_state),Z_Param_ec);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerSourceStateChanged

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerSrcInfoChanged
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms
{
	FSrcInfo from;
	FSrcInfo to;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged = FName(TEXT("OnPlayerSrcInfoChanged"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPlayerSrcInfoChanged(FSrcInfo const& from, FSrcInfo const& to)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms Parms;
	Parms.from=from;
	Parms.to=to;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_from_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_to_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_from;
	static const UECodeGen_Private::FStructPropertyParams NewProp_to;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_from = { "from", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms, from), Z_Construct_UScriptStruct_FSrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_from_MetaData), NewProp_from_MetaData) }; // 2292425353
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_to = { "to", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms, to), Z_Construct_UScriptStruct_FSrcInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_to_MetaData), NewProp_to_MetaData) }; // 2292425353
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_from,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::NewProp_to,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPlayerSrcInfoChanged", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPlayerSrcInfoChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerSrcInfoChanged)
{
	P_GET_STRUCT_REF(FSrcInfo,Z_Param_Out_from);
	P_GET_STRUCT_REF(FSrcInfo,Z_Param_Out_to);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerSrcInfoChanged_Implementation(Z_Param_Out_from,Z_Param_Out_to);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPlayerSrcInfoChanged

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPositionChanged
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms
{
	int64 position_ms;
	int64 timestampMs;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged = FName(TEXT("OnPositionChanged"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPositionChanged(int64 position_ms, int64 timestampMs)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms Parms;
	Parms.position_ms=position_ms;
	Parms.timestampMs=timestampMs;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_position_ms;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_timestampMs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::NewProp_position_ms = { "position_ms", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms, position_ms), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::NewProp_timestampMs = { "timestampMs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms, timestampMs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::NewProp_position_ms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::NewProp_timestampMs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPositionChanged", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPositionChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPositionChanged)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_position_ms);
	P_GET_PROPERTY(FInt64Property,Z_Param_timestampMs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPositionChanged_Implementation(Z_Param_position_ms,Z_Param_timestampMs);
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPositionChanged

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPreloadEvent
struct AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms
{
	FString src;
	EPLAYER_PRELOAD_EVENT event;
};
static FName NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent = FName(TEXT("OnPreloadEvent"));
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::OnPreloadEvent(const FString& src, EPLAYER_PRELOAD_EVENT event)
{
	AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms Parms;
	Parms.src=src;
	Parms.event=event;
	ProcessEvent(FindFunctionChecked(NAME_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent),&Parms);
}
struct Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|Event" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_src;
	static const UECodeGen_Private::FBytePropertyParams NewProp_event_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_src_MetaData), NewProp_src_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_event_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_event = { "event", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms, event), Z_Construct_UEnum_AgoraPlugin_EPLAYER_PRELOAD_EVENT, METADATA_PARAMS(0, nullptr) }; // 2127709764
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_src,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_event_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::NewProp_event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, nullptr, "OnPreloadEvent", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::PropPointers), sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(AgoraBPuIMediaPlayerSourceObserverCBExecutor_eventOnPreloadEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPreloadEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_src);
	P_GET_ENUM(EPLAYER_PRELOAD_EVENT,Z_Param_event);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPreloadEvent_Implementation(Z_Param_src,EPLAYER_PRELOAD_EVENT(Z_Param_event));
	P_NATIVE_END;
}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor Function OnPreloadEvent

// Begin Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor
void UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticRegisterNativesUAgoraBPuIMediaPlayerSourceObserverCBExecutor()
{
	UClass* Class = UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAgoraCDNTokenWillExpire", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnAgoraCDNTokenWillExpire },
		{ "OnAudioVolumeIndication", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnAudioVolumeIndication },
		{ "OnCompleted", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnCompleted },
		{ "OnMetaData", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnMetaData },
		{ "OnPlayBufferUpdated", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayBufferUpdated },
		{ "OnPlayerCacheStats", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerCacheStats },
		{ "OnPlayerEvent", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerEvent },
		{ "OnPlayerInfoUpdated", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerInfoUpdated },
		{ "OnPlayerPlaybackStats", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerPlaybackStats },
		{ "OnPlayerSourceStateChanged", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerSourceStateChanged },
		{ "OnPlayerSrcInfoChanged", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPlayerSrcInfoChanged },
		{ "OnPositionChanged", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPositionChanged },
		{ "OnPreloadEvent", &UAgoraBPuIMediaPlayerSourceObserverCBExecutor::execOnPreloadEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuIMediaPlayerSourceObserverCBExecutor);
UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_NoRegister()
{
	return UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass();
}
struct Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// this is a blueprint callback executor which you could add to the target handler\n" },
#endif
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuIMediaPlayerSourceObserver.h" },
		{ "ShowWorldContextPin", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this is a blueprint callback executor which you could add to the target handler" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAgoraCDNTokenWillExpire, "OnAgoraCDNTokenWillExpire" }, // 2791772201
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnAudioVolumeIndication, "OnAudioVolumeIndication" }, // 2694479265
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnCompleted, "OnCompleted" }, // 1955014380
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnMetaData, "OnMetaData" }, // 3768162082
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayBufferUpdated, "OnPlayBufferUpdated" }, // 2023503228
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerCacheStats, "OnPlayerCacheStats" }, // 461541534
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerEvent, "OnPlayerEvent" }, // 2816786433
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerInfoUpdated, "OnPlayerInfoUpdated" }, // 3404947015
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerPlaybackStats, "OnPlayerPlaybackStats" }, // 1108374457
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSourceStateChanged, "OnPlayerSourceStateChanged" }, // 35898784
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPlayerSrcInfoChanged, "OnPlayerSrcInfoChanged" }, // 535497324
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPositionChanged, "OnPositionChanged" }, // 1276136228
		{ &Z_Construct_UFunction_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_OnPreloadEvent, "OnPreloadEvent" }, // 3448677972
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuIMediaPlayerSourceObserverCBExecutor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::ClassParams = {
	&UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor()
{
	if (!Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor.OuterSingleton, Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor.OuterSingleton;
}
template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuIMediaPlayerSourceObserverCBExecutor>()
{
	return UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass();
}
UAgoraBPuIMediaPlayerSourceObserverCBExecutor::UAgoraBPuIMediaPlayerSourceObserverCBExecutor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuIMediaPlayerSourceObserverCBExecutor);
UAgoraBPuIMediaPlayerSourceObserverCBExecutor::~UAgoraBPuIMediaPlayerSourceObserverCBExecutor() {}
// End Class UAgoraBPuIMediaPlayerSourceObserverCBExecutor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EENUMCUSTOM_MEDIA_PLAYER_REASON_StaticEnum, TEXT("EENUMCUSTOM_MEDIA_PLAYER_REASON"), &Z_Registration_Info_UEnum_EENUMCUSTOM_MEDIA_PLAYER_REASON, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3934901920U) },
		{ EMEDIA_PLAYER_EVENT_StaticEnum, TEXT("EMEDIA_PLAYER_EVENT"), &Z_Registration_Info_UEnum_EMEDIA_PLAYER_EVENT, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1608145119U) },
		{ EPLAYER_PRELOAD_EVENT_StaticEnum, TEXT("EPLAYER_PRELOAD_EVENT"), &Z_Registration_Info_UEnum_EPLAYER_PRELOAD_EVENT, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2127709764U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FENUMWRAP_MEDIA_PLAYER_REASON::StaticStruct, Z_Construct_UScriptStruct_FENUMWRAP_MEDIA_PLAYER_REASON_Statics::NewStructOps, TEXT("ENUMWRAP_MEDIA_PLAYER_REASON"), &Z_Registration_Info_UScriptStruct_ENUMWRAP_MEDIA_PLAYER_REASON, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FENUMWRAP_MEDIA_PLAYER_REASON), 2614981956U) },
		{ FSrcInfo::StaticStruct, Z_Construct_UScriptStruct_FSrcInfo_Statics::NewStructOps, TEXT("SrcInfo"), &Z_Registration_Info_UScriptStruct_SrcInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSrcInfo), 2292425353U) },
		{ FCacheStatistics::StaticStruct, Z_Construct_UScriptStruct_FCacheStatistics_Statics::NewStructOps, TEXT("CacheStatistics"), &Z_Registration_Info_UScriptStruct_CacheStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCacheStatistics), 3318751033U) },
		{ FPlayerPlaybackStats::StaticStruct, Z_Construct_UScriptStruct_FPlayerPlaybackStats_Statics::NewStructOps, TEXT("PlayerPlaybackStats"), &Z_Registration_Info_UScriptStruct_PlayerPlaybackStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerPlaybackStats), 3430406648U) },
		{ FPlayerUpdatedInfo::StaticStruct, Z_Construct_UScriptStruct_FPlayerUpdatedInfo_Statics::NewStructOps, TEXT("PlayerUpdatedInfo"), &Z_Registration_Info_UScriptStruct_PlayerUpdatedInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerUpdatedInfo), 3087382686U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver, UAgoraBPuIMediaPlayerSourceObserver::StaticClass, TEXT("UAgoraBPuIMediaPlayerSourceObserver"), &Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuIMediaPlayerSourceObserver), 2249588667U) },
		{ Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, UAgoraBPuIMediaPlayerSourceObserverCBExecutor::StaticClass, TEXT("UAgoraBPuIMediaPlayerSourceObserverCBExecutor"), &Z_Registration_Info_UClass_UAgoraBPuIMediaPlayerSourceObserverCBExecutor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuIMediaPlayerSourceObserverCBExecutor), 150243947U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_35315149(TEXT("/Script/AgoraPlugin"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuIMediaPlayerSourceObserver_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
