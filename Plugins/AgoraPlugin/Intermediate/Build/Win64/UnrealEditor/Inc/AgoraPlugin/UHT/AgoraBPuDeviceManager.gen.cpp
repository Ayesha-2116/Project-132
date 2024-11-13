// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/AgoraBPuBaseDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAgoraBPuDeviceManager() {}

// Begin Cross Module References
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuAudioDeviceManager();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuAudioDeviceManager_NoRegister();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuVideoDeviceManager();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuVideoDeviceManager_NoRegister();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAudioDeviceCollection();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAudioDeviceCollection_NoRegister();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UVideoDeviceCollection();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UVideoDeviceCollection_NoRegister();
AGORAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVideoFormat();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References

// Begin Class UVideoDeviceCollection Function GetCount
struct Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics
{
	struct VideoDeviceCollection_eventGetCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VideoDeviceCollection_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoDeviceCollection, nullptr, "GetCount", nullptr, nullptr, Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::VideoDeviceCollection_eventGetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::VideoDeviceCollection_eventGetCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVideoDeviceCollection_GetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoDeviceCollection_GetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVideoDeviceCollection::execGetCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCount();
	P_NATIVE_END;
}
// End Class UVideoDeviceCollection Function GetCount

// Begin Class UVideoDeviceCollection Function GetDevice
struct Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics
{
	struct VideoDeviceCollection_eventGetDevice_Parms
	{
		int32 index;
		FString deviceName;
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VideoDeviceCollection_eventGetDevice_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VideoDeviceCollection_eventGetDevice_Parms, deviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VideoDeviceCollection_eventGetDevice_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VideoDeviceCollection_eventGetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::NewProp_deviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoDeviceCollection, nullptr, "GetDevice", nullptr, nullptr, Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::VideoDeviceCollection_eventGetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::VideoDeviceCollection_eventGetDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVideoDeviceCollection_GetDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoDeviceCollection_GetDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVideoDeviceCollection::execGetDevice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDevice(Z_Param_index,Z_Param_Out_deviceName,Z_Param_Out_deviceId);
	P_NATIVE_END;
}
// End Class UVideoDeviceCollection Function GetDevice

// Begin Class UVideoDeviceCollection Function Release
struct Z_Construct_UFunction_UVideoDeviceCollection_Release_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoDeviceCollection_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoDeviceCollection, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVideoDeviceCollection_Release_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVideoDeviceCollection_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoDeviceCollection_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVideoDeviceCollection::execRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Release();
	P_NATIVE_END;
}
// End Class UVideoDeviceCollection Function Release

// Begin Class UVideoDeviceCollection Function SetDevice
struct Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics
{
	struct VideoDeviceCollection_eventSetDevice_Parms
	{
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VideoDeviceCollection_eventSetDevice_Parms, deviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceId_MetaData), NewProp_deviceId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VideoDeviceCollection_eventSetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVideoDeviceCollection, nullptr, "SetDevice", nullptr, nullptr, Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::VideoDeviceCollection_eventSetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::VideoDeviceCollection_eventSetDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVideoDeviceCollection_SetDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVideoDeviceCollection_SetDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVideoDeviceCollection::execSetDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetDevice(Z_Param_deviceId);
	P_NATIVE_END;
}
// End Class UVideoDeviceCollection Function SetDevice

// Begin Class UVideoDeviceCollection
void UVideoDeviceCollection::StaticRegisterNativesUVideoDeviceCollection()
{
	UClass* Class = UVideoDeviceCollection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCount", &UVideoDeviceCollection::execGetCount },
		{ "GetDevice", &UVideoDeviceCollection::execGetDevice },
		{ "Release", &UVideoDeviceCollection::execRelease },
		{ "SetDevice", &UVideoDeviceCollection::execSetDevice },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVideoDeviceCollection);
