/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     udpa/annotations/versioning.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef UDPA_ANNOTATIONS_VERSIONING_PROTO_UPB_H_
#define UDPA_ANNOTATIONS_VERSIONING_PROTO_UPB_H_

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

struct udpa_annotations_VersioningAnnotation;
typedef struct udpa_annotations_VersioningAnnotation udpa_annotations_VersioningAnnotation;
extern const upb_msglayout udpa_annotations_VersioningAnnotation_msginit;


/* udpa.annotations.VersioningAnnotation */

UPB_INLINE udpa_annotations_VersioningAnnotation *udpa_annotations_VersioningAnnotation_new(upb_arena *arena) {
  return (udpa_annotations_VersioningAnnotation *)_upb_msg_new(&udpa_annotations_VersioningAnnotation_msginit, arena);
}
UPB_INLINE udpa_annotations_VersioningAnnotation *udpa_annotations_VersioningAnnotation_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  udpa_annotations_VersioningAnnotation *ret = udpa_annotations_VersioningAnnotation_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &udpa_annotations_VersioningAnnotation_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE udpa_annotations_VersioningAnnotation *udpa_annotations_VersioningAnnotation_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  udpa_annotations_VersioningAnnotation *ret = udpa_annotations_VersioningAnnotation_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &udpa_annotations_VersioningAnnotation_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *udpa_annotations_VersioningAnnotation_serialize(const udpa_annotations_VersioningAnnotation *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &udpa_annotations_VersioningAnnotation_msginit, arena, len);
}

UPB_INLINE upb_strview udpa_annotations_VersioningAnnotation_previous_message_type(const udpa_annotations_VersioningAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }

UPB_INLINE void udpa_annotations_VersioningAnnotation_set_previous_message_type(udpa_annotations_VersioningAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

#endif  /* UDPA_ANNOTATIONS_VERSIONING_PROTO_UPB_H_ */
