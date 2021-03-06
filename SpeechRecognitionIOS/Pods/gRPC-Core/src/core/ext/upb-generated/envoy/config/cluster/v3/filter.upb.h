/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/cluster/v3/filter.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_CLUSTER_V3_FILTER_PROTO_UPB_H_
#define ENVOY_CONFIG_CLUSTER_V3_FILTER_PROTO_UPB_H_

#if COCOAPODS==1
  #include  "third_party/upb/upb/msg_internal.h"
#else
  #include  "upb/msg_internal.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode.h"
#else
  #include  "upb/decode.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/decode_fast.h"
#else
  #include  "upb/decode_fast.h"
#endif
#if COCOAPODS==1
  #include  "third_party/upb/upb/encode.h"
#else
  #include  "upb/encode.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_cluster_v3_Filter;
typedef struct envoy_config_cluster_v3_Filter envoy_config_cluster_v3_Filter;
extern const upb_msglayout envoy_config_cluster_v3_Filter_msginit;
struct google_protobuf_Any;
extern const upb_msglayout google_protobuf_Any_msginit;


/* envoy.config.cluster.v3.Filter */

UPB_INLINE envoy_config_cluster_v3_Filter *envoy_config_cluster_v3_Filter_new(upb_arena *arena) {
  return (envoy_config_cluster_v3_Filter *)_upb_msg_new(&envoy_config_cluster_v3_Filter_msginit, arena);
}
UPB_INLINE envoy_config_cluster_v3_Filter *envoy_config_cluster_v3_Filter_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_cluster_v3_Filter *ret = envoy_config_cluster_v3_Filter_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_cluster_v3_Filter_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_cluster_v3_Filter *envoy_config_cluster_v3_Filter_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_cluster_v3_Filter *ret = envoy_config_cluster_v3_Filter_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_cluster_v3_Filter_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_cluster_v3_Filter_serialize(const envoy_config_cluster_v3_Filter *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_cluster_v3_Filter_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_config_cluster_v3_Filter_name(const envoy_config_cluster_v3_Filter *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview); }
UPB_INLINE bool envoy_config_cluster_v3_Filter_has_typed_config(const envoy_config_cluster_v3_Filter *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_Any* envoy_config_cluster_v3_Filter_typed_config(const envoy_config_cluster_v3_Filter *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct google_protobuf_Any*); }

UPB_INLINE void envoy_config_cluster_v3_Filter_set_name(envoy_config_cluster_v3_Filter *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview) = value;
}
UPB_INLINE void envoy_config_cluster_v3_Filter_set_typed_config(envoy_config_cluster_v3_Filter *msg, struct google_protobuf_Any* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct google_protobuf_Any*) = value;
}
UPB_INLINE struct google_protobuf_Any* envoy_config_cluster_v3_Filter_mutable_typed_config(envoy_config_cluster_v3_Filter *msg, upb_arena *arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)envoy_config_cluster_v3_Filter_typed_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_msg_new(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    envoy_config_cluster_v3_Filter_set_typed_config(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_CONFIG_CLUSTER_V3_FILTER_PROTO_UPB_H_ */
