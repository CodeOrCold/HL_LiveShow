//
//  NSSafeObject.h
//  HLLive
//
//  Created by 杨海龙 on 2017/5/3.
//  Copyright © 2017年 杨海龙 趣高科技. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ALinLive;
@class ALinUser;

@interface ALinLiveAnchorView : UIView
+ (instancetype)liveAnchorView;
/** 主播 */
@property(nonatomic, strong) ALinUser *user;
/** 直播 */
@property(nonatomic, strong) ALinLive *live;
/** 点击开关  */
@property(nonatomic, copy)void (^clickDeviceShow)(bool selected);
@end
