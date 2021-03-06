/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVItemAccessLogEvent : NSObject <NSCopying> {
    AVItemAccessLogEventInternal * _playerItemAccessLogEvent;
}

@property (nonatomic, readonly) NSString *URI;
@property (nonatomic, readonly) double durationWatched;
@property (nonatomic, readonly) double indicatedBitrate;
@property (nonatomic, readonly) long long numberOfBytesTransferred;
@property (nonatomic, readonly) long long numberOfDroppedVideoFrames;
@property (nonatomic, readonly) long long numberOfSegmentsDownloaded;
@property (nonatomic, readonly) long long numberOfServerAddressChanges;
@property (nonatomic, readonly) long long numberOfStalls;
@property (nonatomic, readonly) double observedBitrate;
@property (nonatomic, readonly) NSString *playbackSessionID;
@property (nonatomic, readonly) NSDate *playbackStartDate;
@property (nonatomic, readonly) double playbackStartOffset;
@property (nonatomic, readonly) double segmentsDownloadedDuration;
@property (nonatomic, readonly) NSString *serverAddress;

- (id)URI;
- (double)averageAudioBitrate;
- (double)averageVideoBitrate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)durationWatched;
- (void)finalize;
- (double)indicatedBitrate;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)numberOfBytesTransferred;
- (long long)numberOfDroppedVideoFrames;
- (long long)numberOfSegmentsDownloaded;
- (long long)numberOfServerAddressChanges;
- (long long)numberOfStalls;
- (double)observedBitrate;
- (id)playbackSessionID;
- (id)playbackStartDate;
- (double)playbackStartOffset;
- (double)segmentsDownloadedDuration;
- (id)serverAddress;

@end
