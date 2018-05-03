//
//  NSArray+BRAdd.h
//  MyBaseProject
//
//  Created by 任波 on 2017/4/27.
//  Copyright © 2017年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (BRAdd)

/** 数组/字典 转 json字符串 */
- (NSString *)toJsonString;

/** 数组/字典 转 JSON字符串(使用第三方框架SBJson) */
- (NSString *)SB_toJsonString;

@end
