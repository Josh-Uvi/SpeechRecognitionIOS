/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/status/v3/csds.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_SERVICE_STATUS_V3_CSDS_PROTO_UPB_H_
#define ENVOY_SERVICE_STATUS_V3_CSDS_PROTO_UPB_H_

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

struct envoy_service_status_v3_ClientStatusRequest;
struct envoy_service_status_v3_PerXdsConfig;
struct envoy_service_status_v3_ClientConfig;
struct envoy_service_status_v3_ClientConfig_GenericXdsConfig;
struct envoy_service_status_v3_ClientStatusResponse;
typedef struct envoy_service_status_v3_ClientStatusRequest envoy_service_status_v3_ClientStatusRequest;
typedef struct envoy_service_status_v3_PerXdsConfig envoy_service_status_v3_PerXdsConfig;
typedef struct envoy_service_status_v3_ClientConfig envoy_service_status_v3_ClientConfig;
typedef struct envoy_service_status_v3_ClientConfig_GenericXdsConfig envoy_service_status_v3_ClientConfig_GenericXdsConfig;
typedef struct envoy_service_status_v3_ClientStatusResponse envoy_service_status_v3_ClientStatusResponse;
extern const upb_msglayout envoy_service_status_v3_ClientStatusRequest_msginit;
extern const upb_msglayout envoy_service_status_v3_PerXdsConfig_msginit;
extern const upb_msglayout envoy_service_status_v3_ClientConfig_msginit;
extern const upb_msglayout envoy_service_status_v3_ClientConfig_GenericXdsConfig_msginit;
extern const upb_msglayout envoy_service_status_v3_ClientStatusResponse_msginit;
struct envoy_admin_v3_ClustersConfigDump;
struct envoy_admin_v3_EndpointsConfigDump;
struct envoy_admin_v3_ListenersConfigDump;
struct envoy_admin_v3_RoutesConfigDump;
struct envoy_admin_v3_ScopedRoutesConfigDump;
struct envoy_admin_v3_UpdateFailureState;
struct envoy_config_core_v3_Node;
struct envoy_type_matcher_v3_NodeMatcher;
struct google_protobuf_Any;
struct google_protobuf_Timestamp;
extern const upb_msglayout envoy_admin_v3_ClustersConfigDump_msginit;
extern const upb_msglayout envoy_admin_v3_EndpointsConfigDump_msginit;
extern const upb_msglayout envoy_admin_v3_ListenersConfigDump_msginit;
extern const upb_msglayout envoy_admin_v3_RoutesConfigDump_msginit;
extern const upb_msglayout envoy_admin_v3_ScopedRoutesConfigDump_msginit;
extern const upb_msglayout envoy_admin_v3_UpdateFailureState_msginit;
extern const upb_msglayout envoy_config_core_v3_Node_msginit;
extern const upb_msglayout envoy_type_matcher_v3_NodeMatcher_msginit;
extern const upb_msglayout google_protobuf_Any_msginit;
extern const upb_msglayout google_protobuf_Timestamp_msginit;

typedef enum {
  envoy_service_status_v3_CLIENT_UNKNOWN = 0,
  envoy_service_status_v3_CLIENT_REQUESTED = 1,
  envoy_service_status_v3_CLIENT_ACKED = 2,
  envoy_service_status_v3_CLIENT_NACKED = 3
} envoy_service_status_v3_ClientConfigStatus;

typedef enum {
  envoy_service_status_v3_UNKNOWN = 0,
  envoy_service_status_v3_SYNCED = 1,
  envoy_service_status_v3_NOT_SENT = 2,
  envoy_service_status_v3_STALE = 3,
  envoy_service_status_v3_ERROR = 4
} envoy_service_status_v3_ConfigStatus;


/* envoy.service.status.v3.ClientStatusRequest */

