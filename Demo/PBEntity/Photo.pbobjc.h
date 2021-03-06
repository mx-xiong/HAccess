// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Photo.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30000
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - PhotoRoot

@interface PhotoRoot : GPBRootObject

// The base class provides:
//   + (GPBExtensionRegistry *)extensionRegistry;
// which is an GPBExtensionRegistry that includes all the extensions defined by
// this file and all files that it depends on.

@end

#pragma mark - PhotoInfo

typedef GPB_ENUM(PhotoInfo_FieldNumber) {
  PhotoInfo_FieldNumber_Pid = 1,
  PhotoInfo_FieldNumber_Width = 2,
  PhotoInfo_FieldNumber_URL = 3,
};

@interface PhotoInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *pid;

@property(nonatomic, readwrite) int32_t width;

@property(nonatomic, readwrite, copy, null_resettable) NSString *uRL;

@end

#pragma mark - PhotoInfo_Etag

typedef GPB_ENUM(PhotoInfo_Etag_FieldNumber) {
  PhotoInfo_Etag_FieldNumber_Number = 1,
  PhotoInfo_Etag_FieldNumber_Eid = 2,
};

@interface PhotoInfo_Etag : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *number;

@property(nonatomic, readwrite, copy, null_resettable) NSString *eid;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

// @@protoc_insertion_point(global_scope)
