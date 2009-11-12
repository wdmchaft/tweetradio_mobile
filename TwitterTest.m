//
//  TwitterTest.m
//  tweetradio_mobile
//
//  Created by will bailey on 11/11/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "TwitterTest.h"


@implementation TwitterTest

- (void) testInitWithUserNameAndPassword {
	Twitter *twitter = [[Twitter alloc] initWithUsername:@"johndoe" andPassword:@"123456"];
	STAssertEqualObjects(twitter.username, @"johndoe", @"expected %@ but got %@", twitter.username, @"johndoe");
	STAssertEqualObjects(twitter.password, @"123456", @"expected %@ but got %@", twitter.username, @"123456");
	[twitter release];
}


@end
