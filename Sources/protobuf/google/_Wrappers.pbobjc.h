// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/wrappers.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(_GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define _GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if _GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/__GPBDescriptor.h>
 #import <Protobuf/__GPBMessage.h>
 #import <Protobuf/__GPBRootObject.h>
#else
 #import "_GPBDescriptor.h"
 #import "_GPBMessage.h"
 #import "_GPBRootObject.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - _GPBWrappersRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (_GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c _GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface _GPBWrappersRoot : _GPBRootObject
@end

#pragma mark - _GPBDoubleValue

typedef _GPB_ENUM(_GPBDoubleValue_FieldNumber) {
  _GPBDoubleValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `double`.
 *
 * The JSON representation for `DoubleValue` is JSON number.
 **/
@interface _GPBDoubleValue : _GPBMessage

/** The double value. */
@property(nonatomic, readwrite) double value;

@end

#pragma mark - _GPBFloatValue

typedef _GPB_ENUM(_GPBFloatValue_FieldNumber) {
  _GPBFloatValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `float`.
 *
 * The JSON representation for `FloatValue` is JSON number.
 **/
@interface _GPBFloatValue : _GPBMessage

/** The float value. */
@property(nonatomic, readwrite) float value;

@end

#pragma mark - _GPBInt64Value

typedef _GPB_ENUM(_GPBInt64Value_FieldNumber) {
  _GPBInt64Value_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `int64`.
 *
 * The JSON representation for `Int64Value` is JSON string.
 **/
@interface _GPBInt64Value : _GPBMessage

/** The int64 value. */
@property(nonatomic, readwrite) int64_t value;

@end

#pragma mark - _GPBUInt64Value

typedef _GPB_ENUM(_GPBUInt64Value_FieldNumber) {
  _GPBUInt64Value_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `uint64`.
 *
 * The JSON representation for `UInt64Value` is JSON string.
 **/
@interface _GPBUInt64Value : _GPBMessage

/** The uint64 value. */
@property(nonatomic, readwrite) uint64_t value;

@end

#pragma mark - _GPBInt32Value

typedef _GPB_ENUM(_GPBInt32Value_FieldNumber) {
  _GPBInt32Value_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `int32`.
 *
 * The JSON representation for `Int32Value` is JSON number.
 **/
@interface _GPBInt32Value : _GPBMessage

/** The int32 value. */
@property(nonatomic, readwrite) int32_t value;

@end

#pragma mark - _GPBUInt32Value

typedef _GPB_ENUM(_GPBUInt32Value_FieldNumber) {
  _GPBUInt32Value_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `uint32`.
 *
 * The JSON representation for `UInt32Value` is JSON number.
 **/
@interface _GPBUInt32Value : _GPBMessage

/** The uint32 value. */
@property(nonatomic, readwrite) uint32_t value;

@end

#pragma mark - _GPBBoolValue

typedef _GPB_ENUM(_GPBBoolValue_FieldNumber) {
  _GPBBoolValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `bool`.
 *
 * The JSON representation for `BoolValue` is JSON `true` and `false`.
 **/
@interface _GPBBoolValue : _GPBMessage

/** The bool value. */
@property(nonatomic, readwrite) BOOL value;

@end

#pragma mark - _GPBStringValue

typedef _GPB_ENUM(_GPBStringValue_FieldNumber) {
  _GPBStringValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `string`.
 *
 * The JSON representation for `StringValue` is JSON string.
 **/
@interface _GPBStringValue : _GPBMessage

/** The string value. */
@property(nonatomic, readwrite, copy, null_resettable) NSString *value;

@end

#pragma mark - _GPBBytesValue

typedef _GPB_ENUM(_GPBBytesValue_FieldNumber) {
  _GPBBytesValue_FieldNumber_Value = 1,
};

/**
 * Wrapper message for `bytes`.
 *
 * The JSON representation for `BytesValue` is JSON string.
 **/
@interface _GPBBytesValue : _GPBMessage

/** The bytes value. */
@property(nonatomic, readwrite, copy, null_resettable) NSData *value;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