UClass* Z_Construct_UClass_UVideoDeviceCollection_NoRegister()
{
	return UVideoDeviceCollection::StaticClass();
}
struct Z_Construct_UClass_UVideoDeviceCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVideoDeviceCollection_GetCount, "GetCount" }, // 3020491278
		{ &Z_Construct_UFunction_UVideoDeviceCollection_GetDevice, "GetDevice" }, // 2869500939
		{ &Z_Construct_UFunction_UVideoDeviceCollection_Release, "Release" }, // 560918876
		{ &Z_Construct_UFunction_UVideoDeviceCollection_SetDevice, "SetDevice" }, // 3749632273
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVideoDeviceCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVideoDeviceCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVideoDeviceCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVideoDeviceCollection_Statics::ClassParams = {
	&UVideoDeviceCollection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVideoDeviceCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UVideoDeviceCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVideoDeviceCollection()
{
	if (!Z_Registration_Info_UClass_UVideoDeviceCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVideoDeviceCollection.OuterSingleton, Z_Construct_UClass_UVideoDeviceCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVideoDeviceCollection.OuterSingleton;
}
template<> AGORAPLUGIN_API UClass* StaticClass<UVideoDeviceCollection>()
{
	return UVideoDeviceCollection::StaticClass();
}
UVideoDeviceCollection::UVideoDeviceCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVideoDeviceCollection);
UVideoDeviceCollection::~UVideoDeviceCollection() {}
// End Class UVideoDeviceCollection

// Begin Class UAudioDeviceCollection Function GetApplicationVolume
struct Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics
{
	struct AudioDeviceCollection_eventGetApplicationVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetApplicationVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetApplicationVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioDeviceCollection, nullptr, "GetApplicationVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::AudioDeviceCollection_eventGetApplicationVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::AudioDeviceCollection_eventGetApplicationVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioDeviceCollection::execGetApplicationVolume)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetApplicationVolume(Z_Param_Out_volume);
	P_NATIVE_END;
}
// End Class UAudioDeviceCollection Function GetApplicationVolume

// Begin Class UAudioDeviceCollection Function GetCount
struct Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics
{
	struct AudioDeviceCollection_eventGetCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioDeviceCollection, nullptr, "GetCount", nullptr, nullptr, Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::AudioDeviceCollection_eventGetCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::AudioDeviceCollection_eventGetCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioDeviceCollection_GetCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioDeviceCollection_GetCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioDeviceCollection::execGetCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCount();
	P_NATIVE_END;
}
// End Class UAudioDeviceCollection Function GetCount

// Begin Class UAudioDeviceCollection Function GetDefaultDevice
struct Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics
{
	struct AudioDeviceCollection_eventGetDefaultDevice_Parms
	{
		FString deviceName;
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetDefaultDevice_Parms, deviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetDefaultDevice_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetDefaultDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_deviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioDeviceCollection, nullptr, "GetDefaultDevice", nullptr, nullptr, Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::AudioDeviceCollection_eventGetDefaultDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::AudioDeviceCollection_eventGetDefaultDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioDeviceCollection::execGetDefaultDevice)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDefaultDevice(Z_Param_Out_deviceName,Z_Param_Out_deviceId);
	P_NATIVE_END;
}
// End Class UAudioDeviceCollection Function GetDefaultDevice

// Begin Class UAudioDeviceCollection Function GetDevice
struct Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics
{
	struct AudioDeviceCollection_eventGetDevice_Parms
	{
		int32 index;
		FString deviceName;
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetDevice_Parms, index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetDevice_Parms, deviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetDevice_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventGetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::NewProp_deviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioDeviceCollection, nullptr, "GetDevice", nullptr, nullptr, Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::AudioDeviceCollection_eventGetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::AudioDeviceCollection_eventGetDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioDeviceCollection_GetDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioDeviceCollection_GetDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioDeviceCollection::execGetDevice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDevice(Z_Param_index,Z_Param_Out_deviceName,Z_Param_Out_deviceId);
	P_NATIVE_END;
}
// End Class UAudioDeviceCollection Function GetDevice

// Begin Class UAudioDeviceCollection Function IsApplicationMute
struct Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics
{
	struct AudioDeviceCollection_eventIsApplicationMute_Parms
	{
		bool mute;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_mute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::NewProp_mute_SetBit(void* Obj)
{
	((AudioDeviceCollection_eventIsApplicationMute_Parms*)Obj)->mute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioDeviceCollection_eventIsApplicationMute_Parms), &Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventIsApplicationMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::NewProp_mute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioDeviceCollection, nullptr, "IsApplicationMute", nullptr, nullptr, Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::AudioDeviceCollection_eventIsApplicationMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::AudioDeviceCollection_eventIsApplicationMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioDeviceCollection::execIsApplicationMute)
{
	P_GET_UBOOL(Z_Param_mute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->IsApplicationMute(Z_Param_mute);
	P_NATIVE_END;
}
// End Class UAudioDeviceCollection Function IsApplicationMute

// Begin Class UAudioDeviceCollection Function Release
struct Z_Construct_UFunction_UAudioDeviceCollection_Release_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioDeviceCollection_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioDeviceCollection, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioDeviceCollection_Release_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioDeviceCollection_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioDeviceCollection_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioDeviceCollection::execRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Release();
	P_NATIVE_END;
}
// End Class UAudioDeviceCollection Function Release

// Begin Class UAudioDeviceCollection Function SetApplicationMute
struct Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics
{
	struct AudioDeviceCollection_eventSetApplicationMute_Parms
	{
		bool mute;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_mute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::NewProp_mute_SetBit(void* Obj)
{
	((AudioDeviceCollection_eventSetApplicationMute_Parms*)Obj)->mute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AudioDeviceCollection_eventSetApplicationMute_Parms), &Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventSetApplicationMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::NewProp_mute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioDeviceCollection, nullptr, "SetApplicationMute", nullptr, nullptr, Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::AudioDeviceCollection_eventSetApplicationMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::AudioDeviceCollection_eventSetApplicationMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioDeviceCollection::execSetApplicationMute)
{
	P_GET_UBOOL(Z_Param_mute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetApplicationMute(Z_Param_mute);
	P_NATIVE_END;
}
// End Class UAudioDeviceCollection Function SetApplicationMute

// Begin Class UAudioDeviceCollection Function SetApplicationVolume
struct Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics
{
	struct AudioDeviceCollection_eventSetApplicationVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventSetApplicationVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventSetApplicationVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioDeviceCollection, nullptr, "SetApplicationVolume", nullptr, nullptr, Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::AudioDeviceCollection_eventSetApplicationVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::AudioDeviceCollection_eventSetApplicationVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioDeviceCollection::execSetApplicationVolume)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetApplicationVolume(Z_Param_volume);
	P_NATIVE_END;
}
// End Class UAudioDeviceCollection Function SetApplicationVolume

// Begin Class UAudioDeviceCollection Function SetDevice
struct Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics
{
	struct AudioDeviceCollection_eventSetDevice_Parms
	{
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceCollection" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventSetDevice_Parms, deviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceId_MetaData), NewProp_deviceId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AudioDeviceCollection_eventSetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioDeviceCollection, nullptr, "SetDevice", nullptr, nullptr, Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::AudioDeviceCollection_eventSetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::AudioDeviceCollection_eventSetDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAudioDeviceCollection_SetDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioDeviceCollection_SetDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAudioDeviceCollection::execSetDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetDevice(Z_Param_deviceId);
	P_NATIVE_END;
}
// End Class UAudioDeviceCollection Function SetDevice

// Begin Class UAudioDeviceCollection
void UAudioDeviceCollection::StaticRegisterNativesUAudioDeviceCollection()
{
	UClass* Class = UAudioDeviceCollection::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetApplicationVolume", &UAudioDeviceCollection::execGetApplicationVolume },
		{ "GetCount", &UAudioDeviceCollection::execGetCount },
		{ "GetDefaultDevice", &UAudioDeviceCollection::execGetDefaultDevice },
		{ "GetDevice", &UAudioDeviceCollection::execGetDevice },
		{ "IsApplicationMute", &UAudioDeviceCollection::execIsApplicationMute },
		{ "Release", &UAudioDeviceCollection::execRelease },
		{ "SetApplicationMute", &UAudioDeviceCollection::execSetApplicationMute },
		{ "SetApplicationVolume", &UAudioDeviceCollection::execSetApplicationVolume },
		{ "SetDevice", &UAudioDeviceCollection::execSetDevice },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioDeviceCollection);
UClass* Z_Construct_UClass_UAudioDeviceCollection_NoRegister()
{
	return UAudioDeviceCollection::StaticClass();
}
struct Z_Construct_UClass_UAudioDeviceCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioDeviceCollection_GetApplicationVolume, "GetApplicationVolume" }, // 2874900779
		{ &Z_Construct_UFunction_UAudioDeviceCollection_GetCount, "GetCount" }, // 2643343638
		{ &Z_Construct_UFunction_UAudioDeviceCollection_GetDefaultDevice, "GetDefaultDevice" }, // 2754094107
		{ &Z_Construct_UFunction_UAudioDeviceCollection_GetDevice, "GetDevice" }, // 1774026820
		{ &Z_Construct_UFunction_UAudioDeviceCollection_IsApplicationMute, "IsApplicationMute" }, // 2523049707
		{ &Z_Construct_UFunction_UAudioDeviceCollection_Release, "Release" }, // 2101971016
		{ &Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationMute, "SetApplicationMute" }, // 714270464
		{ &Z_Construct_UFunction_UAudioDeviceCollection_SetApplicationVolume, "SetApplicationVolume" }, // 1863525764
		{ &Z_Construct_UFunction_UAudioDeviceCollection_SetDevice, "SetDevice" }, // 1810280669
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioDeviceCollection>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioDeviceCollection_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioDeviceCollection_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioDeviceCollection_Statics::ClassParams = {
	&UAudioDeviceCollection::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioDeviceCollection_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioDeviceCollection_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioDeviceCollection()
{
	if (!Z_Registration_Info_UClass_UAudioDeviceCollection.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioDeviceCollection.OuterSingleton, Z_Construct_UClass_UAudioDeviceCollection_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioDeviceCollection.OuterSingleton;
}
template<> AGORAPLUGIN_API UClass* StaticClass<UAudioDeviceCollection>()
{
	return UAudioDeviceCollection::StaticClass();
}
UAudioDeviceCollection::UAudioDeviceCollection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioDeviceCollection);
UAudioDeviceCollection::~UAudioDeviceCollection() {}
// End Class UAudioDeviceCollection

// Begin Class UAgoraBPuVideoDeviceManager Function EnumerateVideoDevices
struct Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics
{
	struct AgoraBPuVideoDeviceManager_eventEnumerateVideoDevices_Parms
	{
		UVideoDeviceCollection* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventEnumerateVideoDevices_Parms, ReturnValue), Z_Construct_UClass_UVideoDeviceCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuVideoDeviceManager, nullptr, "EnumerateVideoDevices", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::AgoraBPuVideoDeviceManager_eventEnumerateVideoDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::AgoraBPuVideoDeviceManager_eventEnumerateVideoDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuVideoDeviceManager::execEnumerateVideoDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UVideoDeviceCollection**)Z_Param__Result=P_THIS->EnumerateVideoDevices();
	P_NATIVE_END;
}
// End Class UAgoraBPuVideoDeviceManager Function EnumerateVideoDevices

// Begin Class UAgoraBPuVideoDeviceManager Function GetAgoraVideoDeviceManager
struct Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics
{
	struct AgoraBPuVideoDeviceManager_eventGetAgoraVideoDeviceManager_Parms
	{
		UAgoraBPuVideoDeviceManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventGetAgoraVideoDeviceManager_Parms, ReturnValue), Z_Construct_UClass_UAgoraBPuVideoDeviceManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuVideoDeviceManager, nullptr, "GetAgoraVideoDeviceManager", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::AgoraBPuVideoDeviceManager_eventGetAgoraVideoDeviceManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::AgoraBPuVideoDeviceManager_eventGetAgoraVideoDeviceManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuVideoDeviceManager::execGetAgoraVideoDeviceManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAgoraBPuVideoDeviceManager**)Z_Param__Result=UAgoraBPuVideoDeviceManager::GetAgoraVideoDeviceManager();
	P_NATIVE_END;
}
// End Class UAgoraBPuVideoDeviceManager Function GetAgoraVideoDeviceManager

// Begin Class UAgoraBPuVideoDeviceManager Function GetCapability
struct Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics
{
	struct AgoraBPuVideoDeviceManager_eventGetCapability_Parms
	{
		FString deviceIdUTF8;
		int32 deviceCapabilityNumber;
		FVideoFormat capability;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceIdUTF8_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
	static const UECodeGen_Private::FIntPropertyParams NewProp_deviceCapabilityNumber;
	static const UECodeGen_Private::FStructPropertyParams NewProp_capability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventGetCapability_Parms, deviceIdUTF8), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceIdUTF8_MetaData), NewProp_deviceIdUTF8_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::NewProp_deviceCapabilityNumber = { "deviceCapabilityNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventGetCapability_Parms, deviceCapabilityNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::NewProp_capability = { "capability", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventGetCapability_Parms, capability), Z_Construct_UScriptStruct_FVideoFormat, METADATA_PARAMS(0, nullptr) }; // 3403245308
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventGetCapability_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::NewProp_deviceIdUTF8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::NewProp_deviceCapabilityNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::NewProp_capability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuVideoDeviceManager, nullptr, "GetCapability", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::AgoraBPuVideoDeviceManager_eventGetCapability_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::AgoraBPuVideoDeviceManager_eventGetCapability_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuVideoDeviceManager::execGetCapability)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_deviceIdUTF8);
	P_GET_PROPERTY(FIntProperty,Z_Param_deviceCapabilityNumber);
	P_GET_STRUCT_REF(FVideoFormat,Z_Param_Out_capability);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCapability(Z_Param_deviceIdUTF8,Z_Param_deviceCapabilityNumber,Z_Param_Out_capability);
	P_NATIVE_END;
}
// End Class UAgoraBPuVideoDeviceManager Function GetCapability

// Begin Class UAgoraBPuVideoDeviceManager Function GetDevice
struct Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics
{
	struct AgoraBPuVideoDeviceManager_eventGetDevice_Parms
	{
		FString deviceIdUTF8;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventGetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventGetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::NewProp_deviceIdUTF8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuVideoDeviceManager, nullptr, "GetDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::AgoraBPuVideoDeviceManager_eventGetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::AgoraBPuVideoDeviceManager_eventGetDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuVideoDeviceManager::execGetDevice)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceIdUTF8);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDevice(Z_Param_Out_deviceIdUTF8);
	P_NATIVE_END;
}
// End Class UAgoraBPuVideoDeviceManager Function GetDevice

// Begin Class UAgoraBPuVideoDeviceManager Function NumberOfCapabilities
struct Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics
{
	struct AgoraBPuVideoDeviceManager_eventNumberOfCapabilities_Parms
	{
		FString deviceIdUTF8;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceIdUTF8_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventNumberOfCapabilities_Parms, deviceIdUTF8), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceIdUTF8_MetaData), NewProp_deviceIdUTF8_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventNumberOfCapabilities_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_deviceIdUTF8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuVideoDeviceManager, nullptr, "NumberOfCapabilities", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::AgoraBPuVideoDeviceManager_eventNumberOfCapabilities_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::AgoraBPuVideoDeviceManager_eventNumberOfCapabilities_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuVideoDeviceManager::execNumberOfCapabilities)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_deviceIdUTF8);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->NumberOfCapabilities(Z_Param_deviceIdUTF8);
	P_NATIVE_END;
}
// End Class UAgoraBPuVideoDeviceManager Function NumberOfCapabilities

