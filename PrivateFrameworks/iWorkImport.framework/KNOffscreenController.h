/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNOffscreenController : NSObject {
    CALayer * _baseLayer;
    KNAnimatedSlideView * mAnimator;
    bool  mFirstEvent;
    bool  mIsImageGenerationCancelled;
    struct CGSize { 
        double width; 
        double height; 
    }  mOutputSize;
    KNPlaybackSession * mSession;
    KNShow * mShow;
    unsigned long long  mSlideIndex;
}

@property (nonatomic, readonly) KNAnimatedSlideView *animatedSlideView;
@property (nonatomic, readonly) CALayer *baseLayer;
@property (nonatomic, readonly) KNSlide *currentSlide;
@property (nonatomic, readonly) KNSlideNode *currentSlideNode;
@property (nonatomic, readonly) unsigned long long eventCount;
@property (nonatomic, readonly) unsigned long long eventIndex;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic, readonly) int playMode;
@property (nonatomic, readonly) KNPlaybackSession *playbackSession;
@property (nonatomic, readonly) KNShow *show;
@property (nonatomic, readonly) unsigned long long slideCount;
@property (nonatomic, readonly) unsigned long long slideIndex;

- (id)animatedSlideView;
- (id)baseLayer;
- (void)cancelImageGeneration;
- (struct CGImage { }*)copyImageOfCurrentEventIgnoringBuildVisilibity:(bool)arg1;
- (id)currentSlide;
- (id)currentSlideNode;
- (void)dealloc;
- (void)drawCurrentEventIntoContext:(struct CGContext { }*)arg1 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ignoreBuildVisibility:(bool)arg3;
- (unsigned long long)eventCount;
- (unsigned long long)eventIndex;
- (void)generateImageOfCurrentEventWithCompletonHandler:(id /* block */)arg1;
- (bool)gotoEventIndex:(unsigned long long)arg1;
- (bool)gotoFirstSlide;
- (bool)gotoLastSlide;
- (bool)gotoNextEvent;
- (bool)gotoNextSlide;
- (bool)gotoPreviousSlide;
- (bool)gotoSlideNode:(id)arg1 andEvent:(unsigned long long)arg2;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2;
- (id)initWithShow:(id)arg1 canvasDelegate:(id)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (struct CGSize { double x1; double x2; })outputSize;
- (void)p_setAnimator:(id)arg1;
- (int)playMode;
- (id)playbackSession;
- (id)show;
- (unsigned long long)slideCount;
- (unsigned long long)slideIndex;
- (id)transitionRendererAtCurrentEvent;

@end