UPB_INLINE envoy_service_status_v3_ClientStatusRequest *envoy_service_status_v3_ClientStatusRequest_new(upb_arena *arena) {
  return (envoy_service_status_v3_ClientStatusRequest *)_upb_msg_new(&envoy_service_status_v3_ClientStatusRequest_msginit, arena);
}
UPB_INLINE envoy_service_status_v3_ClientStatusRequest *envoy_service_status_v3_ClientStatusRequest_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_service_status_v3_ClientStatusRequest *ret = envoy_service_status_v3_ClientStatusRequest_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_service_status_v3_ClientStatusRequest_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_service_status_v3_ClientStatusRequest *envoy_service_status_v3_ClientStatusRequest_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_service_status_v3_ClientStatusRequest *ret = envoy_service_status_v3_ClientStatusRequest_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_service_status_v3_ClientStatusRequest_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_service_status_v3_ClientStatusRequest_serialize(const envoy_service_status_v3_ClientStatusRequest *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_service_status_v3_ClientStatusRequest_msginit, arena, len);
}

UPB_INLINE bool envoy_service_status_v3_ClientStatusRequest_has_node_matchers(const envoy_service_status_v3_ClientStatusRequest *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct envoy_type_matcher_v3_NodeMatcher* const* envoy_service_status_v3_ClientStatusRequest_node_matchers(const envoy_service_status_v3_ClientStatusRequest *msg, size_t *len) { return (const struct envoy_type_matcher_v3_NodeMatcher* const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }
UPB_INLINE bool envoy_service_status_v3_ClientStatusRequest_has_node(const envoy_service_status_v3_ClientStatusRequest *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_config_core_v3_Node* envoy_service_status_v3_ClientStatusRequest_node(const envoy_service_status_v3_ClientStatusRequest *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_config_core_v3_Node*); }

UPB_INLINE struct envoy_type_matcher_v3_NodeMatcher** envoy_service_status_v3_ClientStatusRequest_mutable_node_matchers(envoy_service_status_v3_ClientStatusRequest *msg, size_t *len) {
  return (struct envoy_type_matcher_v3_NodeMatcher**)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE struct envoy_type_matcher_v3_NodeMatcher** envoy_service_status_v3_ClientStatusRequest_resize_node_matchers(envoy_service_status_v3_ClientStatusRequest *msg, size_t len, upb_arena *arena) {
  return (struct envoy_type_matcher_v3_NodeMatcher**)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_type_matcher_v3_NodeMatcher* envoy_service_status_v3_ClientStatusRequest_add_node_matchers(envoy_service_status_v3_ClientStatusRequest *msg, upb_arena *arena) {
  struct envoy_type_matcher_v3_NodeMatcher* sub = (struct envoy_type_matcher_v3_NodeMatcher*)_upb_msg_new(&envoy_type_matcher_v3_NodeMatcher_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(8, 16), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE void envoy_service_status_v3_ClientStatusRequest_set_node(envoy_service_status_v3_ClientStatusRequest *msg, struct envoy_config_core_v3_Node* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_config_core_v3_Node*) = value;
}
UPB_INLINE struct envoy_config_core_v3_Node* envoy_service_status_v3_ClientStatusRequest_mutable_node(envoy_service_status_v3_ClientStatusRequest *msg, upb_arena *arena) {
  struct envoy_config_core_v3_Node* sub = (struct envoy_config_core_v3_Node*)envoy_service_status_v3_ClientStatusRequest_node(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_Node*)_upb_msg_new(&envoy_config_core_v3_Node_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_ClientStatusRequest_set_node(msg, sub);
  }
  return sub;
}

/* envoy.service.status.v3.PerXdsConfig */

UPB_INLINE envoy_service_status_v3_PerXdsConfig *envoy_service_status_v3_PerXdsConfig_new(upb_arena *arena) {
  return (envoy_service_status_v3_PerXdsConfig *)_upb_msg_new(&envoy_service_status_v3_PerXdsConfig_msginit, arena);
}
UPB_INLINE envoy_service_status_v3_PerXdsConfig *envoy_service_status_v3_PerXdsConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_service_status_v3_PerXdsConfig *ret = envoy_service_status_v3_PerXdsConfig_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_service_status_v3_PerXdsConfig_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_service_status_v3_PerXdsConfig *envoy_service_status_v3_PerXdsConfig_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_service_status_v3_PerXdsConfig *ret = envoy_service_status_v3_PerXdsConfig_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_service_status_v3_PerXdsConfig_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_service_status_v3_PerXdsConfig_serialize(const envoy_service_status_v3_PerXdsConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_service_status_v3_PerXdsConfig_msginit, arena, len);
}

typedef enum {
  envoy_service_status_v3_PerXdsConfig_per_xds_config_listener_config = 2,
  envoy_service_status_v3_PerXdsConfig_per_xds_config_cluster_config = 3,
  envoy_service_status_v3_PerXdsConfig_per_xds_config_route_config = 4,
  envoy_service_status_v3_PerXdsConfig_per_xds_config_scoped_route_config = 5,
  envoy_service_status_v3_PerXdsConfig_per_xds_config_endpoint_config = 6,
  envoy_service_status_v3_PerXdsConfig_per_xds_config_NOT_SET = 0
} envoy_service_status_v3_PerXdsConfig_per_xds_config_oneofcases;
UPB_INLINE envoy_service_status_v3_PerXdsConfig_per_xds_config_oneofcases envoy_service_status_v3_PerXdsConfig_per_xds_config_case(const envoy_service_status_v3_PerXdsConfig* msg) { return (envoy_service_status_v3_PerXdsConfig_per_xds_config_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(12, 16), int32_t); }

UPB_INLINE int32_t envoy_service_status_v3_PerXdsConfig_status(const envoy_service_status_v3_PerXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t); }
UPB_INLINE bool envoy_service_status_v3_PerXdsConfig_has_listener_config(const envoy_service_status_v3_PerXdsConfig *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 16)) == 2; }
UPB_INLINE const struct envoy_admin_v3_ListenersConfigDump* envoy_service_status_v3_PerXdsConfig_listener_config(const envoy_service_status_v3_PerXdsConfig *msg) { return UPB_READ_ONEOF(msg, const struct envoy_admin_v3_ListenersConfigDump*, UPB_SIZE(8, 8), UPB_SIZE(12, 16), 2, NULL); }
UPB_INLINE bool envoy_service_status_v3_PerXdsConfig_has_cluster_config(const envoy_service_status_v3_PerXdsConfig *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 16)) == 3; }
UPB_INLINE const struct envoy_admin_v3_ClustersConfigDump* envoy_service_status_v3_PerXdsConfig_cluster_config(const envoy_service_status_v3_PerXdsConfig *msg) { return UPB_READ_ONEOF(msg, const struct envoy_admin_v3_ClustersConfigDump*, UPB_SIZE(8, 8), UPB_SIZE(12, 16), 3, NULL); }
UPB_INLINE bool envoy_service_status_v3_PerXdsConfig_has_route_config(const envoy_service_status_v3_PerXdsConfig *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 16)) == 4; }
UPB_INLINE const struct envoy_admin_v3_RoutesConfigDump* envoy_service_status_v3_PerXdsConfig_route_config(const envoy_service_status_v3_PerXdsConfig *msg) { return UPB_READ_ONEOF(msg, const struct envoy_admin_v3_RoutesConfigDump*, UPB_SIZE(8, 8), UPB_SIZE(12, 16), 4, NULL); }
UPB_INLINE bool envoy_service_status_v3_PerXdsConfig_has_scoped_route_config(const envoy_service_status_v3_PerXdsConfig *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 16)) == 5; }
UPB_INLINE const struct envoy_admin_v3_ScopedRoutesConfigDump* envoy_service_status_v3_PerXdsConfig_scoped_route_config(const envoy_service_status_v3_PerXdsConfig *msg) { return UPB_READ_ONEOF(msg, const struct envoy_admin_v3_ScopedRoutesConfigDump*, UPB_SIZE(8, 8), UPB_SIZE(12, 16), 5, NULL); }
UPB_INLINE bool envoy_service_status_v3_PerXdsConfig_has_endpoint_config(const envoy_service_status_v3_PerXdsConfig *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 16)) == 6; }
UPB_INLINE const struct envoy_admin_v3_EndpointsConfigDump* envoy_service_status_v3_PerXdsConfig_endpoint_config(const envoy_service_status_v3_PerXdsConfig *msg) { return UPB_READ_ONEOF(msg, const struct envoy_admin_v3_EndpointsConfigDump*, UPB_SIZE(8, 8), UPB_SIZE(12, 16), 6, NULL); }
UPB_INLINE int32_t envoy_service_status_v3_PerXdsConfig_client_status(const envoy_service_status_v3_PerXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t); }

