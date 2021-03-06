/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class MPAVItem, RadioStation;

@interface RUAddStationEpilogueContext : NSObject {
    RadioStation *_addedStation;
    MPAVItem *_prefixItem;
    BOOL _shouldBeginPlayback;
    BOOL _shouldKeepPlayingCurrentItem;
}

@property(readonly) RadioStation * addedStation;
@property(retain) MPAVItem * prefixItem;
@property BOOL shouldBeginPlayback;
@property BOOL shouldKeepPlayingCurrentItem;

- (void).cxx_destruct;
- (id)addedStation;
- (id)description;
- (id)initWithAddedStation:(id)arg1;
- (id)prefixItem;
- (void)setPrefixItem:(id)arg1;
- (void)setShouldBeginPlayback:(BOOL)arg1;
- (void)setShouldKeepPlayingCurrentItem:(BOOL)arg1;
- (BOOL)shouldBeginPlayback;
- (BOOL)shouldKeepPlayingCurrentItem;

@end
