/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/extensions/filters/common/fault/v3/fault.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_EXTENSIONS_FILTERS_COMMON_FAULT_V3_FAULT_PROTO_UPB_H_
#define ENVOY_EXTENSIONS_FILTERS_COMMON_FAULT_V3_FAULT_PROTO_UPB_H_

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

struct envoy_extensions_filters_common_fault_v3_FaultDelay;
struct envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay;
struct envoy_extensions_filters_common_fault_v3_FaultRateLimit;
struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit;
struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit;
typedef struct envoy_extensions_filters_common_fault_v3_FaultDelay envoy_extensions_filters_common_fault_v3_FaultDelay;
typedef struct envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay;
typedef struct envoy_extensions_filters_common_fault_v3_FaultRateLimit envoy_extensions_filters_common_fault_v3_FaultRateLimit;
typedef struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit;
typedef struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit;
extern const upb_msglayout envoy_extensions_filters_common_fault_v3_FaultDelay_msginit;
extern const upb_msglayout envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_msginit;
extern const upb_msglayout envoy_extensions_filters_common_fault_v3_FaultRateLimit_msginit;
extern const upb_msglayout envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_msginit;
extern const upb_msglayout envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_msginit;
struct envoy_type_v3_FractionalPercent;
struct google_protobuf_Duration;
extern const upb_msglayout envoy_type_v3_FractionalPercent_msginit;
extern const upb_msglayout google_protobuf_Duration_msginit;

typedef enum {
  envoy_extensions_filters_common_fault_v3_FaultDelay_FIXED = 0
} envoy_extensions_filters_common_fault_v3_FaultDelay_FaultDelayType;


/* envoy.extensions.filters.common.fault.v3.FaultDelay */

UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultDelay *envoy_extensions_filters_common_fault_v3_FaultDelay_new(upb_arena *arena) {
  return (envoy_extensions_filters_common_fault_v3_FaultDelay *)_upb_msg_new(&envoy_extensions_filters_common_fault_v3_FaultDelay_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultDelay *envoy_extensions_filters_common_fault_v3_FaultDelay_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultDelay *ret = envoy_extensions_filters_common_fault_v3_FaultDelay_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultDelay_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultDelay *envoy_extensions_filters_common_fault_v3_FaultDelay_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultDelay *ret = envoy_extensions_filters_common_fault_v3_FaultDelay_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultDelay_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_extensions_filters_common_fault_v3_FaultDelay_serialize(const envoy_extensions_filters_common_fault_v3_FaultDelay *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_filters_common_fault_v3_FaultDelay_msginit, arena, len);
}

typedef enum {
  envoy_extensions_filters_common_fault_v3_FaultDelay_fault_delay_secifier_fixed_delay = 3,
  envoy_extensions_filters_common_fault_v3_FaultDelay_fault_delay_secifier_header_delay = 5,
  envoy_extensions_filters_common_fault_v3_FaultDelay_fault_delay_secifier_NOT_SET = 0
} envoy_extensions_filters_common_fault_v3_FaultDelay_fault_delay_secifier_oneofcases;
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultDelay_fault_delay_secifier_oneofcases envoy_extensions_filters_common_fault_v3_FaultDelay_fault_delay_secifier_case(const envoy_extensions_filters_common_fault_v3_FaultDelay* msg) { return (envoy_extensions_filters_common_fault_v3_FaultDelay_fault_delay_secifier_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(12, 24), int32_t); }

UPB_INLINE bool envoy_extensions_filters_common_fault_v3_FaultDelay_has_fixed_delay(const envoy_extensions_filters_common_fault_v3_FaultDelay *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 3; }
UPB_INLINE const struct google_protobuf_Duration* envoy_extensions_filters_common_fault_v3_FaultDelay_fixed_delay(const envoy_extensions_filters_common_fault_v3_FaultDelay *msg) { return UPB_READ_ONEOF(msg, const struct google_protobuf_Duration*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 3, NULL); }
UPB_INLINE bool envoy_extensions_filters_common_fault_v3_FaultDelay_has_percentage(const envoy_extensions_filters_common_fault_v3_FaultDelay *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_type_v3_FractionalPercent* envoy_extensions_filters_common_fault_v3_FaultDelay_percentage(const envoy_extensions_filters_common_fault_v3_FaultDelay *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_type_v3_FractionalPercent*); }
UPB_INLINE bool envoy_extensions_filters_common_fault_v3_FaultDelay_has_header_delay(const envoy_extensions_filters_common_fault_v3_FaultDelay *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 5; }
UPB_INLINE const envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay* envoy_extensions_filters_common_fault_v3_FaultDelay_header_delay(const envoy_extensions_filters_common_fault_v3_FaultDelay *msg) { return UPB_READ_ONEOF(msg, const envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 5, NULL); }

UPB_INLINE void envoy_extensions_filters_common_fault_v3_FaultDelay_set_fixed_delay(envoy_extensions_filters_common_fault_v3_FaultDelay *msg, struct google_protobuf_Duration* value) {
  UPB_WRITE_ONEOF(msg, struct google_protobuf_Duration*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 3);
}
UPB_INLINE struct google_protobuf_Duration* envoy_extensions_filters_common_fault_v3_FaultDelay_mutable_fixed_delay(envoy_extensions_filters_common_fault_v3_FaultDelay *msg, upb_arena *arena) {
  struct google_protobuf_Duration* sub = (struct google_protobuf_Duration*)envoy_extensions_filters_common_fault_v3_FaultDelay_fixed_delay(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Duration*)_upb_msg_new(&google_protobuf_Duration_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_common_fault_v3_FaultDelay_set_fixed_delay(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_common_fault_v3_FaultDelay_set_percentage(envoy_extensions_filters_common_fault_v3_FaultDelay *msg, struct envoy_type_v3_FractionalPercent* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_type_v3_FractionalPercent*) = value;
}
UPB_INLINE struct envoy_type_v3_FractionalPercent* envoy_extensions_filters_common_fault_v3_FaultDelay_mutable_percentage(envoy_extensions_filters_common_fault_v3_FaultDelay *msg, upb_arena *arena) {
  struct envoy_type_v3_FractionalPercent* sub = (struct envoy_type_v3_FractionalPercent*)envoy_extensions_filters_common_fault_v3_FaultDelay_percentage(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_v3_FractionalPercent*)_upb_msg_new(&envoy_type_v3_FractionalPercent_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_common_fault_v3_FaultDelay_set_percentage(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_common_fault_v3_FaultDelay_set_header_delay(envoy_extensions_filters_common_fault_v3_FaultDelay *msg, envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay* value) {
  UPB_WRITE_ONEOF(msg, envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 5);
}
UPB_INLINE struct envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay* envoy_extensions_filters_common_fault_v3_FaultDelay_mutable_header_delay(envoy_extensions_filters_common_fault_v3_FaultDelay *msg, upb_arena *arena) {
  struct envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay* sub = (struct envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay*)envoy_extensions_filters_common_fault_v3_FaultDelay_header_delay(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay*)_upb_msg_new(&envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_common_fault_v3_FaultDelay_set_header_delay(msg, sub);
  }
  return sub;
}

/* envoy.extensions.filters.common.fault.v3.FaultDelay.HeaderDelay */

UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay *envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_new(upb_arena *arena) {
  return (envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay *)_upb_msg_new(&envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay *envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay *ret = envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay *envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay *ret = envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_serialize(const envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_filters_common_fault_v3_FaultDelay_HeaderDelay_msginit, arena, len);
}



/* envoy.extensions.filters.common.fault.v3.FaultRateLimit */

UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit *envoy_extensions_filters_common_fault_v3_FaultRateLimit_new(upb_arena *arena) {
  return (envoy_extensions_filters_common_fault_v3_FaultRateLimit *)_upb_msg_new(&envoy_extensions_filters_common_fault_v3_FaultRateLimit_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit *envoy_extensions_filters_common_fault_v3_FaultRateLimit_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultRateLimit *ret = envoy_extensions_filters_common_fault_v3_FaultRateLimit_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultRateLimit_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit *envoy_extensions_filters_common_fault_v3_FaultRateLimit_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultRateLimit *ret = envoy_extensions_filters_common_fault_v3_FaultRateLimit_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultRateLimit_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_extensions_filters_common_fault_v3_FaultRateLimit_serialize(const envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_filters_common_fault_v3_FaultRateLimit_msginit, arena, len);
}

typedef enum {
  envoy_extensions_filters_common_fault_v3_FaultRateLimit_limit_type_fixed_limit = 1,
  envoy_extensions_filters_common_fault_v3_FaultRateLimit_limit_type_header_limit = 3,
  envoy_extensions_filters_common_fault_v3_FaultRateLimit_limit_type_NOT_SET = 0
} envoy_extensions_filters_common_fault_v3_FaultRateLimit_limit_type_oneofcases;
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit_limit_type_oneofcases envoy_extensions_filters_common_fault_v3_FaultRateLimit_limit_type_case(const envoy_extensions_filters_common_fault_v3_FaultRateLimit* msg) { return (envoy_extensions_filters_common_fault_v3_FaultRateLimit_limit_type_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(12, 24), int32_t); }

UPB_INLINE bool envoy_extensions_filters_common_fault_v3_FaultRateLimit_has_fixed_limit(const envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 1; }
UPB_INLINE const envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit* envoy_extensions_filters_common_fault_v3_FaultRateLimit_fixed_limit(const envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg) { return UPB_READ_ONEOF(msg, const envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 1, NULL); }
UPB_INLINE bool envoy_extensions_filters_common_fault_v3_FaultRateLimit_has_percentage(const envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_type_v3_FractionalPercent* envoy_extensions_filters_common_fault_v3_FaultRateLimit_percentage(const envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_type_v3_FractionalPercent*); }
UPB_INLINE bool envoy_extensions_filters_common_fault_v3_FaultRateLimit_has_header_limit(const envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg) { return _upb_getoneofcase(msg, UPB_SIZE(12, 24)) == 3; }
UPB_INLINE const envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit* envoy_extensions_filters_common_fault_v3_FaultRateLimit_header_limit(const envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg) { return UPB_READ_ONEOF(msg, const envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit*, UPB_SIZE(8, 16), UPB_SIZE(12, 24), 3, NULL); }

UPB_INLINE void envoy_extensions_filters_common_fault_v3_FaultRateLimit_set_fixed_limit(envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg, envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit* value) {
  UPB_WRITE_ONEOF(msg, envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 1);
}
UPB_INLINE struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit* envoy_extensions_filters_common_fault_v3_FaultRateLimit_mutable_fixed_limit(envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg, upb_arena *arena) {
  struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit* sub = (struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit*)envoy_extensions_filters_common_fault_v3_FaultRateLimit_fixed_limit(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit*)_upb_msg_new(&envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_common_fault_v3_FaultRateLimit_set_fixed_limit(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_common_fault_v3_FaultRateLimit_set_percentage(envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg, struct envoy_type_v3_FractionalPercent* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_type_v3_FractionalPercent*) = value;
}
UPB_INLINE struct envoy_type_v3_FractionalPercent* envoy_extensions_filters_common_fault_v3_FaultRateLimit_mutable_percentage(envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg, upb_arena *arena) {
  struct envoy_type_v3_FractionalPercent* sub = (struct envoy_type_v3_FractionalPercent*)envoy_extensions_filters_common_fault_v3_FaultRateLimit_percentage(msg);
  if (sub == NULL) {
    sub = (struct envoy_type_v3_FractionalPercent*)_upb_msg_new(&envoy_type_v3_FractionalPercent_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_common_fault_v3_FaultRateLimit_set_percentage(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_extensions_filters_common_fault_v3_FaultRateLimit_set_header_limit(envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg, envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit* value) {
  UPB_WRITE_ONEOF(msg, envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit*, UPB_SIZE(8, 16), value, UPB_SIZE(12, 24), 3);
}
UPB_INLINE struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit* envoy_extensions_filters_common_fault_v3_FaultRateLimit_mutable_header_limit(envoy_extensions_filters_common_fault_v3_FaultRateLimit *msg, upb_arena *arena) {
  struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit* sub = (struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit*)envoy_extensions_filters_common_fault_v3_FaultRateLimit_header_limit(msg);
  if (sub == NULL) {
    sub = (struct envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit*)_upb_msg_new(&envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_msginit, arena);
    if (!sub) return NULL;
    envoy_extensions_filters_common_fault_v3_FaultRateLimit_set_header_limit(msg, sub);
  }
  return sub;
}

/* envoy.extensions.filters.common.fault.v3.FaultRateLimit.FixedLimit */

UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit *envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_new(upb_arena *arena) {
  return (envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit *)_upb_msg_new(&envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit *envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit *ret = envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit *envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit *ret = envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_serialize(const envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_msginit, arena, len);
}

UPB_INLINE uint64_t envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_limit_kbps(const envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), uint64_t); }

UPB_INLINE void envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit_set_limit_kbps(envoy_extensions_filters_common_fault_v3_FaultRateLimit_FixedLimit *msg, uint64_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), uint64_t) = value;
}

/* envoy.extensions.filters.common.fault.v3.FaultRateLimit.HeaderLimit */

UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit *envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_new(upb_arena *arena) {
  return (envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit *)_upb_msg_new(&envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_msginit, arena);
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit *envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit *ret = envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit *envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit *ret = envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_serialize(const envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_extensions_filters_common_fault_v3_FaultRateLimit_HeaderLimit_msginit, arena, len);
}



#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_EXTENSIONS_FILTERS_COMMON_FAULT_V3_FAULT_PROTO_UPB_H_ */
