//
//  LatencyUtils.h
//  NetVelocityConsumer
//
//  Created by Prabhat Tomar on 12/31/15.
//  Copyright © 2015 Prabhat Tomar. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SimplePing.h"

@class AppSharedData;

@protocol HttpLatencyDelegates <NSObject>
@required
-(void) latencyDidCompleteWithOptions:(NSDictionary*)array;
-(void) latencyDidFailWithError:(NSError*)error;

@end

@interface LatencyUtils : NSObject<NSURLConnectionDelegate,NSURLConnectionDataDelegate,SimplePingDelegate>
@property id<HttpLatencyDelegates> delegate;
@property BOOL isQuickTest;
-(void) startTestWithURL:(NSString *)url;
-(void) startTestForPacketLoss:(NSString*)url;
-(void) stopTestForPacketLoss;
-(void) stopTest;
-(void) stopLatencyTestForPacketLoss;

@end


