//
//  AppDelegate.h
//  NetWorkReachable
//
//  Created by WeeTom on 14-6-12.
//  Copyright (c) 2014年 ___migndao___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Reachability.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) Reachability *reachability;

@property (assign, nonatomic) BOOL reache;

@end
