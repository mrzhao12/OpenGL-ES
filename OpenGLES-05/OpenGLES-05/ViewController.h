//
//  ViewController.h
//  OpenGLES-05
//
//  Created by sjhz on 2017/11/28.
//  Copyright © 2017年 yjs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"

@interface ViewController : UIViewController
@property (nonatomic, strong) IBOutlet OpenGLView * openGLView;

- (IBAction) OnShoulderSliderValueChanged:(id)sender;
- (IBAction) OnElbowSliderValueChanged:(id)sender;
- (IBAction) OnRotateButtonClick:(id)sender;

@end

