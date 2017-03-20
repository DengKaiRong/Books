//
//  WNXSubjectView.h
//  Hardest
//
//  Created by 维尼的小熊 on 16/4/28.
//  Copyright © 2016年 维尼的小熊. All rights reserved.

//  GitHub地址:     https://github.com/ZhongTaoTian
//  Blog讲解地址:    http://www.jianshu.com/users/5fe7513c7a57/latest_articles
//  小熊的新浪微博:   http://weibo.com/5622363113/profile?topnav=1&wvr=6

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, WNXSubjectGuessType) {
    WNXSubjectGuessTypeLeft = 0,
    WNXSubjectGuessTypeMiddle,
    WNXSubjectGuessTypeRight
};

@interface WNXSubjectView : UIView

@property (nonatomic, assign) BOOL isPlayAgain;

- (void)showHandViewWithAnimationFinish:(void (^) (void))finish;

- (void)showSubjectViewNums:(void (^)(int index1, int index2, int index3, int result))nums;

- (void)showNextSubjectViewNums:(void (^)(int index1, int index2, int index3, int result))nums;

- (void)showResultWithResult:(int)result finish:(void (^) (void))finish;

- (void)cleanData;

@end
