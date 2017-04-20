/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFBCGetNumberFormattedStringResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *result;
@property (readonly) Class superclass;

+ (id)getNumberFormattedStringResponse;
+ (id)getNumberFormattedStringResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)result;
- (void)setResult:(id)arg1;

@end