//
//  MusicToolView.h
//  MyMusic
//
//  Created by 孔令文 on 2017/3/22.
//  Copyright © 2017年 孔令文. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PresentViewControllerDelegate.h"

@interface MusicToolView : UIView

@property (nonatomic, weak) id<PresentViewControllerDelegate> delegate;

+(instancetype)makeItem;

-(void)updateProgressTime;
-(void)updateVolumeSlider:(float)volume;

@end
