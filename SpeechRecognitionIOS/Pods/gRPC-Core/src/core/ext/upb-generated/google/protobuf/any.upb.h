/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/any.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef GOOGLE_PROTOBUF_ANY_PROTO_UPB_H_
#define GOOGLE_PROTOBUF_ANY_PROTO_UPB_H_

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

struct google_protobuf_Any;
typedef struct google_protobuf_Any google_protobuf_Any;
extern const upb_msglayout google_protobuf_Any_msginit;


/* google.protobuf.Any */

UPB_INLINE google_protobuf_Any *google_protobuf_Any_new(upb_arena *arena) {
  return (google_protobuf_Any *)_upb_msg_new(&google_protobuf_Any_msginit, arena);
}
UPB_INLINE google_protobuf_Any *google_protobuf_Any_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  google_protobuf_Any *ret = google_protobuf_Any_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &google_protobuf_Any_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE google_protobuf_Any *google_protobuf_Any_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  google_protobuf_Any *ret = google_protobuf_Any_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &google_protobuf_Any_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *google_protobuf_Any_serialize(const google_protobuf_Any *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &google_protobuf_Any_msginit, arena, len);
}

UPB_INLINE upb_strview google_protobuf_Any_type_url(const google_protobuf_Any *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE upb_strview google_protobuf_Any_value(const google_protobuf_Any *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview); }

UPB_INLINE void google_protobuf_Any_set_type_url(google_protobuf_Any *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void google_protobuf_Any_set_value(google_protobuf_Any *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* GOOGLE_PROTOBUF_ANY_PROTO_UPB_H_ */