UPB_INLINE void envoy_service_status_v3_PerXdsConfig_set_status(envoy_service_status_v3_PerXdsConfig *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t) = value;
}
UPB_INLINE void envoy_service_status_v3_PerXdsConfig_set_listener_config(envoy_service_status_v3_PerXdsConfig *msg, struct envoy_admin_v3_ListenersConfigDump* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_admin_v3_ListenersConfigDump*, UPB_SIZE(8, 8), value, UPB_SIZE(12, 16), 2);
}
UPB_INLINE struct envoy_admin_v3_ListenersConfigDump* envoy_service_status_v3_PerXdsConfig_mutable_listener_config(envoy_service_status_v3_PerXdsConfig *msg, upb_arena *arena) {
  struct envoy_admin_v3_ListenersConfigDump* sub = (struct envoy_admin_v3_ListenersConfigDump*)envoy_service_status_v3_PerXdsConfig_listener_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_admin_v3_ListenersConfigDump*)_upb_msg_new(&envoy_admin_v3_ListenersConfigDump_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_PerXdsConfig_set_listener_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_status_v3_PerXdsConfig_set_cluster_config(envoy_service_status_v3_PerXdsConfig *msg, struct envoy_admin_v3_ClustersConfigDump* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_admin_v3_ClustersConfigDump*, UPB_SIZE(8, 8), value, UPB_SIZE(12, 16), 3);
}
UPB_INLINE struct envoy_admin_v3_ClustersConfigDump* envoy_service_status_v3_PerXdsConfig_mutable_cluster_config(envoy_service_status_v3_PerXdsConfig *msg, upb_arena *arena) {
  struct envoy_admin_v3_ClustersConfigDump* sub = (struct envoy_admin_v3_ClustersConfigDump*)envoy_service_status_v3_PerXdsConfig_cluster_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_admin_v3_ClustersConfigDump*)_upb_msg_new(&envoy_admin_v3_ClustersConfigDump_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_PerXdsConfig_set_cluster_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_status_v3_PerXdsConfig_set_route_config(envoy_service_status_v3_PerXdsConfig *msg, struct envoy_admin_v3_RoutesConfigDump* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_admin_v3_RoutesConfigDump*, UPB_SIZE(8, 8), value, UPB_SIZE(12, 16), 4);
}
UPB_INLINE struct envoy_admin_v3_RoutesConfigDump* envoy_service_status_v3_PerXdsConfig_mutable_route_config(envoy_service_status_v3_PerXdsConfig *msg, upb_arena *arena) {
  struct envoy_admin_v3_RoutesConfigDump* sub = (struct envoy_admin_v3_RoutesConfigDump*)envoy_service_status_v3_PerXdsConfig_route_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_admin_v3_RoutesConfigDump*)_upb_msg_new(&envoy_admin_v3_RoutesConfigDump_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_PerXdsConfig_set_route_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_status_v3_PerXdsConfig_set_scoped_route_config(envoy_service_status_v3_PerXdsConfig *msg, struct envoy_admin_v3_ScopedRoutesConfigDump* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_admin_v3_ScopedRoutesConfigDump*, UPB_SIZE(8, 8), value, UPB_SIZE(12, 16), 5);
}
UPB_INLINE struct envoy_admin_v3_ScopedRoutesConfigDump* envoy_service_status_v3_PerXdsConfig_mutable_scoped_route_config(envoy_service_status_v3_PerXdsConfig *msg, upb_arena *arena) {
  struct envoy_admin_v3_ScopedRoutesConfigDump* sub = (struct envoy_admin_v3_ScopedRoutesConfigDump*)envoy_service_status_v3_PerXdsConfig_scoped_route_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_admin_v3_ScopedRoutesConfigDump*)_upb_msg_new(&envoy_admin_v3_ScopedRoutesConfigDump_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_PerXdsConfig_set_scoped_route_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_status_v3_PerXdsConfig_set_endpoint_config(envoy_service_status_v3_PerXdsConfig *msg, struct envoy_admin_v3_EndpointsConfigDump* value) {
  UPB_WRITE_ONEOF(msg, struct envoy_admin_v3_EndpointsConfigDump*, UPB_SIZE(8, 8), value, UPB_SIZE(12, 16), 6);
}
UPB_INLINE struct envoy_admin_v3_EndpointsConfigDump* envoy_service_status_v3_PerXdsConfig_mutable_endpoint_config(envoy_service_status_v3_PerXdsConfig *msg, upb_arena *arena) {
  struct envoy_admin_v3_EndpointsConfigDump* sub = (struct envoy_admin_v3_EndpointsConfigDump*)envoy_service_status_v3_PerXdsConfig_endpoint_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_admin_v3_EndpointsConfigDump*)_upb_msg_new(&envoy_admin_v3_EndpointsConfigDump_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_PerXdsConfig_set_endpoint_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_status_v3_PerXdsConfig_set_client_status(envoy_service_status_v3_PerXdsConfig *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = value;
}

/* envoy.service.status.v3.ClientConfig */

UPB_INLINE envoy_service_status_v3_ClientConfig *envoy_service_status_v3_ClientConfig_new(upb_arena *arena) {
  return (envoy_service_status_v3_ClientConfig *)_upb_msg_new(&envoy_service_status_v3_ClientConfig_msginit, arena);
}
UPB_INLINE envoy_service_status_v3_ClientConfig *envoy_service_status_v3_ClientConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_service_status_v3_ClientConfig *ret = envoy_service_status_v3_ClientConfig_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_service_status_v3_ClientConfig_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_service_status_v3_ClientConfig *envoy_service_status_v3_ClientConfig_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_service_status_v3_ClientConfig *ret = envoy_service_status_v3_ClientConfig_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_service_status_v3_ClientConfig_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_service_status_v3_ClientConfig_serialize(const envoy_service_status_v3_ClientConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_service_status_v3_ClientConfig_msginit, arena, len);
}

UPB_INLINE bool envoy_service_status_v3_ClientConfig_has_node(const envoy_service_status_v3_ClientConfig *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_config_core_v3_Node* envoy_service_status_v3_ClientConfig_node(const envoy_service_status_v3_ClientConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_config_core_v3_Node*); }
UPB_INLINE bool envoy_service_status_v3_ClientConfig_has_xds_config(const envoy_service_status_v3_ClientConfig *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const envoy_service_status_v3_PerXdsConfig* const* envoy_service_status_v3_ClientConfig_xds_config(const envoy_service_status_v3_ClientConfig *msg, size_t *len) { return (const envoy_service_status_v3_PerXdsConfig* const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }
UPB_INLINE bool envoy_service_status_v3_ClientConfig_has_generic_xds_configs(const envoy_service_status_v3_ClientConfig *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(12, 24)); }
UPB_INLINE const envoy_service_status_v3_ClientConfig_GenericXdsConfig* const* envoy_service_status_v3_ClientConfig_generic_xds_configs(const envoy_service_status_v3_ClientConfig *msg, size_t *len) { return (const envoy_service_status_v3_ClientConfig_GenericXdsConfig* const*)_upb_array_accessor(msg, UPB_SIZE(12, 24), len); }

UPB_INLINE void envoy_service_status_v3_ClientConfig_set_node(envoy_service_status_v3_ClientConfig *msg, struct envoy_config_core_v3_Node* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_config_core_v3_Node*) = value;
}
UPB_INLINE struct envoy_config_core_v3_Node* envoy_service_status_v3_ClientConfig_mutable_node(envoy_service_status_v3_ClientConfig *msg, upb_arena *arena) {
  struct envoy_config_core_v3_Node* sub = (struct envoy_config_core_v3_Node*)envoy_service_status_v3_ClientConfig_node(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_Node*)_upb_msg_new(&envoy_config_core_v3_Node_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_ClientConfig_set_node(msg, sub);
  }
  return sub;
}
UPB_INLINE envoy_service_status_v3_PerXdsConfig** envoy_service_status_v3_ClientConfig_mutable_xds_config(envoy_service_status_v3_ClientConfig *msg, size_t *len) {
  return (envoy_service_status_v3_PerXdsConfig**)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE envoy_service_status_v3_PerXdsConfig** envoy_service_status_v3_ClientConfig_resize_xds_config(envoy_service_status_v3_ClientConfig *msg, size_t len, upb_arena *arena) {
  return (envoy_service_status_v3_PerXdsConfig**)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_service_status_v3_PerXdsConfig* envoy_service_status_v3_ClientConfig_add_xds_config(envoy_service_status_v3_ClientConfig *msg, upb_arena *arena) {
  struct envoy_service_status_v3_PerXdsConfig* sub = (struct envoy_service_status_v3_PerXdsConfig*)_upb_msg_new(&envoy_service_status_v3_PerXdsConfig_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(8, 16), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}
UPB_INLINE envoy_service_status_v3_ClientConfig_GenericXdsConfig** envoy_service_status_v3_ClientConfig_mutable_generic_xds_configs(envoy_service_status_v3_ClientConfig *msg, size_t *len) {
  return (envoy_service_status_v3_ClientConfig_GenericXdsConfig**)_upb_array_mutable_accessor(msg, UPB_SIZE(12, 24), len);
}
UPB_INLINE envoy_service_status_v3_ClientConfig_GenericXdsConfig** envoy_service_status_v3_ClientConfig_resize_generic_xds_configs(envoy_service_status_v3_ClientConfig *msg, size_t len, upb_arena *arena) {
  return (envoy_service_status_v3_ClientConfig_GenericXdsConfig**)_upb_array_resize_accessor2(msg, UPB_SIZE(12, 24), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_service_status_v3_ClientConfig_GenericXdsConfig* envoy_service_status_v3_ClientConfig_add_generic_xds_configs(envoy_service_status_v3_ClientConfig *msg, upb_arena *arena) {
  struct envoy_service_status_v3_ClientConfig_GenericXdsConfig* sub = (struct envoy_service_status_v3_ClientConfig_GenericXdsConfig*)_upb_msg_new(&envoy_service_status_v3_ClientConfig_GenericXdsConfig_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(12, 24), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
  return sub;
}

/* envoy.service.status.v3.ClientConfig.GenericXdsConfig */

UPB_INLINE envoy_service_status_v3_ClientConfig_GenericXdsConfig *envoy_service_status_v3_ClientConfig_GenericXdsConfig_new(upb_arena *arena) {
  return (envoy_service_status_v3_ClientConfig_GenericXdsConfig *)_upb_msg_new(&envoy_service_status_v3_ClientConfig_GenericXdsConfig_msginit, arena);
}
UPB_INLINE envoy_service_status_v3_ClientConfig_GenericXdsConfig *envoy_service_status_v3_ClientConfig_GenericXdsConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_service_status_v3_ClientConfig_GenericXdsConfig *ret = envoy_service_status_v3_ClientConfig_GenericXdsConfig_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_service_status_v3_ClientConfig_GenericXdsConfig_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_service_status_v3_ClientConfig_GenericXdsConfig *envoy_service_status_v3_ClientConfig_GenericXdsConfig_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_service_status_v3_ClientConfig_GenericXdsConfig *ret = envoy_service_status_v3_ClientConfig_GenericXdsConfig_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_service_status_v3_ClientConfig_GenericXdsConfig_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_service_status_v3_ClientConfig_GenericXdsConfig_serialize(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_service_status_v3_ClientConfig_GenericXdsConfig_msginit, arena, len);
}

UPB_INLINE upb_strview envoy_service_status_v3_ClientConfig_GenericXdsConfig_type_url(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(16, 16), upb_strview); }
UPB_INLINE upb_strview envoy_service_status_v3_ClientConfig_GenericXdsConfig_name(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(24, 32), upb_strview); }
UPB_INLINE upb_strview envoy_service_status_v3_ClientConfig_GenericXdsConfig_version_info(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(32, 48), upb_strview); }
UPB_INLINE bool envoy_service_status_v3_ClientConfig_GenericXdsConfig_has_xds_config(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_Any* envoy_service_status_v3_ClientConfig_GenericXdsConfig_xds_config(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(40, 64), const struct google_protobuf_Any*); }
UPB_INLINE bool envoy_service_status_v3_ClientConfig_GenericXdsConfig_has_last_updated(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const struct google_protobuf_Timestamp* envoy_service_status_v3_ClientConfig_GenericXdsConfig_last_updated(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(44, 72), const struct google_protobuf_Timestamp*); }
UPB_INLINE int32_t envoy_service_status_v3_ClientConfig_GenericXdsConfig_config_status(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t); }
UPB_INLINE int32_t envoy_service_status_v3_ClientConfig_GenericXdsConfig_client_status(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 8), int32_t); }
UPB_INLINE bool envoy_service_status_v3_ClientConfig_GenericXdsConfig_has_error_state(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return _upb_hasbit(msg, 3); }
UPB_INLINE const struct envoy_admin_v3_UpdateFailureState* envoy_service_status_v3_ClientConfig_GenericXdsConfig_error_state(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(48, 80), const struct envoy_admin_v3_UpdateFailureState*); }
UPB_INLINE bool envoy_service_status_v3_ClientConfig_GenericXdsConfig_is_static_resource(const envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 12), bool); }

