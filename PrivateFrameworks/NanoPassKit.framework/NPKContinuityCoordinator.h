/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@class NSObject<OS_dispatch_queue>, NSUserActivity;

@interface NPKContinuityCoordinator : NSObject {
    NSUserActivity *_currentUserActivity;
    NSUserActivity *_getPaymentPassesUserActivity;
    NSUserActivity *_individualPassUserActivity;
    NSUserActivity *_passListUserActivity;
    NSUserActivity *_provisionPassUserActivity;
    NSObject<OS_dispatch_queue> *_queue;
}

@property NSUserActivity * currentUserActivity;
@property(retain) NSUserActivity * getPaymentPassesUserActivity;
@property(retain) NSUserActivity * individualPassUserActivity;
@property(retain) NSUserActivity * passListUserActivity;
@property(retain) NSUserActivity * provisionPassUserActivity;
@property(retain) NSObject<OS_dispatch_queue> * queue;

+ (id)sharedContinuityCoordinator;

- (void).cxx_destruct;
- (id)_init;
- (void)_saveUserActivity:(id)arg1;
- (id)_skeletonBridgeUserActivity;
- (id)currentUserActivity;
- (void)dealloc;
- (id)getPaymentPassesUserActivity;
- (id)individualPassUserActivity;
- (id)init;
- (id)passListUserActivity;
- (id)provisionPassUserActivity;
- (id)queue;
- (void)setCurrentUserActivity:(id)arg1;
- (void)setGetPaymentPassesUserActivity:(id)arg1;
- (void)setIndividualPassUserActivity:(id)arg1;
- (void)setPassListUserActivity:(id)arg1;
- (void)setProvisionPassUserActivity:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)userActivityForPassWithUniqueID:(id)arg1;
- (void)userNeedsPaymentPasses;
- (void)userNeedsToProvisionPassWithUniqueID:(id)arg1;
- (void)userViewingPassList;
- (void)userViewingPassWithUniqueID:(id)arg1 isPaymentPass:(BOOL)arg2;

@end
