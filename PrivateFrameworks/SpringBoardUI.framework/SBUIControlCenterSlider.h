/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIImage, UIVisualEffectView, NSString;

@interface SBUIControlCenterSlider : _UIDynamicSlider <_UISettingsKeyObserver, SBUIControlCenterControl> {
    double _valueImagePadding;
    bool_customTrackImage;
    UIVisualEffectView *_highlightEffectView;
    bool_highlightMinimumTrackImage;
    bool_shouldHighlightValueImagesWhileAdjusting;
    bool_adjusting;
    UIImage *_minValueMaskImage;
    UIImage *_maxValueMaskImage;
    UIImage *_trackMaskImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _trackCapInsets;
}

@property bool highlightMinimumTrackImage;
@property bool shouldHighlightValueImagesWhileAdjusting;
@property(getter=isAdjusting) bool adjusting;
@property(retain) UIImage * minValueMaskImage;
@property(retain) UIImage * maxValueMaskImage;
@property(retain) UIImage * trackMaskImage;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } trackCapInsets;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;

+ (id)_knobImage;
+ (id)_maxTrackImage;
+ (id)_minTrackImageForState:(long long)arg1;
+ (id)_createTrackImageForState:(long long)arg1;
+ (id)_trackImage;
+ (void)controlAppearanceDidChangeForState:(long long)arg1;
+ (void)initialize;

- (bool)isAdjusting;
- (void)setShouldHighlightValueImagesWhileAdjusting:(bool)arg1;
- (void)setHighlightMinimumTrackImage:(bool)arg1;
- (bool)highlightMinimumTrackImage;
- (void)_configureControlStates;
- (double)_valueImagePadding;
- (double)_naturalTrackWidth;
- (double)_valueImageCenterTrackOffset;
- (void)_updateMaximumValueImage;
- (void)_updateMinimumValueImage;
- (void)_updateMaximumTrackImage;
- (void)setTrackCapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setTrackImage:(id)arg1;
- (void)_updateMinimumTrackImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })trackCapInsets;
- (void)_updateValueImageView:(id)arg1 fadeToImage:(id)arg2;
- (bool)shouldHighlightValueImagesWhileAdjusting;
- (void)setAdjusting:(bool)arg1;
- (id)maxValueMaskImage;
- (id)_valueImageForImage:(id)arg1 state:(long long)arg2;
- (id)minValueMaskImage;
- (void)setMaxValueMaskImage:(id)arg1;
- (void)setMinValueMaskImage:(id)arg1;
- (void)setTrackMaskImage:(id)arg1;
- (void)controlConfigurationDidChangeForState:(long long)arg1;
- (void)controlAppearanceDidChangeForState:(long long)arg1;
- (void)_updateEffects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)trackMaskImage;
- (void)setTrackImage:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)setMaximumValueImage:(id)arg1;
- (void)setMinimumValueImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutSubviews;

@end