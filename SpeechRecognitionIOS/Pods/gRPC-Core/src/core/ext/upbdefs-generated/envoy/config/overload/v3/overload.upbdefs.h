/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/overload/v3/overload.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_OVERLOAD_V3_OVERLOAD_PROTO_UPBDEFS_H_
#define ENVOY_CONFIG_OVERLOAD_V3_OVERLOAD_PROTO_UPBDEFS_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/def.h"
#else
  #include  "upb/def.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif
#ifdef __cplusplus
extern "C" {
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/def.h"
#else
  #include  "upb/def.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

extern upb_def_init envoy_config_overload_v3_overload_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_config_overload_v3_ResourceMonitor_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_overload_v3_overload_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.overload.v3.ResourceMonitor");
}

UPB_INLINE const upb_msgdef *envoy_config_overload_v3_ThresholdTrigger_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_overload_v3_overload_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.overload.v3.ThresholdTrigger");
}

UPB_INLINE const upb_msgdef *envoy_config_overload_v3_ScaledTrigger_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_overload_v3_overload_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.overload.v3.ScaledTrigger");
}

UPB_INLINE const upb_msgdef *envoy_config_overload_v3_Trigger_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_overload_v3_overload_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.overload.v3.Trigger");
}

UPB_INLINE const upb_msgdef *envoy_config_overload_v3_ScaleTimersOverloadActionConfig_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_overload_v3_overload_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.overload.v3.ScaleTimersOverloadActionConfig");
}

UPB_INLINE const upb_msgdef *envoy_config_overload_v3_ScaleTimersOverloadActionConfig_ScaleTimer_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_overload_v3_overload_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.overload.v3.ScaleTimersOverloadActionConfig.ScaleTimer");
}

UPB_INLINE const upb_msgdef *envoy_config_overload_v3_OverloadAction_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_overload_v3_overload_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.overload.v3.OverloadAction");
}

UPB_INLINE const upb_msgdef *envoy_config_overload_v3_BufferFactoryConfig_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_overload_v3_overload_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.overload.v3.BufferFactoryConfig");
}

UPB_INLINE const upb_msgdef *envoy_config_overload_v3_OverloadManager_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_overload_v3_overload_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.overload.v3.OverloadManager");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_CONFIG_OVERLOAD_V3_OVERLOAD_PROTO_UPBDEFS_H_ */
