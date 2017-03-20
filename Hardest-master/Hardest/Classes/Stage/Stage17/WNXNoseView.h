//
//  WNXNoseView.h
//  Hardest
//
//  Created by 维尼的小熊 on 16/5/16.
//  Copyright © 2016年 维尼的小熊. All rights reserved.

//  GitHub地址:     https://github.com/ZhongTaoTian
//  Blog讲解地址:    http://www.jianshu.com/users/5fe7513c7a57/latest_articles
//  小熊的新浪微博:   http://weibo.com/5622363113/profile?topnav=1&wvr=6

#import <UIKit/UIKit.h>

@interface WNXNoseView : UIView

@property (nonatomic, copy) void(^passStageBlock)();

- (void)showPullAnimationWithIsPullOut:(BOOL)pullOut score:(int)score finish:(void(^)())finish;

- (void)pause;
- (void)resume;

- (void)resumeData;

@end