// Begin Class UAgoraBPuVideoDeviceManager Function Release
struct Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_Release_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuVideoDeviceManager, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_Release_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuVideoDeviceManager::execRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Release();
	P_NATIVE_END;
}
// End Class UAgoraBPuVideoDeviceManager Function Release

// Begin Class UAgoraBPuVideoDeviceManager Function SetDevice
struct Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics
{
	struct AgoraBPuVideoDeviceManager_eventSetDevice_Parms
	{
		FString deviceIdUTF8;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceIdUTF8_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceIdUTF8;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::NewProp_deviceIdUTF8 = { "deviceIdUTF8", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventSetDevice_Parms, deviceIdUTF8), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceIdUTF8_MetaData), NewProp_deviceIdUTF8_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventSetDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::NewProp_deviceIdUTF8,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuVideoDeviceManager, nullptr, "SetDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::AgoraBPuVideoDeviceManager_eventSetDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::AgoraBPuVideoDeviceManager_eventSetDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuVideoDeviceManager::execSetDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_deviceIdUTF8);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetDevice(Z_Param_deviceIdUTF8);
	P_NATIVE_END;
}
// End Class UAgoraBPuVideoDeviceManager Function SetDevice

// Begin Class UAgoraBPuVideoDeviceManager Function StartDeviceTest
struct Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics
{
	struct AgoraBPuVideoDeviceManager_eventStartDeviceTest_Parms
	{
		int64 hwnd;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_hwnd;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::NewProp_hwnd = { "hwnd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventStartDeviceTest_Parms, hwnd), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventStartDeviceTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::NewProp_hwnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuVideoDeviceManager, nullptr, "StartDeviceTest", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::AgoraBPuVideoDeviceManager_eventStartDeviceTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::AgoraBPuVideoDeviceManager_eventStartDeviceTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuVideoDeviceManager::execStartDeviceTest)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_hwnd);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->StartDeviceTest(Z_Param_hwnd);
	P_NATIVE_END;
}
// End Class UAgoraBPuVideoDeviceManager Function StartDeviceTest

// Begin Class UAgoraBPuVideoDeviceManager Function StopDeviceTest
struct Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics
{
	struct AgoraBPuVideoDeviceManager_eventStopDeviceTest_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IVideoDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuVideoDeviceManager_eventStopDeviceTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuVideoDeviceManager, nullptr, "StopDeviceTest", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::AgoraBPuVideoDeviceManager_eventStopDeviceTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::AgoraBPuVideoDeviceManager_eventStopDeviceTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuVideoDeviceManager::execStopDeviceTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->StopDeviceTest();
	P_NATIVE_END;
}
// End Class UAgoraBPuVideoDeviceManager Function StopDeviceTest

// Begin Class UAgoraBPuVideoDeviceManager
void UAgoraBPuVideoDeviceManager::StaticRegisterNativesUAgoraBPuVideoDeviceManager()
{
	UClass* Class = UAgoraBPuVideoDeviceManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumerateVideoDevices", &UAgoraBPuVideoDeviceManager::execEnumerateVideoDevices },
		{ "GetAgoraVideoDeviceManager", &UAgoraBPuVideoDeviceManager::execGetAgoraVideoDeviceManager },
		{ "GetCapability", &UAgoraBPuVideoDeviceManager::execGetCapability },
		{ "GetDevice", &UAgoraBPuVideoDeviceManager::execGetDevice },
		{ "NumberOfCapabilities", &UAgoraBPuVideoDeviceManager::execNumberOfCapabilities },
		{ "Release", &UAgoraBPuVideoDeviceManager::execRelease },
		{ "SetDevice", &UAgoraBPuVideoDeviceManager::execSetDevice },
		{ "StartDeviceTest", &UAgoraBPuVideoDeviceManager::execStartDeviceTest },
		{ "StopDeviceTest", &UAgoraBPuVideoDeviceManager::execStopDeviceTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuVideoDeviceManager);
UClass* Z_Construct_UClass_UAgoraBPuVideoDeviceManager_NoRegister()
{
	return UAgoraBPuVideoDeviceManager::StaticClass();
}
struct Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoDeviceCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoDeviceCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_EnumerateVideoDevices, "EnumerateVideoDevices" }, // 1995126003
		{ &Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetAgoraVideoDeviceManager, "GetAgoraVideoDeviceManager" }, // 3032937
		{ &Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetCapability, "GetCapability" }, // 3906037371
		{ &Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_GetDevice, "GetDevice" }, // 2466925434
		{ &Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_NumberOfCapabilities, "NumberOfCapabilities" }, // 3887479307
		{ &Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_Release, "Release" }, // 1016827764
		{ &Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_SetDevice, "SetDevice" }, // 1307690983
		{ &Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StartDeviceTest, "StartDeviceTest" }, // 1878041689
		{ &Z_Construct_UFunction_UAgoraBPuVideoDeviceManager_StopDeviceTest, "StopDeviceTest" }, // 1654922009
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuVideoDeviceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::NewProp_VideoDeviceCollection = { "VideoDeviceCollection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuVideoDeviceManager, VideoDeviceCollection), Z_Construct_UClass_UVideoDeviceCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoDeviceCollection_MetaData), NewProp_VideoDeviceCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::NewProp_VideoDeviceCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::ClassParams = {
	&UAgoraBPuVideoDeviceManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAgoraBPuVideoDeviceManager()
{
	if (!Z_Registration_Info_UClass_UAgoraBPuVideoDeviceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuVideoDeviceManager.OuterSingleton, Z_Construct_UClass_UAgoraBPuVideoDeviceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAgoraBPuVideoDeviceManager.OuterSingleton;
}
template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuVideoDeviceManager>()
{
	return UAgoraBPuVideoDeviceManager::StaticClass();
}
UAgoraBPuVideoDeviceManager::UAgoraBPuVideoDeviceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuVideoDeviceManager);
UAgoraBPuVideoDeviceManager::~UAgoraBPuVideoDeviceManager() {}
// End Class UAgoraBPuVideoDeviceManager

// Begin Class UAgoraBPuAudioDeviceManager Function EnumeratePlaybackDevices
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics
{
	struct AgoraBPuAudioDeviceManager_eventEnumeratePlaybackDevices_Parms
	{
		UAudioDeviceCollection* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventEnumeratePlaybackDevices_Parms, ReturnValue), Z_Construct_UClass_UAudioDeviceCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "EnumeratePlaybackDevices", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::AgoraBPuAudioDeviceManager_eventEnumeratePlaybackDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::AgoraBPuAudioDeviceManager_eventEnumeratePlaybackDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execEnumeratePlaybackDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioDeviceCollection**)Z_Param__Result=P_THIS->EnumeratePlaybackDevices();
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function EnumeratePlaybackDevices

// Begin Class UAgoraBPuAudioDeviceManager Function EnumerateRecordingDevices
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics
{
	struct AgoraBPuAudioDeviceManager_eventEnumerateRecordingDevices_Parms
	{
		UAudioDeviceCollection* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventEnumerateRecordingDevices_Parms, ReturnValue), Z_Construct_UClass_UAudioDeviceCollection_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "EnumerateRecordingDevices", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::AgoraBPuAudioDeviceManager_eventEnumerateRecordingDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::AgoraBPuAudioDeviceManager_eventEnumerateRecordingDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execEnumerateRecordingDevices)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioDeviceCollection**)Z_Param__Result=P_THIS->EnumerateRecordingDevices();
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function EnumerateRecordingDevices

// Begin Class UAgoraBPuAudioDeviceManager Function FollowSystemLoopbackDevice
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics
{
	struct AgoraBPuAudioDeviceManager_eventFollowSystemLoopbackDevice_Parms
	{
		bool enable;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::NewProp_enable_SetBit(void* Obj)
{
	((AgoraBPuAudioDeviceManager_eventFollowSystemLoopbackDevice_Parms*)Obj)->enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuAudioDeviceManager_eventFollowSystemLoopbackDevice_Parms), &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventFollowSystemLoopbackDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::NewProp_enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "FollowSystemLoopbackDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::AgoraBPuAudioDeviceManager_eventFollowSystemLoopbackDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::AgoraBPuAudioDeviceManager_eventFollowSystemLoopbackDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execFollowSystemLoopbackDevice)
{
	P_GET_UBOOL(Z_Param_enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FollowSystemLoopbackDevice(Z_Param_enable);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function FollowSystemLoopbackDevice

// Begin Class UAgoraBPuAudioDeviceManager Function FollowSystemPlaybackDevice
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics
{
	struct AgoraBPuAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms
	{
		bool enable;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_enable_SetBit(void* Obj)
{
	((AgoraBPuAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms*)Obj)->enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms), &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "FollowSystemPlaybackDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::AgoraBPuAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::AgoraBPuAudioDeviceManager_eventFollowSystemPlaybackDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execFollowSystemPlaybackDevice)
{
	P_GET_UBOOL(Z_Param_enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FollowSystemPlaybackDevice(Z_Param_enable);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function FollowSystemPlaybackDevice

// Begin Class UAgoraBPuAudioDeviceManager Function FollowSystemRecordingDevice
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics
{
	struct AgoraBPuAudioDeviceManager_eventFollowSystemRecordingDevice_Parms
	{
		bool enable;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_enable;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_enable_SetBit(void* Obj)
{
	((AgoraBPuAudioDeviceManager_eventFollowSystemRecordingDevice_Parms*)Obj)->enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_enable = { "enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuAudioDeviceManager_eventFollowSystemRecordingDevice_Parms), &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_enable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventFollowSystemRecordingDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "FollowSystemRecordingDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::AgoraBPuAudioDeviceManager_eventFollowSystemRecordingDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::AgoraBPuAudioDeviceManager_eventFollowSystemRecordingDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execFollowSystemRecordingDevice)
{
	P_GET_UBOOL(Z_Param_enable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->FollowSystemRecordingDevice(Z_Param_enable);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function FollowSystemRecordingDevice

// Begin Class UAgoraBPuAudioDeviceManager Function GetAgoraAudioDeviceManager
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetAgoraAudioDeviceManager_Parms
	{
		UAgoraBPuAudioDeviceManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetAgoraAudioDeviceManager_Parms, ReturnValue), Z_Construct_UClass_UAgoraBPuAudioDeviceManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetAgoraAudioDeviceManager", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::AgoraBPuAudioDeviceManager_eventGetAgoraAudioDeviceManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::AgoraBPuAudioDeviceManager_eventGetAgoraAudioDeviceManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetAgoraAudioDeviceManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAgoraBPuAudioDeviceManager**)Z_Param__Result=UAgoraBPuAudioDeviceManager::GetAgoraAudioDeviceManager();
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetAgoraAudioDeviceManager

// Begin Class UAgoraBPuAudioDeviceManager Function GetLoopbackDevice
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetLoopbackDevice_Parms
	{
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetLoopbackDevice_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetLoopbackDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetLoopbackDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::AgoraBPuAudioDeviceManager_eventGetLoopbackDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::AgoraBPuAudioDeviceManager_eventGetLoopbackDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetLoopbackDevice)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLoopbackDevice(Z_Param_Out_deviceId);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetLoopbackDevice

// Begin Class UAgoraBPuAudioDeviceManager Function GetPlaybackDevice
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetPlaybackDevice_Parms
	{
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetPlaybackDevice_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetPlaybackDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetPlaybackDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::AgoraBPuAudioDeviceManager_eventGetPlaybackDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::AgoraBPuAudioDeviceManager_eventGetPlaybackDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetPlaybackDevice)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlaybackDevice(Z_Param_Out_deviceId);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetPlaybackDevice

// Begin Class UAgoraBPuAudioDeviceManager Function GetPlaybackDeviceInfo
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms
	{
		FString deviceId;
		FString deviceName;
		FString deviceTypeName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceTypeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms, deviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceTypeName = { "deviceTypeName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms, deviceTypeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_deviceTypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetPlaybackDeviceInfo", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetPlaybackDeviceInfo)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceTypeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlaybackDeviceInfo(Z_Param_Out_deviceId,Z_Param_Out_deviceName,Z_Param_Out_deviceTypeName);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetPlaybackDeviceInfo

// Begin Class UAgoraBPuAudioDeviceManager Function GetPlaybackDeviceMute
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceMute_Parms
	{
		bool mute;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_mute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_mute_SetBit(void* Obj)
{
	((AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceMute_Parms*)Obj)->mute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceMute_Parms), &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_mute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetPlaybackDeviceMute", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetPlaybackDeviceMute)
{
	P_GET_UBOOL_REF(Z_Param_Out_mute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlaybackDeviceMute(Z_Param_Out_mute);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetPlaybackDeviceMute

// Begin Class UAgoraBPuAudioDeviceManager Function GetPlaybackDeviceVolume
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetPlaybackDeviceVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::AgoraBPuAudioDeviceManager_eventGetPlaybackDeviceVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetPlaybackDeviceVolume)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlaybackDeviceVolume(Z_Param_Out_volume);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetPlaybackDeviceVolume

// Begin Class UAgoraBPuAudioDeviceManager Function GetRecordingDevice
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetRecordingDevice_Parms
	{
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetRecordingDevice_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetRecordingDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetRecordingDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::AgoraBPuAudioDeviceManager_eventGetRecordingDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::AgoraBPuAudioDeviceManager_eventGetRecordingDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetRecordingDevice)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRecordingDevice(Z_Param_Out_deviceId);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetRecordingDevice

// Begin Class UAgoraBPuAudioDeviceManager Function GetRecordingDeviceInfo
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetRecordingDeviceInfo_Parms
	{
		FString deviceId;
		FString deviceName;
		FString deviceTypeName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceTypeName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetRecordingDeviceInfo_Parms, deviceId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceName = { "deviceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetRecordingDeviceInfo_Parms, deviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceTypeName = { "deviceTypeName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetRecordingDeviceInfo_Parms, deviceTypeName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetRecordingDeviceInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_deviceTypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetRecordingDeviceInfo", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::AgoraBPuAudioDeviceManager_eventGetRecordingDeviceInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::AgoraBPuAudioDeviceManager_eventGetRecordingDeviceInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetRecordingDeviceInfo)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceName);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_deviceTypeName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRecordingDeviceInfo(Z_Param_Out_deviceId,Z_Param_Out_deviceName,Z_Param_Out_deviceTypeName);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetRecordingDeviceInfo

// Begin Class UAgoraBPuAudioDeviceManager Function GetRecordingDeviceMute
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetRecordingDeviceMute_Parms
	{
		bool mute;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_mute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_mute_SetBit(void* Obj)
{
	((AgoraBPuAudioDeviceManager_eventGetRecordingDeviceMute_Parms*)Obj)->mute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuAudioDeviceManager_eventGetRecordingDeviceMute_Parms), &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetRecordingDeviceMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_mute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetRecordingDeviceMute", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::AgoraBPuAudioDeviceManager_eventGetRecordingDeviceMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::AgoraBPuAudioDeviceManager_eventGetRecordingDeviceMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetRecordingDeviceMute)
{
	P_GET_UBOOL_REF(Z_Param_Out_mute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRecordingDeviceMute(Z_Param_Out_mute);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetRecordingDeviceMute

// Begin Class UAgoraBPuAudioDeviceManager Function GetRecordingDeviceVolume
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics
{
	struct AgoraBPuAudioDeviceManager_eventGetRecordingDeviceVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetRecordingDeviceVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventGetRecordingDeviceVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "GetRecordingDeviceVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::AgoraBPuAudioDeviceManager_eventGetRecordingDeviceVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::AgoraBPuAudioDeviceManager_eventGetRecordingDeviceVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execGetRecordingDeviceVolume)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetRecordingDeviceVolume(Z_Param_Out_volume);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function GetRecordingDeviceVolume

// Begin Class UAgoraBPuAudioDeviceManager Function Release
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_Release_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "Release", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_Release_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_Release_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_Release()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_Release_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execRelease)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Release();
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function Release

// Begin Class UAgoraBPuAudioDeviceManager Function SetLoopbackDevice
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics
{
	struct AgoraBPuAudioDeviceManager_eventSetLoopbackDevice_Parms
	{
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetLoopbackDevice_Parms, deviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceId_MetaData), NewProp_deviceId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetLoopbackDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "SetLoopbackDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::AgoraBPuAudioDeviceManager_eventSetLoopbackDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::AgoraBPuAudioDeviceManager_eventSetLoopbackDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execSetLoopbackDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetLoopbackDevice(Z_Param_deviceId);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function SetLoopbackDevice

// Begin Class UAgoraBPuAudioDeviceManager Function SetPlaybackDevice
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics
{
	struct AgoraBPuAudioDeviceManager_eventSetPlaybackDevice_Parms
	{
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetPlaybackDevice_Parms, deviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceId_MetaData), NewProp_deviceId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetPlaybackDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "SetPlaybackDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::AgoraBPuAudioDeviceManager_eventSetPlaybackDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::AgoraBPuAudioDeviceManager_eventSetPlaybackDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execSetPlaybackDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetPlaybackDevice(Z_Param_deviceId);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function SetPlaybackDevice

// Begin Class UAgoraBPuAudioDeviceManager Function SetPlaybackDeviceMute
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics
{
	struct AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceMute_Parms
	{
		bool mute;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_mute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_mute_SetBit(void* Obj)
{
	((AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceMute_Parms*)Obj)->mute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceMute_Parms), &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_mute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "SetPlaybackDeviceMute", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execSetPlaybackDeviceMute)
{
	P_GET_UBOOL(Z_Param_mute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetPlaybackDeviceMute(Z_Param_mute);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function SetPlaybackDeviceMute

// Begin Class UAgoraBPuAudioDeviceManager Function SetPlaybackDeviceVolume
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics
{
	struct AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "SetPlaybackDeviceVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::AgoraBPuAudioDeviceManager_eventSetPlaybackDeviceVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execSetPlaybackDeviceVolume)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetPlaybackDeviceVolume(Z_Param_volume);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function SetPlaybackDeviceVolume

// Begin Class UAgoraBPuAudioDeviceManager Function SetRecordingDevice
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics
{
	struct AgoraBPuAudioDeviceManager_eventSetRecordingDevice_Parms
	{
		FString deviceId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deviceId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_deviceId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::NewProp_deviceId = { "deviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetRecordingDevice_Parms, deviceId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deviceId_MetaData), NewProp_deviceId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetRecordingDevice_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::NewProp_deviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "SetRecordingDevice", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::AgoraBPuAudioDeviceManager_eventSetRecordingDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::AgoraBPuAudioDeviceManager_eventSetRecordingDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execSetRecordingDevice)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_deviceId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetRecordingDevice(Z_Param_deviceId);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function SetRecordingDevice

// Begin Class UAgoraBPuAudioDeviceManager Function SetRecordingDeviceMute
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics
{
	struct AgoraBPuAudioDeviceManager_eventSetRecordingDeviceMute_Parms
	{
		bool mute;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static void NewProp_mute_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_mute;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_mute_SetBit(void* Obj)
{
	((AgoraBPuAudioDeviceManager_eventSetRecordingDeviceMute_Parms*)Obj)->mute = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_mute = { "mute", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AgoraBPuAudioDeviceManager_eventSetRecordingDeviceMute_Parms), &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_mute_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetRecordingDeviceMute_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_mute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "SetRecordingDeviceMute", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::AgoraBPuAudioDeviceManager_eventSetRecordingDeviceMute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::AgoraBPuAudioDeviceManager_eventSetRecordingDeviceMute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execSetRecordingDeviceMute)
{
	P_GET_UBOOL(Z_Param_mute);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetRecordingDeviceMute(Z_Param_mute);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function SetRecordingDeviceMute

// Begin Class UAgoraBPuAudioDeviceManager Function SetRecordingDeviceVolume
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics
{
	struct AgoraBPuAudioDeviceManager_eventSetRecordingDeviceVolume_Parms
	{
		int32 volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::NewProp_volume = { "volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetRecordingDeviceVolume_Parms, volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventSetRecordingDeviceVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::NewProp_volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "SetRecordingDeviceVolume", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::AgoraBPuAudioDeviceManager_eventSetRecordingDeviceVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::AgoraBPuAudioDeviceManager_eventSetRecordingDeviceVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execSetRecordingDeviceVolume)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetRecordingDeviceVolume(Z_Param_volume);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function SetRecordingDeviceVolume

// Begin Class UAgoraBPuAudioDeviceManager Function StartAudioDeviceLoopbackTest
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics
{
	struct AgoraBPuAudioDeviceManager_eventStartAudioDeviceLoopbackTest_Parms
	{
		int32 indicationInterval;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_indicationInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::NewProp_indicationInterval = { "indicationInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventStartAudioDeviceLoopbackTest_Parms, indicationInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventStartAudioDeviceLoopbackTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::NewProp_indicationInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "StartAudioDeviceLoopbackTest", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::AgoraBPuAudioDeviceManager_eventStartAudioDeviceLoopbackTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::AgoraBPuAudioDeviceManager_eventStartAudioDeviceLoopbackTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execStartAudioDeviceLoopbackTest)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_indicationInterval);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->StartAudioDeviceLoopbackTest(Z_Param_indicationInterval);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function StartAudioDeviceLoopbackTest

// Begin Class UAgoraBPuAudioDeviceManager Function StartPlaybackDeviceTest
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics
{
	struct AgoraBPuAudioDeviceManager_eventStartPlaybackDeviceTest_Parms
	{
		FString testAudioFilePath;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_testAudioFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_testAudioFilePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::NewProp_testAudioFilePath = { "testAudioFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventStartPlaybackDeviceTest_Parms, testAudioFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_testAudioFilePath_MetaData), NewProp_testAudioFilePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventStartPlaybackDeviceTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::NewProp_testAudioFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "StartPlaybackDeviceTest", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::AgoraBPuAudioDeviceManager_eventStartPlaybackDeviceTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::AgoraBPuAudioDeviceManager_eventStartPlaybackDeviceTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execStartPlaybackDeviceTest)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_testAudioFilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->StartPlaybackDeviceTest(Z_Param_testAudioFilePath);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function StartPlaybackDeviceTest

// Begin Class UAgoraBPuAudioDeviceManager Function StartRecordingDeviceTest
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics
{
	struct AgoraBPuAudioDeviceManager_eventStartRecordingDeviceTest_Parms
	{
		int32 indicationInterval;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_indicationInterval;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::NewProp_indicationInterval = { "indicationInterval", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventStartRecordingDeviceTest_Parms, indicationInterval), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventStartRecordingDeviceTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::NewProp_indicationInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "StartRecordingDeviceTest", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::AgoraBPuAudioDeviceManager_eventStartRecordingDeviceTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::AgoraBPuAudioDeviceManager_eventStartRecordingDeviceTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execStartRecordingDeviceTest)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_indicationInterval);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->StartRecordingDeviceTest(Z_Param_indicationInterval);
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function StartRecordingDeviceTest

// Begin Class UAgoraBPuAudioDeviceManager Function StopAudioDeviceLoopbackTest
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics
{
	struct AgoraBPuAudioDeviceManager_eventStopAudioDeviceLoopbackTest_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventStopAudioDeviceLoopbackTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "StopAudioDeviceLoopbackTest", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::AgoraBPuAudioDeviceManager_eventStopAudioDeviceLoopbackTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::AgoraBPuAudioDeviceManager_eventStopAudioDeviceLoopbackTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execStopAudioDeviceLoopbackTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->StopAudioDeviceLoopbackTest();
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function StopAudioDeviceLoopbackTest

// Begin Class UAgoraBPuAudioDeviceManager Function StopPlaybackDeviceTest
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics
{
	struct AgoraBPuAudioDeviceManager_eventStopPlaybackDeviceTest_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventStopPlaybackDeviceTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "StopPlaybackDeviceTest", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::AgoraBPuAudioDeviceManager_eventStopPlaybackDeviceTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::AgoraBPuAudioDeviceManager_eventStopPlaybackDeviceTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execStopPlaybackDeviceTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->StopPlaybackDeviceTest();
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function StopPlaybackDeviceTest

// Begin Class UAgoraBPuAudioDeviceManager Function StopRecordingDeviceTest
struct Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics
{
	struct AgoraBPuAudioDeviceManager_eventStopRecordingDeviceTest_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Agora|IAudioDeviceManager" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AgoraBPuAudioDeviceManager_eventStopRecordingDeviceTest_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAgoraBPuAudioDeviceManager, nullptr, "StopRecordingDeviceTest", nullptr, nullptr, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::AgoraBPuAudioDeviceManager_eventStopRecordingDeviceTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::AgoraBPuAudioDeviceManager_eventStopRecordingDeviceTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAgoraBPuAudioDeviceManager::execStopRecordingDeviceTest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->StopRecordingDeviceTest();
	P_NATIVE_END;
}
// End Class UAgoraBPuAudioDeviceManager Function StopRecordingDeviceTest

// Begin Class UAgoraBPuAudioDeviceManager
void UAgoraBPuAudioDeviceManager::StaticRegisterNativesUAgoraBPuAudioDeviceManager()
{
	UClass* Class = UAgoraBPuAudioDeviceManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumeratePlaybackDevices", &UAgoraBPuAudioDeviceManager::execEnumeratePlaybackDevices },
		{ "EnumerateRecordingDevices", &UAgoraBPuAudioDeviceManager::execEnumerateRecordingDevices },
		{ "FollowSystemLoopbackDevice", &UAgoraBPuAudioDeviceManager::execFollowSystemLoopbackDevice },
		{ "FollowSystemPlaybackDevice", &UAgoraBPuAudioDeviceManager::execFollowSystemPlaybackDevice },
		{ "FollowSystemRecordingDevice", &UAgoraBPuAudioDeviceManager::execFollowSystemRecordingDevice },
		{ "GetAgoraAudioDeviceManager", &UAgoraBPuAudioDeviceManager::execGetAgoraAudioDeviceManager },
		{ "GetLoopbackDevice", &UAgoraBPuAudioDeviceManager::execGetLoopbackDevice },
		{ "GetPlaybackDevice", &UAgoraBPuAudioDeviceManager::execGetPlaybackDevice },
		{ "GetPlaybackDeviceInfo", &UAgoraBPuAudioDeviceManager::execGetPlaybackDeviceInfo },
		{ "GetPlaybackDeviceMute", &UAgoraBPuAudioDeviceManager::execGetPlaybackDeviceMute },
		{ "GetPlaybackDeviceVolume", &UAgoraBPuAudioDeviceManager::execGetPlaybackDeviceVolume },
		{ "GetRecordingDevice", &UAgoraBPuAudioDeviceManager::execGetRecordingDevice },
		{ "GetRecordingDeviceInfo", &UAgoraBPuAudioDeviceManager::execGetRecordingDeviceInfo },
		{ "GetRecordingDeviceMute", &UAgoraBPuAudioDeviceManager::execGetRecordingDeviceMute },
		{ "GetRecordingDeviceVolume", &UAgoraBPuAudioDeviceManager::execGetRecordingDeviceVolume },
		{ "Release", &UAgoraBPuAudioDeviceManager::execRelease },
		{ "SetLoopbackDevice", &UAgoraBPuAudioDeviceManager::execSetLoopbackDevice },
		{ "SetPlaybackDevice", &UAgoraBPuAudioDeviceManager::execSetPlaybackDevice },
		{ "SetPlaybackDeviceMute", &UAgoraBPuAudioDeviceManager::execSetPlaybackDeviceMute },
		{ "SetPlaybackDeviceVolume", &UAgoraBPuAudioDeviceManager::execSetPlaybackDeviceVolume },
		{ "SetRecordingDevice", &UAgoraBPuAudioDeviceManager::execSetRecordingDevice },
		{ "SetRecordingDeviceMute", &UAgoraBPuAudioDeviceManager::execSetRecordingDeviceMute },
		{ "SetRecordingDeviceVolume", &UAgoraBPuAudioDeviceManager::execSetRecordingDeviceVolume },
		{ "StartAudioDeviceLoopbackTest", &UAgoraBPuAudioDeviceManager::execStartAudioDeviceLoopbackTest },
		{ "StartPlaybackDeviceTest", &UAgoraBPuAudioDeviceManager::execStartPlaybackDeviceTest },
		{ "StartRecordingDeviceTest", &UAgoraBPuAudioDeviceManager::execStartRecordingDeviceTest },
		{ "StopAudioDeviceLoopbackTest", &UAgoraBPuAudioDeviceManager::execStopAudioDeviceLoopbackTest },
		{ "StopPlaybackDeviceTest", &UAgoraBPuAudioDeviceManager::execStopPlaybackDeviceTest },
		{ "StopRecordingDeviceTest", &UAgoraBPuAudioDeviceManager::execStopRecordingDeviceTest },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuAudioDeviceManager);
UClass* Z_Construct_UClass_UAgoraBPuAudioDeviceManager_NoRegister()
{
	return UAgoraBPuAudioDeviceManager::StaticClass();
}
struct Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackDeviceCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecordDeviceCollection_MetaData[] = {
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/AgoraBPuDeviceManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaybackDeviceCollection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RecordDeviceCollection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumeratePlaybackDevices, "EnumeratePlaybackDevices" }, // 2189026946
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_EnumerateRecordingDevices, "EnumerateRecordingDevices" }, // 2070729836
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemLoopbackDevice, "FollowSystemLoopbackDevice" }, // 702630531
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemPlaybackDevice, "FollowSystemPlaybackDevice" }, // 2842440952
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_FollowSystemRecordingDevice, "FollowSystemRecordingDevice" }, // 3450676377
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetAgoraAudioDeviceManager, "GetAgoraAudioDeviceManager" }, // 4123431718
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetLoopbackDevice, "GetLoopbackDevice" }, // 730738277
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDevice, "GetPlaybackDevice" }, // 1689992458
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceInfo, "GetPlaybackDeviceInfo" }, // 1077097839
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceMute, "GetPlaybackDeviceMute" }, // 3769612739
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetPlaybackDeviceVolume, "GetPlaybackDeviceVolume" }, // 439704852
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDevice, "GetRecordingDevice" }, // 585236684
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceInfo, "GetRecordingDeviceInfo" }, // 297820803
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceMute, "GetRecordingDeviceMute" }, // 965993792
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_GetRecordingDeviceVolume, "GetRecordingDeviceVolume" }, // 613579831
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_Release, "Release" }, // 4107942275
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetLoopbackDevice, "SetLoopbackDevice" }, // 1129103294
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDevice, "SetPlaybackDevice" }, // 1369716560
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceMute, "SetPlaybackDeviceMute" }, // 1246618829
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetPlaybackDeviceVolume, "SetPlaybackDeviceVolume" }, // 3455042584
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDevice, "SetRecordingDevice" }, // 285720182
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceMute, "SetRecordingDeviceMute" }, // 4137246262
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_SetRecordingDeviceVolume, "SetRecordingDeviceVolume" }, // 341255805
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartAudioDeviceLoopbackTest, "StartAudioDeviceLoopbackTest" }, // 1434143089
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartPlaybackDeviceTest, "StartPlaybackDeviceTest" }, // 49272133
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StartRecordingDeviceTest, "StartRecordingDeviceTest" }, // 2028087465
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopAudioDeviceLoopbackTest, "StopAudioDeviceLoopbackTest" }, // 869920201
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopPlaybackDeviceTest, "StopPlaybackDeviceTest" }, // 3165827158
		{ &Z_Construct_UFunction_UAgoraBPuAudioDeviceManager_StopRecordingDeviceTest, "StopRecordingDeviceTest" }, // 1566680200
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuAudioDeviceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::NewProp_PlaybackDeviceCollection = { "PlaybackDeviceCollection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuAudioDeviceManager, PlaybackDeviceCollection), Z_Construct_UClass_UAudioDeviceCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackDeviceCollection_MetaData), NewProp_PlaybackDeviceCollection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::NewProp_RecordDeviceCollection = { "RecordDeviceCollection", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAgoraBPuAudioDeviceManager, RecordDeviceCollection), Z_Construct_UClass_UAudioDeviceCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecordDeviceCollection_MetaData), NewProp_RecordDeviceCollection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::NewProp_PlaybackDeviceCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::NewProp_RecordDeviceCollection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::ClassParams = {
	&UAgoraBPuAudioDeviceManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAgoraBPuAudioDeviceManager()
{
	if (!Z_Registration_Info_UClass_UAgoraBPuAudioDeviceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuAudioDeviceManager.OuterSingleton, Z_Construct_UClass_UAgoraBPuAudioDeviceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAgoraBPuAudioDeviceManager.OuterSingleton;
}
template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuAudioDeviceManager>()
{
	return UAgoraBPuAudioDeviceManager::StaticClass();
}
UAgoraBPuAudioDeviceManager::UAgoraBPuAudioDeviceManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuAudioDeviceManager);
UAgoraBPuAudioDeviceManager::~UAgoraBPuAudioDeviceManager() {}
// End Class UAgoraBPuAudioDeviceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVideoDeviceCollection, UVideoDeviceCollection::StaticClass, TEXT("UVideoDeviceCollection"), &Z_Registration_Info_UClass_UVideoDeviceCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVideoDeviceCollection), 2501105786U) },
		{ Z_Construct_UClass_UAudioDeviceCollection, UAudioDeviceCollection::StaticClass, TEXT("UAudioDeviceCollection"), &Z_Registration_Info_UClass_UAudioDeviceCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioDeviceCollection), 1030394087U) },
		{ Z_Construct_UClass_UAgoraBPuVideoDeviceManager, UAgoraBPuVideoDeviceManager::StaticClass, TEXT("UAgoraBPuVideoDeviceManager"), &Z_Registration_Info_UClass_UAgoraBPuVideoDeviceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuVideoDeviceManager), 615804007U) },
		{ Z_Construct_UClass_UAgoraBPuAudioDeviceManager, UAgoraBPuAudioDeviceManager::StaticClass, TEXT("UAgoraBPuAudioDeviceManager"), &Z_Registration_Info_UClass_UAgoraBPuAudioDeviceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuAudioDeviceManager), 2777802267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_1089652003(TEXT("/Script/AgoraPlugin"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_AgoraBPuDeviceManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
