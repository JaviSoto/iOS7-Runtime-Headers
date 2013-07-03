/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableData;

@interface MFBitmap : NSObject  {
    int m_width;
    int m_height;
    unsigned int m_bitsPerPixel;
    int m_compression;
    BOOL m_isOS2;
    unsigned int m_infoHeaderSize;
    unsigned int m_paletteSize;
    NSMutableData *m_bmpData;
}


- (void)setMonoPalette:(id)arg1;
- (id)initWithBitmap:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned int)arg7;
- (id)initWithDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(const char *)arg4 :(unsigned int)arg5 :(int)arg6;
- (id)initWithDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (void)writeInfoHeader;
- (void)writeFileHeader;
- (BOOL)processDIBHeader:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (void)appendDIBPalette:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (BOOL)parseHeader:(const char *)arg1 :(unsigned int)arg2;
- (void)setNull;
- (void)writePaletteEntry:(id)arg1 :(int)arg2;
- (id)init;
- (BOOL)isEmpty;
- (void)dealloc;

@end