//
//  JKHTTPSessionManagerRequestSerializer.h
//  YoCar
//
//  Created by Futao on 15/9/29.
//  Copyright © 2015年 YoCar. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "JKHTTPSessionManager.h"

/**
 *  API格式定义
 */
@interface JKHTTPSessionManagerRequestSerializer : NSObject <JKHTTPSessionManagerRequestSerialization, NSObject, NSSecureCoding, NSCopying>
/**
 *  是否加密数据后传输 (RSA)
 */
@property (nonatomic, assign) BOOL encryptEnabled;

@end
