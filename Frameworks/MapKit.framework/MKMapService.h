/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapService : NSObject  {
}

+ (id)sharedService;

- (id)ticketForProblem:(id)arg1 mapItemForProblemContext:(id)arg2 traits:(id)arg3;
- (void)_mapItemsForResponseData:(id)arg1 handler:(id)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1 flyoverAnimationID:(unsigned long long)arg2;
- (void)submitUsageForTraitsWithAction:(int)arg1;
- (id)_mk_ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 localSearchProviderID:(int)arg3 traits:(id)arg4;
- (id)ticketForReverseGeocodeDroppedPinCoordinate:(struct { double x1; double x2; })arg1 traits:(id)arg2;
- (id)ticketForForwardGeocodeAddress:(id)arg1 traits:(id)arg2;
- (void)submitUsageForTraits:(id)arg1;
- (id)ticketForSearchQuery:(id)arg1 suggestionPrefix:(id)arg2 maxResults:(unsigned int)arg3 traits:(id)arg4;
- (id)ticketForCanonicalLocationSearchQueryString:(id)arg1 traits:(id)arg2;
- (id)ticketForPhoneNumbers:(id)arg1 traits:(id)arg2;
- (id)defaultTraitsWithTraits:(id)arg1;
- (void)submitUsageForTraitsWithAction:(int)arg1 mapItem:(id)arg2;
- (id)ticketForForwardGeocodeString:(id)arg1 traits:(id)arg2;
- (id)ticketForSearchQuery:(id)arg1 completionItem:(id)arg2 localSearchProviderID:(int)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5;
- (id)ticketForMUIDs:(id)arg1 localSearchProviderID:(int)arg2 traits:(id)arg3;
- (void)submitUsageForTraits:(id)arg1 mapItem:(id)arg2 timestamp:(double)arg3 resultIndex:(int)arg4;
- (id)ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 traits:(id)arg2;
- (id)defaultTraits;
- (id)_ticketForReverseGeocodeCoordinate:(struct { double x1; double x2; })arg1 includeEntryPoints:(bool)arg2 traits:(id)arg3;

@end