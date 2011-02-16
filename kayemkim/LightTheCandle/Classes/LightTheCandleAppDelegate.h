//
//  LightTheCandleAppDelegate.h
//  LightTheCandle
//
//  Created by 경민 김 on 11. 1. 13..
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Candle;

@interface LightTheCandleAppDelegate : NSObject <UIApplicationDelegate> {
	
    UIWindow *window;
	UIImageView *candleImageView;
	UISwitch *onOffSwitch;
	UILabel *candleStateLabel;
	
	NSMutableDictionary *myCandleDict;
	
	UILabel *timerz;
	NSTimer *timergogo;
	
	int timercount;
}

- (IBAction)toggleCandle:(id)sender;

- (void)effect:(NSTimer *)aTimer;
- (IBAction)timerstart:(id)sender;

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIImageView *candleImageView;
@property (nonatomic, retain) IBOutlet UISwitch *onOffSwitch;
@property (nonatomic, retain) IBOutlet UILabel *candleStateLabel;

@property (nonatomic, retain) IBOutlet UILabel *timerz;

@end