UPB_INLINE void envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_type_url(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(16, 16), upb_strview) = value;
}
UPB_INLINE void envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_name(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(24, 32), upb_strview) = value;
}
UPB_INLINE void envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_version_info(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(32, 48), upb_strview) = value;
}
UPB_INLINE void envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_xds_config(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, struct google_protobuf_Any* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(40, 64), struct google_protobuf_Any*) = value;
}
UPB_INLINE struct google_protobuf_Any* envoy_service_status_v3_ClientConfig_GenericXdsConfig_mutable_xds_config(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, upb_arena *arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)envoy_service_status_v3_ClientConfig_GenericXdsConfig_xds_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_msg_new(&google_protobuf_Any_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_xds_config(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_last_updated(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, struct google_protobuf_Timestamp* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(44, 72), struct google_protobuf_Timestamp*) = value;
}
UPB_INLINE struct google_protobuf_Timestamp* envoy_service_status_v3_ClientConfig_GenericXdsConfig_mutable_last_updated(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, upb_arena *arena) {
  struct google_protobuf_Timestamp* sub = (struct google_protobuf_Timestamp*)envoy_service_status_v3_ClientConfig_GenericXdsConfig_last_updated(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Timestamp*)_upb_msg_new(&google_protobuf_Timestamp_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_last_updated(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_config_status(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), int32_t) = value;
}
UPB_INLINE void envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_client_status(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 8), int32_t) = value;
}
UPB_INLINE void envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_error_state(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, struct envoy_admin_v3_UpdateFailureState* value) {
  _upb_sethas(msg, 3);
  *UPB_PTR_AT(msg, UPB_SIZE(48, 80), struct envoy_admin_v3_UpdateFailureState*) = value;
}
UPB_INLINE struct envoy_admin_v3_UpdateFailureState* envoy_service_status_v3_ClientConfig_GenericXdsConfig_mutable_error_state(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, upb_arena *arena) {
  struct envoy_admin_v3_UpdateFailureState* sub = (struct envoy_admin_v3_UpdateFailureState*)envoy_service_status_v3_ClientConfig_GenericXdsConfig_error_state(msg);
  if (sub == NULL) {
    sub = (struct envoy_admin_v3_UpdateFailureState*)_upb_msg_new(&envoy_admin_v3_UpdateFailureState_msginit, arena);
    if (!sub) return NULL;
    envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_error_state(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_service_status_v3_ClientConfig_GenericXdsConfig_set_is_static_resource(envoy_service_status_v3_ClientConfig_GenericXdsConfig *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 12), bool) = value;
}

/* envoy.service.status.v3.ClientStatusResponse */

UPB_INLINE envoy_service_status_v3_ClientStatusResponse *envoy_service_status_v3_ClientStatusResponse_new(upb_arena *arena) {
  return (envoy_service_status_v3_ClientStatusResponse *)_upb_msg_new(&envoy_service_status_v3_ClientStatusResponse_msginit, arena);
}
UPB_INLINE envoy_service_status_v3_ClientStatusResponse *envoy_service_status_v3_ClientStatusResponse_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_service_status_v3_ClientStatusResponse *ret = envoy_service_status_v3_ClientStatusResponse_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_service_status_v3_ClientStatusResponse_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_service_status_v3_ClientStatusResponse *envoy_service_status_v3_ClientStatusResponse_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_service_status_v3_ClientStatusResponse *ret = envoy_service_status_v3_ClientStatusResponse_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_service_status_v3_ClientStatusResponse_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_service_status_v3_ClientStatusResponse_serialize(const envoy_service_status_v3_ClientStatusResponse *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_service_status_v3_ClientStatusResponse_msginit, arena, len);
}

