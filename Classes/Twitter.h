//
//  Twitter.h
//  tweetradio_mobile
//
//  Created by will bailey on 11/10/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MGTwitterEngine.h"

@interface Twitter : NSObject <MGTwitterEngineDelegate> {
	NSString *username;
	NSString *password;
	MGTwitterEngine *twitterEngine;
	NSManagedObjectContext *managedObjectContext;
	id *delegate;
}

@property (nonatomic,retain) NSString *username;
@property (nonatomic,retain) NSString *password;

- (id) initWithUsername:(NSString *) usernameArg andPassword:(NSString *) passwordArg andDelegate:(id) delegateArg;

- (NSString *) getPublicTimeline;


@end
