/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHardware : NSObject {
}

+ (float)TVAspectRatio;
+ (BOOL)TVOutCapable;
+ (BOOL)TVOutCapableAndPreferred;
+ (void)TVOutResetPreferred;
+ (struct CGSize { float x1; float x2; })TVScreenSize;
+ (BOOL)_TVOutStatus:(BOOL)arg1;
+ (void)_playSystemSound:(unsigned long)arg1;
+ (void)_registerForSystemSounds:(id)arg1;
+ (void)_unregisterForSystemSounds:(id)arg1;
+ (void)_updateSystemSoundActiveStatus:(id)arg1;
+ (void)accessoryAvailabilityChanged;
+ (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
+ (id)deviceName;
+ (int)deviceOrientation:(BOOL)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullScreenApplicationContentRect;
+ (BOOL)isTTYEnabled;
+ (id)localizedDeviceName;
+ (struct CGSize { float x1; float x2; })mainScreenSize;
+ (int)ringerState;
+ (BOOL)setSpeakerPhoneEnabled:(BOOL)arg1;
+ (float)statusBarHeight;

@end