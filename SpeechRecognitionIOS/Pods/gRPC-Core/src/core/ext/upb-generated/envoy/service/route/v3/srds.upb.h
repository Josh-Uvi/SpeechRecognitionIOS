/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/service/route/v3/srds.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_SERVICE_ROUTE_V3_SRDS_PROTO_UPB_H_
#define ENVOY_SERVICE_ROUTE_V3_SRDS_PROTO_UPB_H_

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

struct envoy_service_route_v3_SrdsDummy;
typedef struct envoy_service_route_v3_SrdsDummy envoy_service_route_v3_SrdsDummy;
extern const upb_msglayout envoy_service_route_v3_SrdsDummy_msginit;


/* envoy.service.route.v3.SrdsDummy */

UPB_INLINE envoy_service_route_v3_SrdsDummy *envoy_service_route_v3_SrdsDummy_new(upb_arena *arena) {
  return (envoy_service_route_v3_SrdsDummy *)_upb_msg_new(&envoy_service_route_v3_SrdsDummy_msginit, arena);
}
UPB_INLINE envoy_service_route_v3_SrdsDummy *envoy_service_route_v3_SrdsDummy_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_service_route_v3_SrdsDummy *ret = envoy_service_route_v3_SrdsDummy_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_service_route_v3_SrdsDummy_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_service_route_v3_SrdsDummy *envoy_service_route_v3_SrdsDummy_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_service_route_v3_SrdsDummy *ret = envoy_service_route_v3_SrdsDummy_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_service_route_v3_SrdsDummy_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_service_route_v3_SrdsDummy_serialize(const envoy_service_route_v3_SrdsDummy *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_service_route_v3_SrdsDummy_msginit, arena, len);
}



#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* ENVOY_SERVICE_ROUTE_V3_SRDS_PROTO_UPB_H_ */
