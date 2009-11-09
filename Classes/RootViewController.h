//
//  RootViewController.h
//  tweetradio_mobile
//
//  Created by will bailey on 11/8/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface RootViewController : UITableViewController {

	NSManagedObjectContext *managedObjectContext;
	UIBarButtonItem *fetchTweetsButton;
	
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) UIBarButtonItem *fetchTweetsButton;

- (void)fetchTweets;

@end
