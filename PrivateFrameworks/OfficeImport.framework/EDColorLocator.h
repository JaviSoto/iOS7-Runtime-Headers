/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUColor;

@interface EDColorLocator : NSObject  {
    unsigned int mColorOffset;
    int mColorIndex;
    TSUColor *mColor;
}


- (void)setColorIndex:(int)arg1;
- (id)initWith:(id)arg1 index:(int)arg2 offset:(unsigned int)arg3;
- (int)colorIndex;
- (void)setOffset:(unsigned int)arg1;
- (unsigned int)offset;
- (id)color;
- (void)dealloc;
- (void)setColor:(id)arg1;

@end