/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableArray;



@interface ASMoveItemsTask : ASTask 
{
    NSMutableArray *_moveItems;
}


- (void)dealloc;
- (NSInteger)commandCode;
- (void)addSourceID:(id)arg1 sourceFolder:(id)arg2 destinatonFolder:(id)arg3;
- (BOOL)processContext:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)requestBody;
- (NSInteger)taskStatusForExchangeStatus:(NSInteger)arg1;

@end
