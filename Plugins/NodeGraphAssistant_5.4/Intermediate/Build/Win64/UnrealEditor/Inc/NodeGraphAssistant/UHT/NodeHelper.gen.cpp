// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Private/NodeHelper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodeHelper() {}

// Begin Cross Module References
NODEGRAPHASSISTANT_API UEnum* Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection();
UPackage* Z_Construct_UPackage__Script_NodeGraphAssistant();
// End Cross Module References

// Begin Enum EAlignDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlignDirection;
static UEnum* EAlignDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAlignDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAlignDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection, (UObject*)Z_Construct_UPackage__Script_NodeGraphAssistant(), TEXT("EAlignDirection"));
	}
	return Z_Registration_Info_UEnum_EAlignDirection.OuterSingleton;
}
template<> NODEGRAPHASSISTANT_API UEnum* StaticEnum<EAlignDirection>()
{
	return EAlignDirection_StaticEnum();
}
struct Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AD_InputDirection.Name", "AD_InputDirection" },
		{ "AD_OutputDirection.Name", "AD_OutputDirection" },
		{ "ModuleRelativePath", "Private/NodeHelper.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AD_InputDirection", (int64)AD_InputDirection },
		{ "AD_OutputDirection", (int64)AD_OutputDirection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NodeGraphAssistant,
	nullptr,
	"EAlignDirection",
	"EAlignDirection",
	Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection()
{
	if (!Z_Registration_Info_UEnum_EAlignDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlignDirection.InnerSingleton, Z_Construct_UEnum_NodeGraphAssistant_EAlignDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAlignDirection.InnerSingleton;
}
// End Enum EAlignDirection

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeHelper_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAlignDirection_StaticEnum, TEXT("EAlignDirection"), &Z_Registration_Info_UEnum_EAlignDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4015159184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeHelper_h_676900511(TEXT("/Script/NodeGraphAssistant"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeHelper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeHelper_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
