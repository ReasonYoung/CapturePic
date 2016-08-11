//
//  WYImageCropperViewController.h
//  CapturePic
//
//  Created by RWY on 16/1/29.
//  Copyright © 2016年 rwy. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WYImageCropperViewController;

@protocol WYImageCropperDelegate <NSObject>

- (void)imageCropper:(WYImageCropperViewController *)cropperViewController didFinished:(UIImage *)editedImage;
- (void)imageCropperDidCancel:(WYImageCropperViewController *)cropperViewCrotroller;

@end

@interface WYImageCropperViewController : UIViewController

@property (nonatomic,assign) NSInteger tag;
@property (nonatomic,assign) id<WYImageCropperDelegate>delegate;
@property (nonatomic,assign) CGRect cropFrame;

- (id)initWithImage:(UIImage *)originalImage cropFrame:(CGRect)cropFrame limitScaleRatio:(NSInteger)limitRatio;

@end
