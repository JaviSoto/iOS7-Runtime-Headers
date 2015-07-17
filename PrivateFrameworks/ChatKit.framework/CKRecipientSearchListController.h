/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRecipientSearchListController : UITableViewController <CKContactsSearchManagerDelegate, IDSBatchIDQueryControllerDelegate> {
    IMAccount *_defaultiMessageAccount;
    <CKRecipientSearchListControllerDelegate> *_delegate;
    NSArray *_enteredRecipients;
    NSDate *_idsQueryStartTime;
    NSArray *_prefilteredRecipients;
    CKContactsSearchManager *_searchManager;
    NSArray *_searchResults;
    BOOL _shouldUsePopovers;
    BOOL _smsEnabled;
    IDSBatchIDQueryController *_statusQueryController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) IMAccount *defaultiMessageAccount;
@property (nonatomic) <CKRecipientSearchListControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *enteredRecipients;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDate *idsQueryStartTime;
@property (nonatomic, retain) NSArray *prefilteredRecipients;
@property (nonatomic, retain) CKContactsSearchManager *searchManager;
@property (nonatomic, copy) NSArray *searchResults;
@property (nonatomic) BOOL shouldUsePopovers;
@property (nonatomic) BOOL smsEnabled;
@property (nonatomic, retain) IDSBatchIDQueryController *statusQueryController;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressGroupSuggestions;

- (BOOL)_serviceColorForRecipients:(id)arg1;
- (id)_statusQueryController;
- (void)cancelSearch;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (void)dealloc;
- (id)defaultiMessageAccount;
- (id)delegate;
- (id)enteredRecipients;
- (BOOL)hasSearchResults;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)idsQueryStartTime;
- (id)initWithStyle:(int)arg1;
- (void)invalidateOutstandingIDStatusRequests;
- (void)invalidateSearchManager;
- (BOOL)isSearchResultsHidden;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)prefilteredRecipients;
- (void)removeRecipientFromSearchResults:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)searchManager;
- (id)searchResults;
- (void)searchWithText:(id)arg1;
- (void)setDefaultiMessageAccount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnteredRecipients:(id)arg1;
- (void)setIdsQueryStartTime:(id)arg1;
- (void)setPrefilteredRecipients:(id)arg1;
- (void)setSearchManager:(id)arg1;
- (void)setSearchResults:(id)arg1;
- (void)setShouldUsePopovers:(BOOL)arg1;
- (void)setSmsEnabled:(BOOL)arg1;
- (void)setStatusQueryController:(id)arg1;
- (void)setSuppressGroupSuggestions:(BOOL)arg1;
- (BOOL)shouldUsePopovers;
- (BOOL)smsEnabled;
- (id)statusQueryController;
- (BOOL)suppressGroupSuggestions;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end