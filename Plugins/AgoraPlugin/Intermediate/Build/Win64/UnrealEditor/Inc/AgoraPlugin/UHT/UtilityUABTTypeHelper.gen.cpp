// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/UtilityUABTTypeHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilityUABTTypeHelper() {}

// Begin Cross Module References
AGORAPLUGIN_API UEnum* Z_Construct_UEnum_AgoraPlugin_EAgoraOptional();
UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References

// Begin Enum EAgoraOptional
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAgoraOptional;
static UEnum* EAgoraOptional_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAgoraOptional.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAgoraOptional.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AgoraPlugin_EAgoraOptional, (UObject*)Z_Construct_UPackage__Script_AgoraPlugin(), TEXT("EAgoraOptional"));
	}
	return Z_Registration_Info_UEnum_EAgoraOptional.OuterSingleton;
}
template<> AGORAPLUGIN_API UEnum* StaticEnum<EAgoraOptional>()
{
	return EAgoraOptional_StaticEnum();
}
struct Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AGORA_FALSE_VALUE.Name", "EAgoraOptional::AGORA_FALSE_VALUE" },
		{ "AGORA_NULL_VALUE.Name", "EAgoraOptional::AGORA_NULL_VALUE" },
		{ "AGORA_TRUE_VALUE.Name", "EAgoraOptional::AGORA_TRUE_VALUE" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/UtilityUABTTypeHelper.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAgoraOptional::AGORA_NULL_VALUE", (int64)EAgoraOptional::AGORA_NULL_VALUE },
		{ "EAgoraOptional::AGORA_TRUE_VALUE", (int64)EAgoraOptional::AGORA_TRUE_VALUE },
		{ "EAgoraOptional::AGORA_FALSE_VALUE", (int64)EAgoraOptional::AGORA_FALSE_VALUE },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AgoraPlugin,
	nullptr,
	"EAgoraOptional",
	"EAgoraOptional",
	Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AgoraPlugin_EAgoraOptional()
{
	if (!Z_Registration_Info_UEnum_EAgoraOptional.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAgoraOptional.InnerSingleton, Z_Construct_UEnum_AgoraPlugin_EAgoraOptional_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAgoraOptional.InnerSingleton;
}
// End Enum EAgoraOptional

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_UtilityUABTTypeHelper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAgoraOptional_StaticEnum, TEXT("EAgoraOptional"), &Z_Registration_Info_UEnum_EAgoraOptional, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 369006852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_UtilityUABTTypeHelper_h_1413378728(TEXT("/Script/AgoraPlugin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_UtilityUABTTypeHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_UtilityUABTTypeHelper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
