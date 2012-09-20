/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class <CBCentralManagerDelegate>;

@interface CBCentralManager : NSObject  {
    <CBCentralManagerDelegate> *_delegate;
    int _state;
}

@property <CBCentralManagerDelegate> * delegate;
@property(readonly) int state;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (int)state;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)stopScan;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (void)retrieveConnectedPeripherals;
- (void)retrievePeripherals:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;

@end