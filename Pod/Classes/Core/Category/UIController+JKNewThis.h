//
//  Created by QQ:11386846 on ___DATE___.
//  Copyright ___ORGANIZATIONNAME___ ___YEAR___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol JKControllerNewThisProtocol <NSObject>
@optional
+ (NSString *)bridgeStoryName;
+ (NSString *)bridgeStoryId;
@end
@interface UIViewController (JKNewThis) <JKControllerNewThisProtocol>
+ (instancetype)newThis;
@end
