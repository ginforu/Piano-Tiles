//
//  AppDelegate.h
//  YFBlackWhiteCube
//
//  Created by Gin on 22/4/01.
//  Copyright © 2021年 YFWCQ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

