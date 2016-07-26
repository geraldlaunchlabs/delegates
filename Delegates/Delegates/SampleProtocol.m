//
//  SampleProtocol.m
//  Delegates
//
//  Created by LLDM on 26/07/2016.
//  Copyright © 2016 LLDM. All rights reserved.
//

#import "SampleProtocol.h"

@implementation SampleProtocol

-(void)startSampleProcess{
    [NSTimer scheduledTimerWithTimeInterval:3.0 target:self.delegate selector:@selector(processCompleted) userInfo:nil repeats:NO];
}

@end
