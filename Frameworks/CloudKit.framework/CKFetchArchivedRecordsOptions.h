/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchArchivedRecordsOptions : NSObject <NSCopying, NSSecureCoding> {
    CKServerChangeToken * _previousServerChangeToken;
}

@property (nonatomic, copy) CKServerChangeToken *previousServerChangeToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previousServerChangeToken;
- (void)setPreviousServerChangeToken:(id)arg1;

@end
