/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKResourceChange : EKObject <EKIdentityProtocol>

@property (nonatomic, readonly) bool alerted;
@property (nonatomic, readonly, retain) EKCalendar *calendar;
@property (nonatomic, readonly, retain) EKCalendarItem *calendarItem;
@property (nonatomic, readonly) unsigned int changeType;
@property (nonatomic, readonly, copy) NSURL *changedByAddress;
@property (nonatomic, readonly, copy) NSString *changedByDisplayName;
@property (nonatomic, readonly, copy) NSString *changedByFirstName;
@property (nonatomic, readonly, copy) NSString *changedByLastName;
@property (nonatomic, readonly) NSNumber *createCount;
@property (nonatomic, readonly) bool dateChanged;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *deleteCount;
@property (nonatomic, readonly) NSString *deletedTitle;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool locationChanged;
@property (nonatomic, readonly) unsigned int publicStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool timeChanged;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) bool titleChanged;
@property (nonatomic, readonly) NSNumber *updateCount;

- (id)_calendarItemRelation;
- (id)_persistentResourceChange;
- (bool)alerted;
- (id)calendar;
- (id)calendarItem;
- (unsigned int)changeType;
- (id)changedByAddress;
- (id)changedByDisplayName;
- (id)changedByFirstName;
- (id)changedByLastName;
- (void)clearAlertedStatus;
- (id)createCount;
- (bool)dateChanged;
- (id)deleteCount;
- (id)deletedTitle;
- (id)emailAddress;
- (id)firstName;
- (id)lastName;
- (id)lazyLoadRelationForKey:(id)arg1;
- (bool)locationChanged;
- (id)name;
- (unsigned int)publicStatus;
- (bool)timeChanged;
- (id)timestamp;
- (bool)titleChanged;
- (id)updateCount;

@end
