// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AgoraPlugin/Public/AgoraBluePrintPlugin/UtilityAgoraBPuLogger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilityAgoraBPuLogger() {}

// Begin Cross Module References
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuLogger();
AGORAPLUGIN_API UClass* Z_Construct_UClass_UAgoraBPuLogger_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AgoraPlugin();
// End Cross Module References

// Begin Class UAgoraBPuLogger
void UAgoraBPuLogger::StaticRegisterNativesUAgoraBPuLogger()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAgoraBPuLogger);
UClass* Z_Construct_UClass_UAgoraBPuLogger_NoRegister()
{
	return UAgoraBPuLogger::StaticClass();
}
struct Z_Construct_UClass_UAgoraBPuLogger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "AgoraBluePrintPlugin/UtilityAgoraBPuLogger.h" },
		{ "ModuleRelativePath", "Public/AgoraBluePrintPlugin/UtilityAgoraBPuLogger.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAgoraBPuLogger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAgoraBPuLogger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AgoraPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuLogger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAgoraBPuLogger_Statics::ClassParams = {
	&UAgoraBPuLogger::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAgoraBPuLogger_Statics::Class_MetaDataParams), Z_Construct_UClass_UAgoraBPuLogger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAgoraBPuLogger()
{
	if (!Z_Registration_Info_UClass_UAgoraBPuLogger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAgoraBPuLogger.OuterSingleton, Z_Construct_UClass_UAgoraBPuLogger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAgoraBPuLogger.OuterSingleton;
}
template<> AGORAPLUGIN_API UClass* StaticClass<UAgoraBPuLogger>()
{
	return UAgoraBPuLogger::StaticClass();
}
UAgoraBPuLogger::UAgoraBPuLogger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAgoraBPuLogger);
UAgoraBPuLogger::~UAgoraBPuLogger() {}
// End Class UAgoraBPuLogger

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_UtilityAgoraBPuLogger_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAgoraBPuLogger, UAgoraBPuLogger::StaticClass, TEXT("UAgoraBPuLogger"), &Z_Registration_Info_UClass_UAgoraBPuLogger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAgoraBPuLogger), 2963182421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_UtilityAgoraBPuLogger_h_1724467014(TEXT("/Script/AgoraPlugin"),
	Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_UtilityAgoraBPuLogger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_Unreal_Projects_P132VideoChat_Plugins_AgoraPlugin_Source_AgoraPlugin_Public_AgoraBluePrintPlugin_UtilityAgoraBPuLogger_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
