//
//  WRHelper.h
//  CoolMarket
//
//  Created by ruixingchen on 4/16/19.
//  Copyright © 2019 CoolApk. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WRHelper : NSObject

+ (BOOL)isRoundCornerScreen;
+ (UIEdgeInsets)mainWindowSafeAreaInsets;

+ (CGFloat)defaultStatusBarHeight;
+ (CGFloat)statusBarHeight;

///真实的内容高度
+ (CGFloat) defaultNavBarHeight;
+ (CGFloat)defaultNavBarBottom;

///真实的内容高度
+ (CGFloat)defaultTabBarHeight;
+ (CGFloat)defaultTabBarTop;

+ (CGFloat)screenWidth;
+ (CGFloat)screenHeight;

@end

NS_ASSUME_NONNULL_END
