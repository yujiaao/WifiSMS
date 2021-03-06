/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class CalDAVCacheManager, MobileCalDAVAccount, MobileCalDAVCalendar;



@interface CalDAVCollectionRefreshOperation : AYOperation 
{
    MobileCalDAVAccount *_account;
    MobileCalDAVCalendar *_calendar;
    CalDAVCacheManager *_cache;
    id _delegate;
    BOOL _force;
}

+ (id)propertiesForCollection;
+ (id)propertiesForResources;

- (id)initWithAccount:(id)arg1 calendar:(id)arg2 delegate:(id)arg3 force:(BOOL)arg4;
- (void)refresh;
- (BOOL)validate:(id)arg1 error:(id*)arg2;
- (id)account;
- (id)path;
- (BOOL)useMultiGet;
- (id)cache;
- (void)dealloc;
- (id)properties:(id*)arg1;
- (id)listing:(id*)arg1;
- (id)reconcile:(id)arg1;
- (BOOL)download:(id)arg1 error:(id*)arg2;
- (BOOL)_multiget:(id)arg1 error:(id*)arg2;
- (BOOL)_gets:(id)arg1 error:(id*)arg2;
- (BOOL)isDBOpen;
- (struct CalDatabase { }*)openDB;
- (void)closeDBAndSave:(BOOL)arg1;
- (void)_delegateDeleteResourcesWithFilenames:(id)arg1;
- (void)_delegateDidAbortRefresh;
- (void)_delegateDidCompleteRefresh;
- (void)_delegateProcessError:(id)arg1;
- (void)_delegateProcessProperties:(id)arg1;
- (void)_delegateProcessResources:(id)arg1;
- (BOOL)_delegateShouldContinueProcessingResources;
- (BOOL)_delegateShouldAcceptEntryModification:(id)arg1 isDeleted:(BOOL)arg2;

@end
