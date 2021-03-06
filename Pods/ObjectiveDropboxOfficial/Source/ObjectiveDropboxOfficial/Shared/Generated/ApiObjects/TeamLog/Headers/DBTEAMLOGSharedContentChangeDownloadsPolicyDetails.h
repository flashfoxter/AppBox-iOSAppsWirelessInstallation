///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGDownloadPolicyType;
@class DBTEAMLOGSharedContentChangeDownloadsPolicyDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `SharedContentChangeDownloadsPolicyDetails` struct.
///
/// Changed whether members can download shared file/folder.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGSharedContentChangeDownloadsPolicyDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// New downloads policy.
@property (nonatomic, readonly) DBTEAMLOGDownloadPolicyType *dNewValue;

/// Previous downloads policy. Might be missing due to historical data gap.
@property (nonatomic, readonly, nullable) DBTEAMLOGDownloadPolicyType *previousValue;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param dNewValue New downloads policy.
/// @param previousValue Previous downloads policy. Might be missing due to
/// historical data gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGDownloadPolicyType *)dNewValue
                    previousValue:(nullable DBTEAMLOGDownloadPolicyType *)previousValue;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param dNewValue New downloads policy.
///
/// @return An initialized instance.
///
- (instancetype)initWithDNewValue:(DBTEAMLOGDownloadPolicyType *)dNewValue;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SharedContentChangeDownloadsPolicyDetails`
/// struct.
///
@interface DBTEAMLOGSharedContentChangeDownloadsPolicyDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` instances.
///
/// @param instance An instance of the
/// `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGSharedContentChangeDownloadsPolicyDetails *)instance;

///
/// Deserializes `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` API object.
///
/// @return An instantiation of the
/// `DBTEAMLOGSharedContentChangeDownloadsPolicyDetails` object.
///
+ (DBTEAMLOGSharedContentChangeDownloadsPolicyDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
