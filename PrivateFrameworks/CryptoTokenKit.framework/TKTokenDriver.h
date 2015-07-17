/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenDriver : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _tokens;
}

- (void).cxx_destruct;
- (void)acquireTokenWithInstanceID:(id)arg1 classID:(id)arg2 reply:(id /* block */)arg3;
- (void)getTokenWithInstanceID:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (void)releaseTokenWithInstanceID:(id)arg1;

@end