//
//  YFBWLogic.h
//  YFBlackWhiteCube
//
//  Created by Gin on 22/4/01.
//  Copyright © 2021年 YFWCQ. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YFBWLogic : NSObject

/**
 * 从下往上
 */
+(BOOL)setStateData:(NSMutableArray *)array;

/**
 * 从上往下
 */
+(BOOL)setStateDataNN:(NSMutableArray *)array;

@end
