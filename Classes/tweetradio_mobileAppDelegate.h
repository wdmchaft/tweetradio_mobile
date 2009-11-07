//
//  tweetradio_mobileAppDelegate.h
//  tweetradio_mobile
//
//  Created by will bailey on 11/7/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

@interface tweetradio_mobileAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

