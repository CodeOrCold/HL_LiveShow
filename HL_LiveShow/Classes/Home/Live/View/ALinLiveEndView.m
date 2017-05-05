//
//  NSSafeObject.h
//  HLLive
//
//  Created by 杨海龙 on 2017/5/3.
//  Copyright © 2017年 杨海龙 趣高科技. All rights reserved.
//

#import "ALinLiveEndView.h"

@interface ALinLiveEndView()
@property (weak, nonatomic) IBOutlet UIButton *quitBtn;
@property (weak, nonatomic) IBOutlet UIButton *lookOtherBtn;
@property (weak, nonatomic) IBOutlet UIButton *careBtn;

@end
@implementation ALinLiveEndView
- (void)awakeFromNib
{
    [super awakeFromNib];
    [self maskRadius:self.quitBtn];
    [self maskRadius:self.lookOtherBtn];
    [self maskRadius:self.careBtn];
}

+ (instancetype)liveEndView
{
    return [[NSBundle mainBundle] loadNibNamed:NSStringFromClass(self) owner:nil options:nil].lastObject;
}

- (void)maskRadius:(UIButton *)btn
{
    btn.layer.cornerRadius = btn.height * 0.5;
    btn.layer.masksToBounds = YES;
    if (btn != self.careBtn) {
        btn.layer.borderWidth = 1;
        btn.layer.borderColor = KeyColor.CGColor;
    }
}
- (IBAction)care:(UIButton *)sender {
    [sender setTitle:@"关注成功" forState:UIControlStateNormal];
}
- (IBAction)lookOther {
    [self removeFromSuperview];
    if (self.lookOtherBlock) {
        self.lookOtherBlock();
    }
}
- (IBAction)quit {
    if (self.quitBlock) {
        self.quitBlock();
    }
}

@end
