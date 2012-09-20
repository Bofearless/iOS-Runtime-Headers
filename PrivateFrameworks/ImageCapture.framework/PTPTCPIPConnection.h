/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableData, PTPTCPIPTransport, NSTimer;

@interface PTPTCPIPConnection : NSObject  {
    PTPTCPIPTransport *_transport;
    NSTimer *_inactivityTimer;
    NSTimer *_receiveTimer;
    NSTimer *_transmitTimer;
    struct __CFReadStream { } *_inStream;
    struct __CFWriteStream { } *_outStream;
    struct dispatch_semaphore_s { } *_receiveBufferSemaphore;
    NSMutableData *_recieveBuffer;
    unsigned int _bytesReceived;
    struct dispatch_semaphore_s { } *_transmitBufferSemaphore;
    NSMutableData *_transmitBuffer;
    unsigned int _bytesSent;
}


- (void)inactivityTimerCallBack:(id)arg1;
- (void)handleEndEncountered;
- (void)handleHasBytesAvailable;
- (id)initWithSocketToHost:(id)arg1 port:(unsigned long)arg2 transport:(id)arg3;
- (id)initWithNativeSocket:(int)arg1 transport:(id)arg2;
- (void)handleErrorOccurred:(struct { int x1; int x2; })arg1;
- (void)handleCanAcceptBytes;
- (void)dealloc;
- (void)close;
- (BOOL)writeData:(id)arg1;
- (BOOL)open;

@end