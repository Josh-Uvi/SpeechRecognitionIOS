/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/grpc_service.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg_internal.h"
#else
  #include  "upb/msg_internal.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/core/v3/grpc_service.upb.h"
#else
  #include  "envoy/config/core/v3/grpc_service.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/config/core/v3/base.upb.h"
#else
  #include  "envoy/config/core/v3/base.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/any.upb.h"
#else
  #include  "google/protobuf/any.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/duration.upb.h"
#else
  #include  "google/protobuf/duration.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/empty.upb.h"
#else
  #include  "google/protobuf/empty.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/struct.upb.h"
#else
  #include  "google/protobuf/struct.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/google/protobuf/wrappers.upb.h"
#else
  #include  "google/protobuf/wrappers.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/sensitive.upb.h"
#else
  #include  "udpa/annotations/sensitive.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/status.upb.h"
#else
  #include  "udpa/annotations/status.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/versioning.upb.h"
#else
  #include  "udpa/annotations/versioning.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/validate/validate.upb.h"
#else
  #include  "validate/validate.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const envoy_config_core_v3_GrpcService_submsgs[4] = {
  &envoy_config_core_v3_GrpcService_EnvoyGrpc_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_msginit,
  &envoy_config_core_v3_HeaderValue_msginit,
  &google_protobuf_Duration_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService__fields[4] = {
  {1, UPB_SIZE(12, 24), UPB_SIZE(-17, -33), 0, 11, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(12, 24), UPB_SIZE(-17, -33), 1, 11, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(4, 8), 1, 3, 11, _UPB_MODE_SCALAR},
  {5, UPB_SIZE(8, 16), 0, 2, 11, _UPB_MODE_ARRAY},
};

const upb_msglayout envoy_config_core_v3_GrpcService_msginit = {
  &envoy_config_core_v3_GrpcService_submsgs[0],
  &envoy_config_core_v3_GrpcService__fields[0],
  UPB_SIZE(24, 40), 4, false, 3, 255,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_EnvoyGrpc__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(8, 16), 0, 0, 9, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_EnvoyGrpc_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_EnvoyGrpc__fields[0],
  UPB_SIZE(16, 32), 2, false, 2, 255,
};

static const upb_msglayout *const envoy_config_core_v3_GrpcService_GoogleGrpc_submsgs[5] = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials_msginit,
  &google_protobuf_Struct_msginit,
  &google_protobuf_UInt32Value_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc__fields[8] = {
  {1, UPB_SIZE(4, 8), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(28, 56), 1, 2, 11, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(44, 88), 0, 0, 11, _UPB_MODE_ARRAY},
  {4, UPB_SIZE(12, 24), 0, 0, 9, _UPB_MODE_SCALAR},
  {5, UPB_SIZE(20, 40), 0, 0, 9, _UPB_MODE_SCALAR},
  {6, UPB_SIZE(32, 64), 2, 3, 11, _UPB_MODE_SCALAR},
  {7, UPB_SIZE(36, 72), 3, 4, 11, _UPB_MODE_SCALAR},
  {8, UPB_SIZE(40, 80), 4, 1, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc__fields[0],
  UPB_SIZE(48, 96), 8, false, 8, 255,
};

static const upb_msglayout *const envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials_submsgs[1] = {
  &envoy_config_core_v3_DataSource_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(8, 16), 2, 0, 11, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(12, 24), 3, 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials__fields[0],
  UPB_SIZE(16, 32), 3, false, 3, 255,
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_GoogleLocalCredentials_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false, 0, 255,
};

static const upb_msglayout *const envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials_submsgs[3] = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_GoogleLocalCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_SslCredentials_msginit,
  &google_protobuf_Empty_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials__fields[3] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelCredentials__fields[0],
  UPB_SIZE(8, 16), 3, false, 3, 255,
};

static const upb_msglayout *const envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_submsgs[5] = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_GoogleIAMCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_ServiceAccountJWTAccessCredentials_msginit,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_StsService_msginit,
  &google_protobuf_Empty_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials__fields[7] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 4, 11, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, _UPB_MODE_SCALAR},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 2, 11, _UPB_MODE_SCALAR},
  {5, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 11, _UPB_MODE_SCALAR},
  {6, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 1, 11, _UPB_MODE_SCALAR},
  {7, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 3, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials__fields[0],
  UPB_SIZE(16, 32), 7, false, 7, 255,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_ServiceAccountJWTAccessCredentials__fields[2] = {
  {1, UPB_SIZE(8, 8), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(0, 0), 0, 0, 4, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_ServiceAccountJWTAccessCredentials_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_ServiceAccountJWTAccessCredentials__fields[0],
  UPB_SIZE(16, 32), 2, false, 2, 255,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_GoogleIAMCredentials__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(8, 16), 0, 0, 9, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_GoogleIAMCredentials_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_GoogleIAMCredentials__fields[0],
  UPB_SIZE(16, 32), 2, false, 2, 255,
};

static const upb_msglayout *const envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin_submsgs[1] = {
  &google_protobuf_Any_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(8, 16), UPB_SIZE(-13, -25), 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_MetadataCredentialsFromPlugin__fields[0],
  UPB_SIZE(16, 32), 2, false, 1, 255,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_StsService__fields[9] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(8, 16), 0, 0, 9, _UPB_MODE_SCALAR},
  {3, UPB_SIZE(16, 32), 0, 0, 9, _UPB_MODE_SCALAR},
  {4, UPB_SIZE(24, 48), 0, 0, 9, _UPB_MODE_SCALAR},
  {5, UPB_SIZE(32, 64), 0, 0, 9, _UPB_MODE_SCALAR},
  {6, UPB_SIZE(40, 80), 0, 0, 9, _UPB_MODE_SCALAR},
  {7, UPB_SIZE(48, 96), 0, 0, 9, _UPB_MODE_SCALAR},
  {8, UPB_SIZE(56, 112), 0, 0, 9, _UPB_MODE_SCALAR},
  {9, UPB_SIZE(64, 128), 0, 0, 9, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_StsService_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_CallCredentials_StsService__fields[0],
  UPB_SIZE(72, 144), 9, false, 9, 255,
};

static const upb_msglayout *const envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_submsgs[1] = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_MAP},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs__fields[0],
  UPB_SIZE(8, 8), 1, false, 1, 255,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_Value__fields[2] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 3, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_Value_msginit = {
  NULL,
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_Value__fields[0],
  UPB_SIZE(16, 32), 2, false, 2, 255,
};

static const upb_msglayout *const envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry_submsgs[1] = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_Value_msginit,
};

static const upb_msglayout_field envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, _UPB_MODE_SCALAR},
  {2, UPB_SIZE(8, 16), 0, 0, 11, _UPB_MODE_SCALAR},
};

const upb_msglayout envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry_msginit = {
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry_submsgs[0],
  &envoy_config_core_v3_GrpcService_GoogleGrpc_ChannelArgs_ArgsEntry__fields[0],
  UPB_SIZE(16, 32), 2, false, 2, 255,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif

