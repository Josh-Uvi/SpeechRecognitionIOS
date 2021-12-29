/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/v3/percent.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_TYPE_V3_PERCENT_PROTO_UPB_H_
#define ENVOY_TYPE_V3_PERCENT_PROTO_UPB_H_

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

struct envoy_type_v3_Percent;
struct envoy_type_v3_FractionalPercent;
typedef struct envoy_type_v3_Percent envoy_type_v3_Percent;
typedef struct envoy_type_v3_FractionalPercent envoy_type_v3_FractionalPercent;
extern const upb_msglayout envoy_type_v3_Percent_msginit;
extern const upb_msglayout envoy_type_v3_FractionalPercent_msginit;

typedef enum {
  envoy_type_v3_FractionalPercent_HUNDRED = 0,
  envoy_type_v3_FractionalPercent_TEN_THOUSAND = 1,
  envoy_type_v3_FractionalPercent_MILLION = 2
} envoy_type_v3_FractionalPercent_DenominatorType;


/* envoy.type.v3.Percent */

UPB_INLINE envoy_type_v3_Percent *envoy_type_v3_Percent_new(upb_arena *arena) {
  return (envoy_type_v3_Percent *)_upb_msg_new(&envoy_type_v3_Percent_msginit, arena);
}
UPB_INLINE envoy_type_v3_Percent *envoy_type_v3_Percent_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_v3_Percent *ret = envoy_type_v3_Percent_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_v3_Percent_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_v3_Percent *envoy_type_v3_Percent_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_v3_Percent *ret = envoy_type_v3_Percent_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_v3_Percent_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_v3_Percent_serialize(const envoy_type_v3_Percent *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_v3_Percent_msginit, arena, len);
}

UPB_INLINE double envoy_type_v3_Percent_value(const envoy_type_v3_Percent *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), double); }

UPB_INLINE void envoy_type_v3_Percent_set_value(envoy_type_v3_Percent *msg, double value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), double) = value;
}

/* envoy.type.v3.FractionalPercent */

UPB_INLINE envoy_type_v3_FractionalPercent *envoy_type_v3_FractionalPercent_new(upb_arena *arena) {
  return (envoy_type_v3_FractionalPercent *)_upb_msg_new(&envoy_type_v3_FractionalPercent_msginit, arena);
}
UPB_INLINE envoy_type_v3_FractionalPercent *envoy_type_v3_FractionalPercent_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_type_v3_FractionalPercent *ret = envoy_type_v3_FractionalPercent_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_type_v3_FractionalPercent_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_type_v3_FractionalPercent *envoy_type_v3_FractionalPercent_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_type_v3_FractionalPercent *ret = envoy_type_v3_FractionalPercent_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_type_v3_FractionalPercent_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_type_v3_FractionalPercent_serialize(const envoy_type_v3_FractionalPercent *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_type_v3_FractionalPercent_msginit, arena, len);
}

UPB_INLINE uint32_t envoy_type_v3_FractionalPercent_numerator(const envoy_type_v3_FractionalPercent *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t); }
UPB_INLINE int32_t envoy_type_v3_FractionalPercent_denominator(const envoy_type_v3_FractionalPercent *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t); }

UPB_INLINE void envoy_type_v3_FractionalPercent_set_numerator(envoy_type_v3_FractionalPercent *msg, uint32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 4), uint32_t) = value;
}
UPB_INLINE void envoy_type_v3_FractionalPercent_set_denominator(envoy_type_v3_FractionalPercent *msg, int32_t value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), int32_t) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_TYPE_V3_PERCENT_PROTO_UPB_H_ */
