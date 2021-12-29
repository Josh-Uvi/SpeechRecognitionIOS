/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/annotations/security.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_ANNOTATIONS_SECURITY_PROTO_UPB_H_
#define UDPA_ANNOTATIONS_SECURITY_PROTO_UPB_H_

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

struct udpa_annotations_FieldSecurityAnnotation;
typedef struct udpa_annotations_FieldSecurityAnnotation udpa_annotations_FieldSecurityAnnotation;
extern const upb_msglayout udpa_annotations_FieldSecurityAnnotation_msginit;


/* udpa.annotations.FieldSecurityAnnotation */

UPB_INLINE udpa_annotations_FieldSecurityAnnotation *udpa_annotations_FieldSecurityAnnotation_new(upb_arena *arena) {
  return (udpa_annotations_FieldSecurityAnnotation *)_upb_msg_new(&udpa_annotations_FieldSecurityAnnotation_msginit, arena);
}
UPB_INLINE udpa_annotations_FieldSecurityAnnotation *udpa_annotations_FieldSecurityAnnotation_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_annotations_FieldSecurityAnnotation *ret = udpa_annotations_FieldSecurityAnnotation_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &udpa_annotations_FieldSecurityAnnotation_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE udpa_annotations_FieldSecurityAnnotation *udpa_annotations_FieldSecurityAnnotation_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  udpa_annotations_FieldSecurityAnnotation *ret = udpa_annotations_FieldSecurityAnnotation_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &udpa_annotations_FieldSecurityAnnotation_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *udpa_annotations_FieldSecurityAnnotation_serialize(const udpa_annotations_FieldSecurityAnnotation *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_annotations_FieldSecurityAnnotation_msginit, arena, len);
}

UPB_INLINE bool udpa_annotations_FieldSecurityAnnotation_configure_for_untrusted_downstream(const udpa_annotations_FieldSecurityAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool); }
UPB_INLINE bool udpa_annotations_FieldSecurityAnnotation_configure_for_untrusted_upstream(const udpa_annotations_FieldSecurityAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool); }

UPB_INLINE void udpa_annotations_FieldSecurityAnnotation_set_configure_for_untrusted_downstream(udpa_annotations_FieldSecurityAnnotation *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), bool) = value;
}
UPB_INLINE void udpa_annotations_FieldSecurityAnnotation_set_configure_for_untrusted_upstream(udpa_annotations_FieldSecurityAnnotation *msg, bool value) {
  *UPB_PTR_AT(msg, UPB_SIZE(1, 1), bool) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* UDPA_ANNOTATIONS_SECURITY_PROTO_UPB_H_ */
