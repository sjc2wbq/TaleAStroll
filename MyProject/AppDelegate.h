//
//  AppDelegate.h
//  MyProject
//
//  Created by 时俊川 on 16/2/23.
//  Copyright © 2016年 sunhao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,getter=isOnLine) BOOL OnLine;

@end

