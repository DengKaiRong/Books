//
//  WNXStage07View.h
//  Hardest
//
//  Created by 维尼的小熊 on 16/4/9.
//  Copyright © 2016年 维尼的小熊. All rights reserved.

//  GitHub地址:     https://github.com/ZhongTaoTian
//  Blog讲解地址:    http://www.jianshu.com/users/5fe7513c7a57/latest_articles
//  小熊的新浪微博:   http://weibo.com/5622363113/profile?topnav=1&wvr=6

#import <UIKit/UIKit.h>

@interface WNXStage07View : UIView

@property (nonatomic, copy) void(^sucessBlock)(int glassCount, BOOL isPass);
@property (nonatomic, copy) void(^failBlock)();
@property (nonatomic, copy) void (^stopTimeBlock)();


- (void)start;

- (void)hitGlass;

- (void)cleadData;

@end
