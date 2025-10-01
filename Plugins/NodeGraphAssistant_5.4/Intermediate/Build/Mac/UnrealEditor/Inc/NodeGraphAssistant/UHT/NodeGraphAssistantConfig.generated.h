// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NodeGraphAssistantConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NODEGRAPHASSISTANT_NodeGraphAssistantConfig_generated_h
#error "NodeGraphAssistantConfig.generated.h already included, missing '#pragma once' in NodeGraphAssistantConfig.h"
#endif
#define NODEGRAPHASSISTANT_NodeGraphAssistantConfig_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNodeGraphAssistantConfig(); \
	friend struct Z_Construct_UClass_UNodeGraphAssistantConfig_Statics; \
public: \
	DECLARE_CLASS(UNodeGraphAssistantConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NodeGraphAssistant"), NO_API) \
	DECLARE_SERIALIZER(UNodeGraphAssistantConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNodeGraphAssistantConfig(UNodeGraphAssistantConfig&&); \
	UNodeGraphAssistantConfig(const UNodeGraphAssistantConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeGraphAssistantConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeGraphAssistantConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNodeGraphAssistantConfig) \
	NO_API virtual ~UNodeGraphAssistantConfig();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_25_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NODEGRAPHASSISTANT_API UClass* StaticClass<class UNodeGraphAssistantConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_NodeGraphAssistant_Source_Private_NodeGraphAssistantConfig_h


#define FOREACH_ENUM_ECUTOFFMOUSEBUTTON(op) \
	op(ECutOffMouseButton::Middle) \
	op(ECutOffMouseButton::Left) \
	op(ECutOffMouseButton::None) 

enum class ECutOffMouseButton : uint8;
template<> struct TIsUEnumClass<ECutOffMouseButton> { enum { Value = true }; };
template<> NODEGRAPHASSISTANT_API UEnum* StaticEnum<ECutOffMouseButton>();

#define FOREACH_ENUM_EAUTOCONNECTMODIFIER(op) \
	op(EAutoConnectModifier::Alt) \
	op(EAutoConnectModifier::None) 

enum class EAutoConnectModifier : uint8;
template<> struct TIsUEnumClass<EAutoConnectModifier> { enum { Value = true }; };
template<> NODEGRAPHASSISTANT_API UEnum* StaticEnum<EAutoConnectModifier>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
