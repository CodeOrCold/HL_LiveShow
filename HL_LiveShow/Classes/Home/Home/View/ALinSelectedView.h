//
//  ALinSelectedView.h
//  HLLive
//
//  Created by 杨海龙 on 2017/5/3.
//  Copyright © 2017年 杨海龙 趣高科技. All rights reserved.
//

#import <UIKit/UIKit.h>



typedef NS_ENUM(NSUInteger, HomeType) {
    HomeTypeHot, // 热门
    HomeTypeNew, // 最新
    HomeTypeCare // 关注
};

@interface ALinSelectedView : UIView
/** 选中了 */
@property(nonatomic, copy)void (^selectedBlock)(HomeType type);
/** 下划线 */
@property (nonatomic, weak, readonly)UIView *underLine;
/** 设置滑动选中的按钮 */
@property(nonatomic, assign) HomeType selectedType;
@end