UPB_INLINE bool envoy_service_status_v3_ClientStatusResponse_has_config(const envoy_service_status_v3_ClientStatusResponse *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(0, 0)); }
UPB_INLINE const envoy_service_status_v3_ClientConfig* const* envoy_service_status_v3_ClientStatusResponse_config(const envoy_service_status_v3_ClientStatusResponse *msg, size_t *len) { return (const envoy_service_status_v3_ClientConfig* const*)_upb_array_accessor(msg, UPB_SIZE(0, 0), len); }

UPB_INLINE envoy_service_status_v3_ClientConfig** envoy_service_status_v3_ClientStatusResponse_mutable_config(envoy_service_status_v3_ClientStatusResponse *msg, size_t *len) {
  return (envoy_service_status_v3_ClientConfig**)_upb_array_mutable_accessor(msg, UPB_SIZE(0, 0), len);
}
UPB_INLINE envoy_service_status_v3_ClientConfig** envoy_service_status_v3_ClientStatusResponse_resize_config(envoy_service_status_v3_ClientStatusResponse *msg, size_t len, upb_arena *arena) {
  return (envoy_service_status_v3_ClientConfig**)_upb_array_resize_accessor2(msg, UPB_SIZE(0, 0), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_service_status_v3_ClientConfig* envoy_service_status_v3_ClientStatusResponse_add_config(envoy_service_status_v3_ClientStatusResponse *msg, upb_arena *arena) {
  struct envoy_service_status_v3_ClientConfig* sub = (struct envoy_service_status_v3_ClientConfig*)_upb_msg_new(&envoy_service_status_v3_ClientConfig_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(0, 0), UPB_SIZE(2, 3), &sub, arena);
  if (!ok) return NULL;
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

#endif  /* ENVOY_SERVICE_STATUS_V3_CSDS_PROTO_UPB_H_ */
