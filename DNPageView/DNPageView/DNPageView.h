//
//  DNPageView.h
//  DNAppDemo
//
//  Created by mainone on 16/4/19.
//  Copyright © 2016年 wjn. All rights reserved.
//  https://github.com/626600815/DNPageView

#import <UIKit/UIKit.h>

typedef void(^DNPageDismiss)(void);

@interface DNPageView : UIView

+ (DNPageView *)sharePageView;

@property (nonatomic, assign) NSInteger pageNum; //设置引导图个数(设置个数之前一定要看好到底有没有这么多图片)
@property (nonatomic, assign) BOOL isPageControl;//是否要pageControl 默认YES

/**
 *  初始化添加引导页到view上
 *
 *  @param view    显示视图一般添加在window上
 *  @param dismiss 引导页消失后的回调
 */
- (void)initPageViewToView:(UIView *)view dismiss:(DNPageDismiss)dismiss;

@end
