// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraBPuBaseDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraBPuMediaPlayer() {}

// Begin Cross Module References
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_NoRegister();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuMediaPlayer();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuMediaPlayer_NoRegister();
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EAgoraOptional();
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE();
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE();
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE();
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_ERENDER_MODE_TYPE();
AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAgoraMediaSource();
AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStreamInfo();
AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSpatialAudioParams();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References

// Begin ScriptStruct FAgoraMediaSource
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AgoraMediaSource;
class UScriptStruct* FAgoraMediaSource::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AgoraMediaSource.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AgoraMediaSource.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAgoraMediaSource, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("AgoraMediaSource"));
	}
	return Z_Registration_Info_UScriptStruct_AgoraMediaSource.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FAgoraMediaSource>()
{
	return FAgoraMediaSource::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAgoraMediaSource_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_uri_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startPos_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_autoPlay_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enableCache_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_enableMultiAudioTrack_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isAgoraSource_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLiveSource_MetaData[] = {
		{ "Category", "Agora|MediaSource" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_url;
	static const UECodeGen_Private::FStrPropertyParams NewProp_uri;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
	static void NewProp_autoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_autoPlay;
	static void NewProp_enableCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enableCache;
	static void NewProp_enableMultiAudioTrack_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enableMultiAudioTrack;
	static const UECodeGen_Private::FBytePropertyParams NewProp_isAgoraSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_isAgoraSource;
	static const UECodeGen_Private::FBytePropertyParams NewProp_isLiveSource_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_isLiveSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAgoraMediaSource>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_url_MetaData), NewProp_url_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri = { "uri", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, uri), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_uri_MetaData), NewProp_uri_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, startPos), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startPos_MetaData), NewProp_startPos_MetaData) };
void Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_SetBit(void* Obj)
{
	((FAgoraMediaSource*)Obj)->autoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay = { "autoPlay", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAgoraMediaSource), &Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_autoPlay_MetaData), NewProp_autoPlay_MetaData) };
void Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_SetBit(void* Obj)
{
	((FAgoraMediaSource*)Obj)->enableCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache = { "enableCache", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAgoraMediaSource), &Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enableCache_MetaData), NewProp_enableCache_MetaData) };
void Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableMultiAudioTrack_SetBit(void* Obj)
{
	((FAgoraMediaSource*)Obj)->enableMultiAudioTrack = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableMultiAudioTrack = { "enableMultiAudioTrack", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAgoraMediaSource), &Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableMultiAudioTrack_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_enableMultiAudioTrack_MetaData), NewProp_enableMultiAudioTrack_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource = { "isAgoraSource", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, isAgoraSource), Z_Construct_UEnum_AgoraPlugin_EAgoraOptional, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAgoraSource_MetaData), NewProp_isAgoraSource_MetaData) }; // 369006852
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource = { "isLiveSource", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAgoraMediaSource, isLiveSource), Z_Construct_UEnum_AgoraPlugin_EAgoraOptional, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLiveSource_MetaData), NewProp_isLiveSource_MetaData) }; // 369006852
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_uri,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_startPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_autoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_enableMultiAudioTrack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isAgoraSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewProp_isLiveSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	&NewStructOps,
	"AgoraMediaSource",
	Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::PropPointers),
	sizeof(FAgoraMediaSource),
	alignof(FAgoraMediaSource),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAgoraMediaSource()
{
	if (!Z_Registration_Info_UScriptStruct_AgoraMediaSource.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AgoraMediaSource.InnerSingleton, Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AgoraMediaSource.InnerSingleton;
}
// End ScriptStruct FAgoraMediaSource

// Begin Enum EAUDIO_DUAL_MONO_MODE
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE;
static UEnum* EAUDIO_DUAL_MONO_MODE_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EAUDIO_DUAL_MONO_MODE"));
	}
	return Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.OuterSingleton;
}
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAUDIO_DUAL_MONO_MODE>()
{
	return EAUDIO_DUAL_MONO_MODE_StaticEnum();
}
struct Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AUDIO_DUAL_MONO_L.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L" },
		{ "AUDIO_DUAL_MONO_MIX.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX" },
		{ "AUDIO_DUAL_MONO_R.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R" },
		{ "AUDIO_DUAL_MONO_STEREO.Name", "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_STEREO },
		{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_L },
		{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_R },
		{ "EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX", (int64)EAUDIO_DUAL_MONO_MODE::AUDIO_DUAL_MONO_MIX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	"EAUDIO_DUAL_MONO_MODE",
	"EAUDIO_DUAL_MONO_MODE",
	Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE()
{
	if (!Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE.InnerSingleton;
}
// End Enum EAUDIO_DUAL_MONO_MODE

// Begin Enum EMEDIA_STREAM_TYPE
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE;
static UEnum* EMEDIA_STREAM_TYPE_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EMEDIA_STREAM_TYPE"));
	}
	return Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.OuterSingleton;
}
template<> AGORAPLUGIN_API UEnum* StaticEnum<EMEDIA_STREAM_TYPE>()
{
	return EMEDIA_STREAM_TYPE_StaticEnum();
}
struct Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
		{ "STREAM_TYPE_AUDIO.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO" },
		{ "STREAM_TYPE_SUBTITLE.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE" },
		{ "STREAM_TYPE_UNKNOWN.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN" },
		{ "STREAM_TYPE_VIDEO.Name", "EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_UNKNOWN },
		{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_VIDEO },
		{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_AUDIO },
		{ "EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE", (int64)EMEDIA_STREAM_TYPE::STREAM_TYPE_SUBTITLE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	"EMEDIA_STREAM_TYPE",
	"EMEDIA_STREAM_TYPE",
	Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE()
{
	if (!Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE.InnerSingleton;
}
// End Enum EMEDIA_STREAM_TYPE

// Begin ScriptStruct FPlayerStreamInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerStreamInfo;
class UScriptStruct* FPlayerStreamInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStreamInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerStreamInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerStreamInfo, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("PlayerStreamInfo"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerStreamInfo.OuterSingleton;
}
template<> AGORAPLUGIN_API UScriptStruct* StaticStruct<FPlayerStreamInfo>()
{
	return FPlayerStreamInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_streamIndex_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_streamType_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_codecName_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_language_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_videoFrameRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_videoBitRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_videoWidth_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_videoHeight_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_videoRotation_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_audioSampleRate_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_audioChannels_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_audioBitsPerSample_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_duration_MetaData[] = {
		{ "Category", "Agora|PlayerStreamInfo" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_streamIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_streamType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_streamType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_codecName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_language;
	static const UECodeGen_Private::FIntPropertyParams NewProp_videoFrameRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_videoBitRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_videoWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_videoHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_videoRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_audioSampleRate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_audioChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_audioBitsPerSample;
	static const UECodeGen_Private::FIntPropertyParams NewProp_duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerStreamInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex = { "streamIndex", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, streamIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_streamIndex_MetaData), NewProp_streamIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType = { "streamType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, streamType), Z_Construct_UEnum_AgoraPlugin_EMEDIA_STREAM_TYPE, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_streamType_MetaData), NewProp_streamType_MetaData) }; // 4165533125
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName = { "codecName", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, codecName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_codecName_MetaData), NewProp_codecName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language = { "language", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_language_MetaData), NewProp_language_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate = { "videoFrameRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoFrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_videoFrameRate_MetaData), NewProp_videoFrameRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate = { "videoBitRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoBitRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_videoBitRate_MetaData), NewProp_videoBitRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth = { "videoWidth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_videoWidth_MetaData), NewProp_videoWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight = { "videoHeight", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_videoHeight_MetaData), NewProp_videoHeight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation = { "videoRotation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, videoRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_videoRotation_MetaData), NewProp_videoRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate = { "audioSampleRate", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, audioSampleRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_audioSampleRate_MetaData), NewProp_audioSampleRate_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels = { "audioChannels", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, audioChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_audioChannels_MetaData), NewProp_audioChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample = { "audioBitsPerSample", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, audioBitsPerSample), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_audioBitsPerSample_MetaData), NewProp_audioBitsPerSample_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerStreamInfo, duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_duration_MetaData), NewProp_duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_streamType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_codecName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoFrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoBitRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_videoRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioSampleRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_audioBitsPerSample,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewProp_duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	&NewStructOps,
	"PlayerStreamInfo",
	Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::PropPointers),
	sizeof(FPlayerStreamInfo),
	alignof(FPlayerStreamInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerStreamInfo()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerStreamInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerStreamInfo.InnerSingleton, Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerStreamInfo.InnerSingleton;
}
// End ScriptStruct FPlayerStreamInfo

// Begin Class UAgoraBPuMediaPlayer Function AdjustPlayoutVolume
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics
{
	struct AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "AdjustPlayoutVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::AgoraBPuMediaPlayer_eventAdjustPlayoutVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execAdjustPlayoutVolume)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AdjustPlayoutVolume(Z_Param_volume);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function AdjustPlayoutVolume

// Begin Class UAgoraBPuMediaPlayer Function AdjustPublishSignalVolume
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics
{
	struct AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "AdjustPublishSignalVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::AgoraBPuMediaPlayer_eventAdjustPublishSignalVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execAdjustPublishSignalVolume)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AdjustPublishSignalVolume(Z_Param_volume);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function AdjustPublishSignalVolume

// Begin Class UAgoraBPuMediaPlayer Function EnableAutoSwitchAgoraCDN
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics
{
	struct AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms
	{
		bool enable;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable_SetBit(void* Obj)
{
	((AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms*)Obj)->enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "EnableAutoSwitchAgoraCDN", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::AgoraBPuMediaPlayer_eventEnableAutoSwitchAgoraCDN_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execEnableAutoSwitchAgoraCDN)
{
	P_GET_UBOOL(Z_Param_enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->EnableAutoSwitchAgoraCDN(Z_Param_enable);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function EnableAutoSwitchAgoraCDN

// Begin Class UAgoraBPuMediaPlayer Function GetAgoraCDNLineCount
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics
{
	struct AgoraBPuMediaPlayer_eventGetAgoraCDNLineCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetAgoraCDNLineCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetAgoraCDNLineCount", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::AgoraBPuMediaPlayer_eventGetAgoraCDNLineCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::AgoraBPuMediaPlayer_eventGetAgoraCDNLineCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetAgoraCDNLineCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetAgoraCDNLineCount();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetAgoraCDNLineCount

// Begin Class UAgoraBPuMediaPlayer Function GetAgoraMediaPlayer
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics
{
	struct AgoraBPuMediaPlayer_eventGetAgoraMediaPlayer_Parms
	{
		UAgoraBPuMediaPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAgoraMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetAgoraMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UAgoraBPuMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetAgoraMediaPlayer", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::AgoraBPuMediaPlayer_eventGetAgoraMediaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::AgoraBPuMediaPlayer_eventGetAgoraMediaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetAgoraMediaPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAgoraBPuMediaPlayer**)Z_Param__Result=UAgoraBPuMediaPlayer::GetAgoraMediaPlayer();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetAgoraMediaPlayer

// Begin Class UAgoraBPuMediaPlayer Function GetCurrentAgoraCDNIndex
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics
{
	struct AgoraBPuMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetCurrentAgoraCDNIndex", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::AgoraBPuMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::AgoraBPuMediaPlayer_eventGetCurrentAgoraCDNIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetCurrentAgoraCDNIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentAgoraCDNIndex();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetCurrentAgoraCDNIndex

// Begin Class UAgoraBPuMediaPlayer Function GetDuration
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics
{
	struct AgoraBPuMediaPlayer_eventGetDuration_Parms
	{
		int64 duration;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::NewProp_duration = { "duration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetDuration_Parms, duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::NewProp_duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetDuration", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::AgoraBPuMediaPlayer_eventGetDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::AgoraBPuMediaPlayer_eventGetDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetDuration)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDuration(Z_Param_Out_duration);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetDuration

// Begin Class UAgoraBPuMediaPlayer Function GetMediaPlayerId
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics
{
	struct AgoraBPuMediaPlayer_eventGetMediaPlayerId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetMediaPlayerId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetMediaPlayerId", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::AgoraBPuMediaPlayer_eventGetMediaPlayerId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::AgoraBPuMediaPlayer_eventGetMediaPlayerId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetMediaPlayerId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMediaPlayerId();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetMediaPlayerId

// Begin Class UAgoraBPuMediaPlayer Function GetMediaPlayerSourceObserver
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics
{
	struct AgoraBPuMediaPlayer_eventGetMediaPlayerSourceObserver_Parms
	{
		UAgoraBPuIMediaPlayerSourceObserver* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IRtcEngine" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetMediaPlayerSourceObserver_Parms, ReturnValue), Z_Construct_UClass_UAgoraBPuIMediaPlayerSourceObserver_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetMediaPlayerSourceObserver", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::AgoraBPuMediaPlayer_eventGetMediaPlayerSourceObserver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::AgoraBPuMediaPlayer_eventGetMediaPlayerSourceObserver_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetMediaPlayerSourceObserver)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAgoraBPuIMediaPlayerSourceObserver**)Z_Param__Result=P_THIS->GetMediaPlayerSourceObserver();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetMediaPlayerSourceObserver

// Begin Class UAgoraBPuMediaPlayer Function GetMute
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics
{
	struct AgoraBPuMediaPlayer_eventGetMute_Parms
	{
		bool muted;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_muted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_muted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_muted_SetBit(void* Obj)
{
	((AgoraBPuMediaPlayer_eventGetMute_Parms*)Obj)->muted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_muted = { "muted", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventGetMute_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_muted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_muted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetMute", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::AgoraBPuMediaPlayer_eventGetMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::AgoraBPuMediaPlayer_eventGetMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetMute)
{
	P_GET_UBOOL_REF(Z_Param_Out_muted);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMute(Z_Param_Out_muted);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetMute

// Begin Class UAgoraBPuMediaPlayer Function GetPlayerSdkVersion
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics
{
	struct AgoraBPuMediaPlayer_eventGetPlayerSdkVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayerSdkVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPlayerSdkVersion", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::AgoraBPuMediaPlayer_eventGetPlayerSdkVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::AgoraBPuMediaPlayer_eventGetPlayerSdkVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPlayerSdkVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPlayerSdkVersion();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetPlayerSdkVersion

// Begin Class UAgoraBPuMediaPlayer Function GetPlayoutVolume
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics
{
	struct AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPlayoutVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::AgoraBPuMediaPlayer_eventGetPlayoutVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPlayoutVolume)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayoutVolume(Z_Param_Out_volume);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetPlayoutVolume

// Begin Class UAgoraBPuMediaPlayer Function GetPlayPosition
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics
{
	struct AgoraBPuMediaPlayer_eventGetPlayPosition_Parms
	{
		int64 pos;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_pos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::NewProp_pos = { "pos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayPosition_Parms, pos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlayPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::NewProp_pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPlayPosition", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::AgoraBPuMediaPlayer_eventGetPlayPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::AgoraBPuMediaPlayer_eventGetPlayPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPlayPosition)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_pos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayPosition(Z_Param_Out_pos);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetPlayPosition

// Begin Class UAgoraBPuMediaPlayer Function GetPlaySrc
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics
{
	struct AgoraBPuMediaPlayer_eventGetPlaySrc_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPlaySrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPlaySrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::AgoraBPuMediaPlayer_eventGetPlaySrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::AgoraBPuMediaPlayer_eventGetPlaySrc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPlaySrc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPlaySrc();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetPlaySrc

// Begin Class UAgoraBPuMediaPlayer Function GetPublishSignalVolume
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics
{
	struct AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetPublishSignalVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::AgoraBPuMediaPlayer_eventGetPublishSignalVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetPublishSignalVolume)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPublishSignalVolume(Z_Param_Out_volume);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetPublishSignalVolume

// Begin Class UAgoraBPuMediaPlayer Function GetState
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics
{
	struct AgoraBPuMediaPlayer_eventGetState_Parms
	{
		EMEDIA_PLAYER_STATE ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_AgoraPlugin_EMEDIA_PLAYER_STATE, METADATA_PARAMS(0, nullptr) }; // 3809826952
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetState", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::AgoraBPuMediaPlayer_eventGetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::AgoraBPuMediaPlayer_eventGetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMEDIA_PLAYER_STATE*)Z_Param__Result=P_THIS->GetState();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetState

// Begin Class UAgoraBPuMediaPlayer Function GetStreamCount
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics
{
	struct AgoraBPuMediaPlayer_eventGetStreamCount_Parms
	{
		int64 count;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_count;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::NewProp_count = { "count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamCount_Parms, count), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::NewProp_count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetStreamCount", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::AgoraBPuMediaPlayer_eventGetStreamCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::AgoraBPuMediaPlayer_eventGetStreamCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetStreamCount)
{
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStreamCount(Z_Param_Out_count);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetStreamCount

// Begin Class UAgoraBPuMediaPlayer Function GetStreamInfo
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics
{
	struct AgoraBPuMediaPlayer_eventGetStreamInfo_Parms
	{
		int64 index;
		FPlayerStreamInfo info;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_info;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamInfo_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_info = { "info", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamInfo_Parms, info), Z_Construct_UScriptStruct_FPlayerStreamInfo, METADATA_PARAMS(0, nullptr) }; // 510729563
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventGetStreamInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_info,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "GetStreamInfo", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::AgoraBPuMediaPlayer_eventGetStreamInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::AgoraBPuMediaPlayer_eventGetStreamInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execGetStreamInfo)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_index);
	P_GET_STRUCT_REF(FPlayerStreamInfo,Z_Param_Out_info);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetStreamInfo(Z_Param_index,Z_Param_Out_info);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function GetStreamInfo

// Begin Class UAgoraBPuMediaPlayer Function Mute
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics
{
	struct AgoraBPuMediaPlayer_eventMute_Parms
	{
		bool muted;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_muted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_muted;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_muted_SetBit(void* Obj)
{
	((AgoraBPuMediaPlayer_eventMute_Parms*)Obj)->muted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_muted = { "muted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventMute_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_muted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_muted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Mute", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::AgoraBPuMediaPlayer_eventMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::AgoraBPuMediaPlayer_eventMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execMute)
{
	P_GET_UBOOL(Z_Param_muted);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Mute(Z_Param_muted);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function Mute

// Begin Class UAgoraBPuMediaPlayer Function Open
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics
{
	struct AgoraBPuMediaPlayer_eventOpen_Parms
	{
		FString url;
		int64 startPos;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_url;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpen_Parms, url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_url_MetaData), NewProp_url_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpen_Parms, startPos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpen_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_startPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Open", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::AgoraBPuMediaPlayer_eventOpen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::AgoraBPuMediaPlayer_eventOpen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execOpen)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_url);
	P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Open(Z_Param_url,Z_Param_startPos);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function Open

// Begin Class UAgoraBPuMediaPlayer Function OpenWithAgoraCDNSrc
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics
{
	struct AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms
	{
		FString src;
		int64 startPos;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_src;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_src_MetaData), NewProp_src_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, startPos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_src,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_startPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "OpenWithAgoraCDNSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::AgoraBPuMediaPlayer_eventOpenWithAgoraCDNSrc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execOpenWithAgoraCDNSrc)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_src);
	P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->OpenWithAgoraCDNSrc(Z_Param_src,Z_Param_startPos);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function OpenWithAgoraCDNSrc

// Begin Class UAgoraBPuMediaPlayer Function OpenWithMediaSource
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics
{
	struct AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms
	{
		FAgoraMediaSource source;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int OpenWithCustomSource(int64 startPos, UIMediaPlayerCustomDataProvider* provider);\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint OpenWithCustomSource(int64 startPos, UIMediaPlayerCustomDataProvider* provider);" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_source;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms, source), Z_Construct_UScriptStruct_FAgoraMediaSource, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_source_MetaData), NewProp_source_MetaData) }; // 4074186675
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "OpenWithMediaSource", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::AgoraBPuMediaPlayer_eventOpenWithMediaSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execOpenWithMediaSource)
{
	P_GET_STRUCT_REF(FAgoraMediaSource,Z_Param_Out_source);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->OpenWithMediaSource(Z_Param_Out_source);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function OpenWithMediaSource

// Begin Class UAgoraBPuMediaPlayer Function Pause
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics
{
	struct AgoraBPuMediaPlayer_eventPause_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPause_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Pause", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::AgoraBPuMediaPlayer_eventPause_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::AgoraBPuMediaPlayer_eventPause_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Pause();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function Pause

// Begin Class UAgoraBPuMediaPlayer Function Play
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics
{
	struct AgoraBPuMediaPlayer_eventPlay_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPlay_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Play", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::AgoraBPuMediaPlayer_eventPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::AgoraBPuMediaPlayer_eventPlay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Play();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function Play

// Begin Class UAgoraBPuMediaPlayer Function PlayPreloadedSrc
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics
{
	struct AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms
	{
		FString src;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_src;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_src_MetaData), NewProp_src_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_src,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "PlayPreloadedSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::AgoraBPuMediaPlayer_eventPlayPreloadedSrc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execPlayPreloadedSrc)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_src);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PlayPreloadedSrc(Z_Param_src);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function PlayPreloadedSrc

// Begin Class UAgoraBPuMediaPlayer Function PreloadSrc
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics
{
	struct AgoraBPuMediaPlayer_eventPreloadSrc_Parms
	{
		FString src;
		int64 startPos;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_src;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_startPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPreloadSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_src_MetaData), NewProp_src_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_startPos = { "startPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPreloadSrc_Parms, startPos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventPreloadSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_src,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_startPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "PreloadSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::AgoraBPuMediaPlayer_eventPreloadSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::AgoraBPuMediaPlayer_eventPreloadSrc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execPreloadSrc)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_src);
	P_GET_PROPERTY(FInt64Property,Z_Param_startPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->PreloadSrc(Z_Param_src,Z_Param_startPos);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function PreloadSrc

// Begin Class UAgoraBPuMediaPlayer Function Release
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAgoraMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Release();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function Release

// Begin Class UAgoraBPuMediaPlayer Function RenewAgoraCDNSrcToken
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics
{
	struct AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms
	{
		FString token;
		int64 ts;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_token_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_token;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, token), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_token_MetaData), NewProp_token_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ts = { "ts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, ts), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_token,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "RenewAgoraCDNSrcToken", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::AgoraBPuMediaPlayer_eventRenewAgoraCDNSrcToken_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execRenewAgoraCDNSrcToken)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_token);
	P_GET_PROPERTY(FInt64Property,Z_Param_ts);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RenewAgoraCDNSrcToken(Z_Param_token,Z_Param_ts);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function RenewAgoraCDNSrcToken

// Begin Class UAgoraBPuMediaPlayer Function Resume
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics
{
	struct AgoraBPuMediaPlayer_eventResume_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventResume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Resume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::AgoraBPuMediaPlayer_eventResume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::AgoraBPuMediaPlayer_eventResume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execResume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Resume();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function Resume

// Begin Class UAgoraBPuMediaPlayer Function Seek
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics
{
	struct AgoraBPuMediaPlayer_eventSeek_Parms
	{
		int64 newPos;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_newPos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::NewProp_newPos = { "newPos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSeek_Parms, newPos), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSeek_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::NewProp_newPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Seek", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::AgoraBPuMediaPlayer_eventSeek_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::AgoraBPuMediaPlayer_eventSeek_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSeek)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_newPos);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Seek(Z_Param_newPos);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function Seek

// Begin Class UAgoraBPuMediaPlayer Function SelectAudioTrack
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics
{
	struct AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms
	{
		int32 index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SelectAudioTrack", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::AgoraBPuMediaPlayer_eventSelectAudioTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSelectAudioTrack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SelectAudioTrack(Z_Param_index);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SelectAudioTrack

// Begin Class UAgoraBPuMediaPlayer Function SelectInternalSubtitle
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics
{
	struct AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms
	{
		int32 index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SelectInternalSubtitle", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::AgoraBPuMediaPlayer_eventSelectInternalSubtitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSelectInternalSubtitle)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SelectInternalSubtitle(Z_Param_index);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SelectInternalSubtitle

// Begin Class UAgoraBPuMediaPlayer Function SelectMultiAudioTrack
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics
{
	struct AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms
	{
		int32 playoutTrackIndex;
		int32 publishTrackIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_playoutTrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_publishTrackIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_playoutTrackIndex = { "playoutTrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms, playoutTrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_publishTrackIndex = { "publishTrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms, publishTrackIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_playoutTrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_publishTrackIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SelectMultiAudioTrack", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::AgoraBPuMediaPlayer_eventSelectMultiAudioTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSelectMultiAudioTrack)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_playoutTrackIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_publishTrackIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SelectMultiAudioTrack(Z_Param_playoutTrackIndex,Z_Param_publishTrackIndex);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SelectMultiAudioTrack

// Begin Class UAgoraBPuMediaPlayer Function SetAudioDualMonoMode
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics
{
	struct AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms
	{
		EAUDIO_DUAL_MONO_MODE mode;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int RegisterPlayerSourceObserver(UIMediaPlayerSourceObserver* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int UnregisterPlayerSourceObserver(UIMediaPlayerSourceObserver* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int RegisterAudioFrameObserver(UIAudioPcmFrameSink* observer, ERAW_AUDIO_FRAME_OP_MODE_TYPE mode = ERAW_AUDIO_FRAME_OP_MODE_TYPE::RAW_AUDIO_FRAME_OP_MODE_READ_ONLY);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int UnregisterAudioFrameObserver(UIAudioPcmFrameSink* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int RegisterVideoFrameObserver(UIVideoFrameObserver* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int UnregisterVideoFrameObserver(UIVideoFrameObserver* observer);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int RegisterMediaPlayerAudioSpectrumObserver(UIAudioSpectrumObserver* observer, int intervalInMS);\n//UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\n//int UnregisterMediaPlayerAudioSpectrumObserver(UIAudioSpectrumObserver* observer);\n" },
#endif
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint RegisterPlayerSourceObserver(UIMediaPlayerSourceObserver* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint UnregisterPlayerSourceObserver(UIMediaPlayerSourceObserver* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint RegisterAudioFrameObserver(UIAudioPcmFrameSink* observer, ERAW_AUDIO_FRAME_OP_MODE_TYPE mode = ERAW_AUDIO_FRAME_OP_MODE_TYPE::RAW_AUDIO_FRAME_OP_MODE_READ_ONLY);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint UnregisterAudioFrameObserver(UIAudioPcmFrameSink* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint RegisterVideoFrameObserver(UIVideoFrameObserver* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint UnregisterVideoFrameObserver(UIVideoFrameObserver* observer);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint RegisterMediaPlayerAudioSpectrumObserver(UIAudioSpectrumObserver* observer, int intervalInMS);\nUFUNCTION(BlueprintCallable, Category = \"Agora|IMediaPlayer\")\nint UnregisterMediaPlayerAudioSpectrumObserver(UIAudioSpectrumObserver* observer);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms, mode), Z_Construct_UEnum_AgoraPlugin_EAUDIO_DUAL_MONO_MODE, METADATA_PARAMS(0, nullptr) }; // 3744328196
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetAudioDualMonoMode", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::AgoraBPuMediaPlayer_eventSetAudioDualMonoMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetAudioDualMonoMode)
{
	P_GET_ENUM(EAUDIO_DUAL_MONO_MODE,Z_Param_mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetAudioDualMonoMode(EAUDIO_DUAL_MONO_MODE(Z_Param_mode));
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetAudioDualMonoMode

// Begin Class UAgoraBPuMediaPlayer Function SetAudioPitch
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics
{
	struct AgoraBPuMediaPlayer_eventSetAudioPitch_Parms
	{
		int32 pitch;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_pitch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::NewProp_pitch = { "pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetAudioPitch_Parms, pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetAudioPitch_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::NewProp_pitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetAudioPitch", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::AgoraBPuMediaPlayer_eventSetAudioPitch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::AgoraBPuMediaPlayer_eventSetAudioPitch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetAudioPitch)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetAudioPitch(Z_Param_pitch);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetAudioPitch

// Begin Class UAgoraBPuMediaPlayer Function SetExternalSubtitle
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics
{
	struct AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms
	{
		FString url;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_url;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms, url), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_url_MetaData), NewProp_url_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_url,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetExternalSubtitle", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::AgoraBPuMediaPlayer_eventSetExternalSubtitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetExternalSubtitle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_url);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetExternalSubtitle(Z_Param_url);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetExternalSubtitle

// Begin Class UAgoraBPuMediaPlayer Function SetLoopCount
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics
{
	struct AgoraBPuMediaPlayer_eventSetLoopCount_Parms
	{
		int32 loopCount;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_loopCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::NewProp_loopCount = { "loopCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetLoopCount_Parms, loopCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetLoopCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::NewProp_loopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetLoopCount", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::AgoraBPuMediaPlayer_eventSetLoopCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::AgoraBPuMediaPlayer_eventSetLoopCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetLoopCount)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_loopCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetLoopCount(Z_Param_loopCount);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetLoopCount

// Begin Class UAgoraBPuMediaPlayer Function SetPlaybackSpeed
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics
{
	struct AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms
	{
		int32 speed;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms, speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::NewProp_speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetPlaybackSpeed", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::AgoraBPuMediaPlayer_eventSetPlaybackSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetPlaybackSpeed)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetPlaybackSpeed(Z_Param_speed);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetPlaybackSpeed

// Begin Class UAgoraBPuMediaPlayer Function SetPlayerOptionWithInt
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics
{
	struct AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms
	{
		FString key;
		int32 value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetPlayerOptionWithInt", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::AgoraBPuMediaPlayer_eventSetPlayerOptionWithInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetPlayerOptionWithInt)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_PROPERTY(FIntProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetPlayerOptionWithInt(Z_Param_key,Z_Param_value);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetPlayerOptionWithInt

// Begin Class UAgoraBPuMediaPlayer Function SetPlayerOptionWithString
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics
{
	struct AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms
	{
		FString key;
		FString value;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms, key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_key_MetaData), NewProp_key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms, value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetPlayerOptionWithString", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::AgoraBPuMediaPlayer_eventSetPlayerOptionWithString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetPlayerOptionWithString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_key);
	P_GET_PROPERTY(FStrProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetPlayerOptionWithString(Z_Param_key,Z_Param_value);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetPlayerOptionWithString

// Begin Class UAgoraBPuMediaPlayer Function SetRenderMode
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics
{
	struct AgoraBPuMediaPlayer_eventSetRenderMode_Parms
	{
		ERENDER_MODE_TYPE renderMode;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_renderMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_renderMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_renderMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_renderMode = { "renderMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetRenderMode_Parms, renderMode), Z_Construct_UEnum_AgoraPlugin_ERENDER_MODE_TYPE, METADATA_PARAMS(0, nullptr) }; // 2326346035
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetRenderMode_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_renderMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_renderMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetRenderMode", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::AgoraBPuMediaPlayer_eventSetRenderMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::AgoraBPuMediaPlayer_eventSetRenderMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetRenderMode)
{
	P_GET_ENUM(ERENDER_MODE_TYPE,Z_Param_renderMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetRenderMode(ERENDER_MODE_TYPE(Z_Param_renderMode));
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetRenderMode

// Begin Class UAgoraBPuMediaPlayer Function SetSoundPositionParams
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics
{
	struct AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms
	{
		float pan;
		float gain;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pan;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gain;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_pan = { "pan", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms, pan), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms, gain), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_pan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_gain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetSoundPositionParams", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::AgoraBPuMediaPlayer_eventSetSoundPositionParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetSoundPositionParams)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_pan);
	P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetSoundPositionParams(Z_Param_pan,Z_Param_gain);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetSoundPositionParams

// Begin Class UAgoraBPuMediaPlayer Function SetSpatialAudioParams
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics
{
	struct AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms
	{
		FSpatialAudioParams params;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_params;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params = { "params", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms, params), Z_Construct_UScriptStruct_FSpatialAudioParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_params_MetaData), NewProp_params_MetaData) }; // 2276956359
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetSpatialAudioParams", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::AgoraBPuMediaPlayer_eventSetSpatialAudioParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetSpatialAudioParams)
{
	P_GET_STRUCT_REF(FSpatialAudioParams,Z_Param_Out_params);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetSpatialAudioParams(Z_Param_Out_params);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetSpatialAudioParams

// Begin Class UAgoraBPuMediaPlayer Function SetView
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics
{
	struct AgoraBPuMediaPlayer_eventSetView_Parms
	{
		int64 view;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_view;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::NewProp_view = { "view", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetView_Parms, view), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSetView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::NewProp_view,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SetView", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::AgoraBPuMediaPlayer_eventSetView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::AgoraBPuMediaPlayer_eventSetView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSetView)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_view);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetView(Z_Param_view);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SetView

// Begin Class UAgoraBPuMediaPlayer Function Stop
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics
{
	struct AgoraBPuMediaPlayer_eventStop_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventStop_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "Stop", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::AgoraBPuMediaPlayer_eventStop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::AgoraBPuMediaPlayer_eventStop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function Stop

// Begin Class UAgoraBPuMediaPlayer Function SwitchAgoraCDNLineByIndex
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics
{
	struct AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms
	{
		int32 index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SwitchAgoraCDNLineByIndex", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::AgoraBPuMediaPlayer_eventSwitchAgoraCDNLineByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSwitchAgoraCDNLineByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SwitchAgoraCDNLineByIndex(Z_Param_index);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SwitchAgoraCDNLineByIndex

// Begin Class UAgoraBPuMediaPlayer Function SwitchAgoraCDNSrc
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics
{
	struct AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms
	{
		FString src;
		bool syncPts;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "CPP_Default_syncPts", "false" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_src;
	static void NewProp_syncPts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_syncPts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_src_MetaData), NewProp_src_MetaData) };
void Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts_SetBit(void* Obj)
{
	((AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms*)Obj)->syncPts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts = { "syncPts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_src,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_syncPts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SwitchAgoraCDNSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::AgoraBPuMediaPlayer_eventSwitchAgoraCDNSrc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSwitchAgoraCDNSrc)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_src);
	P_GET_UBOOL(Z_Param_syncPts);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SwitchAgoraCDNSrc(Z_Param_src,Z_Param_syncPts);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SwitchAgoraCDNSrc

// Begin Class UAgoraBPuMediaPlayer Function SwitchSrc
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics
{
	struct AgoraBPuMediaPlayer_eventSwitchSrc_Parms
	{
		FString src;
		bool syncPts;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "CPP_Default_syncPts", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_src;
	static void NewProp_syncPts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_syncPts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_src_MetaData), NewProp_src_MetaData) };
void Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_syncPts_SetBit(void* Obj)
{
	((AgoraBPuMediaPlayer_eventSwitchSrc_Parms*)Obj)->syncPts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_syncPts = { "syncPts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuMediaPlayer_eventSwitchSrc_Parms), &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_syncPts_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventSwitchSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_src,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_syncPts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "SwitchSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::AgoraBPuMediaPlayer_eventSwitchSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::AgoraBPuMediaPlayer_eventSwitchSrc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execSwitchSrc)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_src);
	P_GET_UBOOL(Z_Param_syncPts);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SwitchSrc(Z_Param_src,Z_Param_syncPts);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function SwitchSrc

// Begin Class UAgoraBPuMediaPlayer Function TakeScreenshot
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics
{
	struct AgoraBPuMediaPlayer_eventTakeScreenshot_Parms
	{
		FString filename;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_filename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventTakeScreenshot_Parms, filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_filename_MetaData), NewProp_filename_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventTakeScreenshot_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "TakeScreenshot", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::AgoraBPuMediaPlayer_eventTakeScreenshot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::AgoraBPuMediaPlayer_eventTakeScreenshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execTakeScreenshot)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->TakeScreenshot(Z_Param_filename);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function TakeScreenshot

// Begin Class UAgoraBPuMediaPlayer Function UnloadSrc
struct Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics
{
	struct AgoraBPuMediaPlayer_eventUnloadSrc_Parms
	{
		FString src;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IMediaPlayer" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_src;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventUnloadSrc_Parms, src), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_src_MetaData), NewProp_src_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuMediaPlayer_eventUnloadSrc_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_src,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuMediaPlayer, nullptr, "UnloadSrc", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::AgoraBPuMediaPlayer_eventUnloadSrc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::AgoraBPuMediaPlayer_eventUnloadSrc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuMediaPlayer::execUnloadSrc)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_src);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->UnloadSrc(Z_Param_src);
	P_NATIVE_END;
}
// End Class UAgoraBPuMediaPlayer Function UnloadSrc

// Begin Class UAgoraBPuMediaPlayer
void UAgoraBPuMediaPlayer::StaticRegisterNativesUAgoraBPuMediaPlayer()
{
	UClass* Class = UAgoraBPuMediaPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AdjustPlayoutVolume", &UAgoraBPuMediaPlayer::execAdjustPlayoutVolume },
		{ "AdjustPublishSignalVolume", &UAgoraBPuMediaPlayer::execAdjustPublishSignalVolume },
		{ "EnableAutoSwitchAgoraCDN", &UAgoraBPuMediaPlayer::execEnableAutoSwitchAgoraCDN },
		{ "GetAgoraCDNLineCount", &UAgoraBPuMediaPlayer::execGetAgoraCDNLineCount },
		{ "GetAgoraMediaPlayer", &UAgoraBPuMediaPlayer::execGetAgoraMediaPlayer },
		{ "GetCurrentAgoraCDNIndex", &UAgoraBPuMediaPlayer::execGetCurrentAgoraCDNIndex },
		{ "GetDuration", &UAgoraBPuMediaPlayer::execGetDuration },
		{ "GetMediaPlayerId", &UAgoraBPuMediaPlayer::execGetMediaPlayerId },
		{ "GetMediaPlayerSourceObserver", &UAgoraBPuMediaPlayer::execGetMediaPlayerSourceObserver },
		{ "GetMute", &UAgoraBPuMediaPlayer::execGetMute },
		{ "GetPlayerSdkVersion", &UAgoraBPuMediaPlayer::execGetPlayerSdkVersion },
		{ "GetPlayoutVolume", &UAgoraBPuMediaPlayer::execGetPlayoutVolume },
		{ "GetPlayPosition", &UAgoraBPuMediaPlayer::execGetPlayPosition },
		{ "GetPlaySrc", &UAgoraBPuMediaPlayer::execGetPlaySrc },
		{ "GetPublishSignalVolume", &UAgoraBPuMediaPlayer::execGetPublishSignalVolume },
		{ "GetState", &UAgoraBPuMediaPlayer::execGetState },
		{ "GetStreamCount", &UAgoraBPuMediaPlayer::execGetStreamCount },
		{ "GetStreamInfo", &UAgoraBPuMediaPlayer::execGetStreamInfo },
		{ "Mute", &UAgoraBPuMediaPlayer::execMute },
		{ "Open", &UAgoraBPuMediaPlayer::execOpen },
		{ "OpenWithAgoraCDNSrc", &UAgoraBPuMediaPlayer::execOpenWithAgoraCDNSrc },
		{ "OpenWithMediaSource", &UAgoraBPuMediaPlayer::execOpenWithMediaSource },
		{ "Pause", &UAgoraBPuMediaPlayer::execPause },
		{ "Play", &UAgoraBPuMediaPlayer::execPlay },
		{ "PlayPreloadedSrc", &UAgoraBPuMediaPlayer::execPlayPreloadedSrc },
		{ "PreloadSrc", &UAgoraBPuMediaPlayer::execPreloadSrc },
		{ "Release", &UAgoraBPuMediaPlayer::execRelease },
		{ "RenewAgoraCDNSrcToken", &UAgoraBPuMediaPlayer::execRenewAgoraCDNSrcToken },
		{ "Resume", &UAgoraBPuMediaPlayer::execResume },
		{ "Seek", &UAgoraBPuMediaPlayer::execSeek },
		{ "SelectAudioTrack", &UAgoraBPuMediaPlayer::execSelectAudioTrack },
		{ "SelectInternalSubtitle", &UAgoraBPuMediaPlayer::execSelectInternalSubtitle },
		{ "SelectMultiAudioTrack", &UAgoraBPuMediaPlayer::execSelectMultiAudioTrack },
		{ "SetAudioDualMonoMode", &UAgoraBPuMediaPlayer::execSetAudioDualMonoMode },
		{ "SetAudioPitch", &UAgoraBPuMediaPlayer::execSetAudioPitch },
		{ "SetExternalSubtitle", &UAgoraBPuMediaPlayer::execSetExternalSubtitle },
		{ "SetLoopCount", &UAgoraBPuMediaPlayer::execSetLoopCount },
		{ "SetPlaybackSpeed", &UAgoraBPuMediaPlayer::execSetPlaybackSpeed },
		{ "SetPlayerOptionWithInt", &UAgoraBPuMediaPlayer::execSetPlayerOptionWithInt },
		{ "SetPlayerOptionWithString", &UAgoraBPuMediaPlayer::execSetPlayerOptionWithString },
		{ "SetRenderMode", &UAgoraBPuMediaPlayer::execSetRenderMode },
		{ "SetSoundPositionParams", &UAgoraBPuMediaPlayer::execSetSoundPositionParams },
		{ "SetSpatialAudioParams", &UAgoraBPuMediaPlayer::execSetSpatialAudioParams },
		{ "SetView", &UAgoraBPuMediaPlayer::execSetView },
		{ "Stop", &UAgoraBPuMediaPlayer::execStop },
		{ "SwitchAgoraCDNLineByIndex", &UAgoraBPuMediaPlayer::execSwitchAgoraCDNLineByIndex },
		{ "SwitchAgoraCDNSrc", &UAgoraBPuMediaPlayer::execSwitchAgoraCDNSrc },
		{ "SwitchSrc", &UAgoraBPuMediaPlayer::execSwitchSrc },
		{ "TakeScreenshot", &UAgoraBPuMediaPlayer::execTakeScreenshot },
		{ "UnloadSrc", &UAgoraBPuMediaPlayer::execUnloadSrc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuMediaPlayer);
UClass* Z_Construct_UClass_UAgoraBPuMediaPlayer_NoRegister()
{
	return UAgoraBPuMediaPlayer::StaticClass();
}
struct Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuMediaPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPlayoutVolume, "AdjustPlayoutVolume" }, // 304665784
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_AdjustPublishSignalVolume, "AdjustPublishSignalVolume" }, // 4066668671
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_EnableAutoSwitchAgoraCDN, "EnableAutoSwitchAgoraCDN" }, // 1360523867
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraCDNLineCount, "GetAgoraCDNLineCount" }, // 3372773770
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetAgoraMediaPlayer, "GetAgoraMediaPlayer" }, // 2961958624
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetCurrentAgoraCDNIndex, "GetCurrentAgoraCDNIndex" }, // 2530246398
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetDuration, "GetDuration" }, // 1007429923
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerId, "GetMediaPlayerId" }, // 1667976897
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMediaPlayerSourceObserver, "GetMediaPlayerSourceObserver" }, // 3400255174
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetMute, "GetMute" }, // 1070936243
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayerSdkVersion, "GetPlayerSdkVersion" }, // 3094037924
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayoutVolume, "GetPlayoutVolume" }, // 3467234814
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlayPosition, "GetPlayPosition" }, // 2614914472
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPlaySrc, "GetPlaySrc" }, // 1865647978
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetPublishSignalVolume, "GetPublishSignalVolume" }, // 1597548775
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetState, "GetState" }, // 139553308
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamCount, "GetStreamCount" }, // 825199669
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_GetStreamInfo, "GetStreamInfo" }, // 2431474533
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Mute, "Mute" }, // 1698535465
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Open, "Open" }, // 4001943105
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithAgoraCDNSrc, "OpenWithAgoraCDNSrc" }, // 1844501628
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_OpenWithMediaSource, "OpenWithMediaSource" }, // 2313916088
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Pause, "Pause" }, // 3024991908
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Play, "Play" }, // 2120622686
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_PlayPreloadedSrc, "PlayPreloadedSrc" }, // 3024160024
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_PreloadSrc, "PreloadSrc" }, // 2193811210
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Release, "Release" }, // 3120667137
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_RenewAgoraCDNSrcToken, "RenewAgoraCDNSrcToken" }, // 3842055531
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Resume, "Resume" }, // 683799453
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Seek, "Seek" }, // 1504802535
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectAudioTrack, "SelectAudioTrack" }, // 831726420
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectInternalSubtitle, "SelectInternalSubtitle" }, // 2842804525
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SelectMultiAudioTrack, "SelectMultiAudioTrack" }, // 1069536964
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioDualMonoMode, "SetAudioDualMonoMode" }, // 823659923
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetAudioPitch, "SetAudioPitch" }, // 2811473477
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetExternalSubtitle, "SetExternalSubtitle" }, // 905800685
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetLoopCount, "SetLoopCount" }, // 3188679295
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlaybackSpeed, "SetPlaybackSpeed" }, // 3043244795
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithInt, "SetPlayerOptionWithInt" }, // 3568317685
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetPlayerOptionWithString, "SetPlayerOptionWithString" }, // 492303271
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetRenderMode, "SetRenderMode" }, // 2786830265
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSoundPositionParams, "SetSoundPositionParams" }, // 235243112
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetSpatialAudioParams, "SetSpatialAudioParams" }, // 1285914163
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SetView, "SetView" }, // 2841809056
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_Stop, "Stop" }, // 210730259
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNLineByIndex, "SwitchAgoraCDNLineByIndex" }, // 1176161148
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchAgoraCDNSrc, "SwitchAgoraCDNSrc" }, // 3762854302
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_SwitchSrc, "SwitchSrc" }, // 4244763434
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_TakeScreenshot, "TakeScreenshot" }, // 1845990570
		{ &Z_Construct_UFunction_UAgoraBPuMediaPlayer_UnloadSrc, "UnloadSrc" }, // 2825072398
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuMediaPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::ClassParams = {
	&UAgoraBPuMediaPlayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAgoraBPuMediaPlayer()
{
	if (!Z_Registration_Info_UClass_UAgoraBPuMediaPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuMediaPlayer.OuterSingleton, Z_Construct_UClass_UAgoraBPuMediaPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAgoraBPuMediaPlayer.OuterSingleton;
}
template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuMediaPlayer>()
{
	return UAgoraBPuMediaPlayer::StaticClass();
}
UAgoraBPuMediaPlayer::UAgoraBPuMediaPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuMediaPlayer);
UAgoraBPuMediaPlayer::~UAgoraBPuMediaPlayer() {}
// End Class UAgoraBPuMediaPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAUDIO_DUAL_MONO_MODE_StaticEnum, TEXT("EAUDIO_DUAL_MONO_MODE"), &Z_Registration_Info_UEnum_EAUDIO_DUAL_MONO_MODE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3744328196U) },
		{ EMEDIA_STREAM_TYPE_StaticEnum, TEXT("EMEDIA_STREAM_TYPE"), &Z_Registration_Info_UEnum_EMEDIA_STREAM_TYPE, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4165533125U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAgoraMediaSource::StaticStruct, Z_Construct_UScriptStruct_FAgoraMediaSource_Statics::NewStructOps, TEXT("AgoraMediaSource"), &Z_Registration_Info_UScriptStruct_AgoraMediaSource, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAgoraMediaSource), 4074186675U) },
		{ FPlayerStreamInfo::StaticStruct, Z_Construct_UScriptStruct_FPlayerStreamInfo_Statics::NewStructOps, TEXT("PlayerStreamInfo"), &Z_Registration_Info_UScriptStruct_PlayerStreamInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerStreamInfo), 510729563U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAgoraBPuMediaPlayer, UAgoraBPuMediaPlayer::StaticClass, TEXT("UAgoraBPuMediaPlayer"), &Z_Registration_Info_UClass_UAgoraBPuMediaPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuMediaPlayer), 3595431284U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_2527130276(TEXT("/Script/AgoraPlugin"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuMediaPlayer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
