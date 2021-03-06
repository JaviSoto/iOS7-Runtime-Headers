/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCarouselApplicationForegroundEvent : PBCodable <NSCopying> {
    NSString * _bundleID;
    bool  _development;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int reason : 1; 
        unsigned int development : 1; 
    }  _has;
    AWDCarouselPreviousForeground * _previousActivation;
    AWDCarouselPreviousExit * _previousExit;
    NSMutableArray * _prewarms;
    unsigned int  _reason;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) bool development;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasDevelopment;
@property (nonatomic, readonly) bool hasPreviousActivation;
@property (nonatomic, readonly) bool hasPreviousExit;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) AWDCarouselPreviousForeground *previousActivation;
@property (nonatomic, retain) AWDCarouselPreviousExit *previousExit;
@property (nonatomic, retain) NSMutableArray *prewarms;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned long long timestamp;

+ (Class)prewarmsType;

- (void)addPrewarms:(id)arg1;
- (id)bundleID;
- (void)clearPrewarms;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)development;
- (id)dictionaryRepresentation;
- (bool)hasBundleID;
- (bool)hasDevelopment;
- (bool)hasPreviousActivation;
- (bool)hasPreviousExit;
- (bool)hasReason;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)previousActivation;
- (id)previousExit;
- (id)prewarms;
- (id)prewarmsAtIndex:(unsigned long long)arg1;
- (unsigned long long)prewarmsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)reason;
- (void)setBundleID:(id)arg1;
- (void)setDevelopment:(bool)arg1;
- (void)setHasDevelopment:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPreviousActivation:(id)arg1;
- (void)setPreviousExit:(id)arg1;
- (void)setPrewarms:(id)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
