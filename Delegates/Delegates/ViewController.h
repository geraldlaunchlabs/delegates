//
//  ViewController.h
//  Delegates
//
//  Created by LLDM on 26/07/2016.
//  Copyright © 2016 LLDM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SampleProtocol.h"

@interface ViewController : UIViewController<SampleProtocolDelegate>{
    IBOutlet UILabel *myLabel;
}

@end

