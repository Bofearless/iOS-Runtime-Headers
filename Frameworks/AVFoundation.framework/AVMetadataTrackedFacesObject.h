/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMetadataTrackedFacesObject : AVMetadataObject <NSCopying> {
    AVMetadataTrackedFacesObjectInternal * _trackedFacesObjectInternal;
}

@property (readonly) NSDictionary *payload;

+ (id)trackedFacesWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 faceKitDictionary:(id)arg2 input:(id)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 faceKitDictionary:(id)arg2 input:(id)arg3;
- (id)payload;

@end