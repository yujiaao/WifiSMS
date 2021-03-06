/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class <DataConsumer>, NSMutableData, <MessageDataConsumerFactory>;



@interface DAMessageContentConsumer : NSObject <DAMFStreamingContentConsumer>
{
    NSInteger _requestedFormat;
    <DataConsumer> *_dataConsumer;
    <DataConsumer> *_alternatePartConsumer;
    <MessageDataConsumerFactory> *_consumerFactory;
    BOOL _triedCreatingAlternatePartConsumer;
    BOOL _succeeded;
    NSMutableData *_bodyData;
    double _timeOfLastActivity;
}

@property(readonly) double timeOfLastActivity; /* unknown property attribute: V_timeOfLastActivity */
@property NSInteger requestedFormat; /* unknown property attribute: V_requestedFormat */
@property(retain) <MessageDataConsumerFactory> *consumerFactory; /* unknown property attribute: V_consumerFactory */
@property(retain,readonly) NSMutableData *bodyData; /* unknown property attribute: V_bodyData */
@property(retain) <DataConsumer> *alternatePartConsumer; /* unknown property attribute: V_alternatePartConsumer */
@property(retain) <DataConsumer> *dataConsumer; /* unknown property attribute: V_dataConsumer */


- (BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(NSInteger)arg2;
- (void)consumeData:(char *)arg1 length:(NSInteger)arg2 format:(NSInteger)arg3 mailMessage:(id)arg4;
- (void)didEndStreamingForMailMessage:(id)arg1;
- (id)data;
- (BOOL)succeeded;
- (id)dataConsumerForPart:(id)arg1;
- (void)dealloc;
- (double)timeOfLastActivity;
- (NSInteger)requestedFormat;
- (void)setRequestedFormat:(NSInteger)arg1;
- (id)consumerFactory;
- (void)setConsumerFactory:(id)arg1;
- (id)bodyData;
- (id)alternatePartConsumer;
- (void)setAlternatePartConsumer:(id)arg1;
- (id)dataConsumer;
- (void)setDataConsumer:(id)arg1;

@end
