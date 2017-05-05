//
//  NSSafeObject.h
//  HLLive
//
//  Created by 杨海龙 on 2017/5/3.
//  Copyright © 2017年 杨海龙 趣高科技. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ALinLive;
@interface ALinCatEarView : UIView
/** 主播/主播 */
@property(nonatomic, strong) ALinLive *live;
+ (instancetype)catEarView;
@end
