//
//  UsersHomeViewController.h
//  UsersAndGroups
//
//  Created by Steve Traut on 1/4/14.
//  Copyright (c) 2014 Apigee. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol UsersHomeViewDelegate <NSObject>

@end

@class UsersHomeViewController;

@interface UsersHomeViewController : UIViewController<UsersHomeViewDelegate>

@property (nonatomic, retain) IBOutlet UITextField *userName;
@property (nonatomic, weak) id<UsersHomeViewDelegate> delegate;

@end
