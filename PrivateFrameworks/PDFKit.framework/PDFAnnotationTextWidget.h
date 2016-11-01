/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
 */

@interface PDFAnnotationTextWidget : PDFAnnotation <NSCopying> {
    PDFAnnotationTextWidgetPrivateVars * _private2;
}

- (void).cxx_destruct;
- (bool)accessibilityIsIgnored;
- (void)addMaxLenToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (long long)alignment;
- (id)attributedStringValue;
- (id)backgroundColor;
- (struct __CFDictionary { }*)commonCreateDictionaryRef;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultStringValue;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext { }*)arg2;
- (id)fieldName;
- (id)font;
- (id)fontColor;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1 forPage:(id)arg2;
- (bool)isMultiline;
- (bool)isReadOnly;
- (unsigned long long)maximumLength;
- (int)rotation;
- (void)secondaryInit;
- (void)setAlignment:(long long)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDefaultStringValue:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontColor:(id)arg1;
- (void)setIsMultiline:(bool)arg1;
- (void)setIsReadOnly:(bool)arg1;
- (void)setMaximumLength:(unsigned long long)arg1;
- (void)setRotation:(int)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end