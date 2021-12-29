/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/node.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_MATCHER_V3_NODE_PROTO_UPB_H_
#define ENVOY_TYPE_MATCHER_V3_NODE_PROTO_UPB_H_

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

struct envoy_type_matcher_v3_NodeMatcher;
typedef struct envoy_type_matcher_v3_NodeMatcher envoy_type_matcher_v3_NodeMatcher;
extern const upb_msglayout envoy_type_matcher_v3_NodeMatcher_msginit;
struct envoy_type_matcher_v3_StringMatcher;
struct envoy_type_matcher_v3_StructMatcher;
extern const upb_msglayout envoy_type_matcher_v3_StringMatcher_msginit;
extern const upb_msglayout envoy_type_matcher_v3_StructMatcher_msginit;


/* envoy.type.matcher.v3.NodeMatcher */

UPB_INLINE envoy_type_matcher_v3_NodeMatcher *envoy_type_matcher_v3_NodeMatcher_new(upb_arena *arena) {
  return (envoy_type_matcher_v3_NodeMatcher *)_upb_msg_new(&envoy_type_matcher_v3_NodeMatcher_msginit, arena);
}
UPB_INLINE envoy_type_matcher_v3_NodeMatcher *envoy_type_matcher_v3_NodeMatcher_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_matcher_v3_NodeMatcher *ret = envoy_type_matcher_v3_NodeMatcher_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_matcher_v3_NodeMatcher_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_matcher_v3_NodeMatcher *envoy_type_matcher_v3_NodeMatcher_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_matcher_v3_NodeMatcher *ret = envoy_type_matcher_v3_NodeMatcher_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_matcher_v3_NodeMatcher_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_matcher_v3_NodeMatcher_serialize(const envoy_type_matcher_v3_NodeMatcher *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_matcher_v3_NodeMatcher_msginit, arena, len);
}

UPB_INLINE bool envoy_type_matcher_v3_NodeMatcher_has_node_id(const envoy_type_matcher_v3_NodeMatcher *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_type_matcher_v3_StringMatcher* envoy_type_matcher_v3_NodeMatcher_node_id(const envoy_type_matcher_v3_NodeMatcher *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_type_matcher_v3_StringMatcher*); }
UPB_INLINE bool envoy_type_matcher_v3_NodeMatcher_has_node_metadatas(const envoy_type_matcher_v3_NodeMatcher *msg) { return _upb_has_submsg_nohasbit(msg, UPB_SIZE(8, 16)); }
UPB_INLINE const struct envoy_type_matcher_v3_StructMatcher* const* envoy_type_matcher_v3_NodeMatcher_node_metadatas(const envoy_type_matcher_v3_NodeMatcher *msg, size_t *len) { return (const struct envoy_type_matcher_v3_StructMatcher* const*)_upb_array_accessor(msg, UPB_SIZE(8, 16), len); }

UPB_INLINE void envoy_type_matcher_v3_NodeMatcher_set_node_id(envoy_type_matcher_v3_NodeMatcher *msg, struct envoy_type_matcher_v3_StringMatcher* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_type_matcher_v3_StringMatcher*) = value;
}
UPB_INLINE struct envoy_type_matcher_v3_StringMatcher* envoy_type_matcher_v3_NodeMatcher_mutable_node_id(envoy_type_matcher_v3_NodeMatcher *msg, upb_arena *arena) {
  struct envoy_type_matcher_v3_StringMatcher* sub = (struct envoy_type_matcher_v3_StringMatcher*)envoy_type_matcher_v3_NodeMatcher_node_id(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_matcher_v3_StringMatcher*)_upb_msg_new(&envoy_type_matcher_v3_StringMatcher_msginit, arena);
    if (!sub) return NULL;
    envoy_type_matcher_v3_NodeMatcher_set_node_id(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_type_matcher_v3_StructMatcher** envoy_type_matcher_v3_NodeMatcher_mutable_node_metadatas(envoy_type_matcher_v3_NodeMatcher *msg, size_t *len) {
  return (struct envoy_type_matcher_v3_StructMatcher**)_upb_array_mutable_accessor(msg, UPB_SIZE(8, 16), len);
}
UPB_INLINE struct envoy_type_matcher_v3_StructMatcher** envoy_type_matcher_v3_NodeMatcher_resize_node_metadatas(envoy_type_matcher_v3_NodeMatcher *msg, size_t len, upb_arena *arena) {
  return (struct envoy_type_matcher_v3_StructMatcher**)_upb_array_resize_accessor2(msg, UPB_SIZE(8, 16), len, UPB_SIZE(2, 3), arena);
}
UPB_INLINE struct envoy_type_matcher_v3_StructMatcher* envoy_type_matcher_v3_NodeMatcher_add_node_metadatas(envoy_type_matcher_v3_NodeMatcher *msg, upb_arena *arena) {
  struct envoy_type_matcher_v3_StructMatcher* sub = (struct envoy_type_matcher_v3_StructMatcher*)_upb_msg_new(&envoy_type_matcher_v3_StructMatcher_msginit, arena);
  bool ok = _upb_array_append_accessor2(
      msg, UPB_SIZE(8, 16), UPB_SIZE(2, 3), &sub, arena);
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

#endif  /* ENVOY_TYPE_MATCHER_V3_NODE_PROTO_UPB_H_ */
