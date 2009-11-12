//
//  RootViewController.h
//  tweetradio_mobile
//
//  Created by will bailey on 11/10/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//
#import "Twitter.h"

@interface RootViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
	NSFetchedResultsController *fetchedResultsController;
	NSManagedObjectContext *managedObjectContext;
	Twitter *twitter;
}

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain) Twitter *twitter;

- (void) didReceiveStatuses:(NSArray *) statuses;

@end
