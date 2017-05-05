//
//  NSSafeObject.h
//  HLLive
//
//  Created by 杨海龙 on 2017/5/3.
//  Copyright © 2017年 杨海龙 趣高科技. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ALinLive, ALinUser;
@interface ALinLiveViewCell : UICollectionViewCell
/** 直播 */
@property (nonatomic, strong) ALinLive *live;
/** 相关的直播或者主播 */
@property (nonatomic, strong) ALinLive *relateLive;
/** 父控制器 */
@property (nonatomic, weak) UIViewController *parentVc;
/** 点击关联主播 */
@property (nonatomic, copy) void (^clickRelatedLive)();
@end
