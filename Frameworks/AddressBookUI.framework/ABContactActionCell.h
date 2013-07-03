/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABCardActionGroupItem, ABContactAction, NSDictionary;

@interface ABContactActionCell : ABContactCell  {
    NSDictionary *_textAttributes;
}

@property(readonly) ABCardActionGroupItem * actionGroupItem;
@property(readonly) ABContactAction * action;
@property(copy) NSDictionary * textAttributes;


- (BOOL)shouldPerformDefaultAction;
- (id)actionGroupItem;
- (void)setCardGroupItem:(id)arg1;
- (void)_updateTextFont;
- (void)setTextAttributes:(id)arg1;
- (id)textAttributes;
- (id)action;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end