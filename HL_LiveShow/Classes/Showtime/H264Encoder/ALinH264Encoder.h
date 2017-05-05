//
//  ALinH264Encoder.h
//  HLLive
//
//  Created by 杨海龙 on 2017/5/3.
//  Copyright © 2017年 杨海龙 趣高科技. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <VideoToolbox/VideoToolbox.h>

@interface ALinH264Encoder : NSObject

// 初始化基本配置
- (void) initWithConfiguration;
- (void) initEncode:(int)width  height:(int)height;
- (void) encode:(CMSampleBufferRef)sampleBuffer;

//@property (weak, nonatomic) id<ALinH264EncoderDelegate> delegate;

@end
