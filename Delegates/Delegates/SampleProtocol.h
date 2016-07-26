//
//  SampleProtocol.h
//  Delegates
//
//  Created by LLDM on 26/07/2016.
//  Copyright © 2016 LLDM. All rights reserved.
//

#import <Foundation/Foundation.h>


// Protocal Definition //
@protocol SampleProtocolDelegate <NSObject>
@required
- (void) processCompleted;
@end

@interface SampleProtocol : NSObject {
    id <SampleProtocolDelegate> _delegate;
}

@property (nonatomic,strong) id delegate;
-(void)startSampleProcess; // Instance method

@end
