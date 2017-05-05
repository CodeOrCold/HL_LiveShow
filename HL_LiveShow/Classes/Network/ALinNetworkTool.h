//
//  ALinNetworkTool.h
//  HLLive
//
//  Created by 杨海龙 on 2017/5/3.
//  Copyright © 2017年 杨海龙 趣高科技. All rights reserved.
//

#import "AFNetworking.h"

typedef NS_ENUM(NSUInteger, NetworkStates) {
    NetworkStatesNone, // 没有网络
    NetworkStates2G, // 2G
    NetworkStates3G, // 3G
    NetworkStates4G, // 4G
    NetworkStatesWIFI // WIFI
};

@interface ALinNetworkTool : AFHTTPSessionManager

+ (instancetype)shareTool;

// 判断网络类型
+ (NetworkStates)getNetworkStates;

@end
