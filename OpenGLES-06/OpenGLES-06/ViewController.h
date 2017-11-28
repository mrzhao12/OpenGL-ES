//
//  ViewController.h
//  OpenGLES-06
//
//  Created by sjhz on 2017/11/28.
//  Copyright © 2017年 yjs. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OpenGLView.h"
@interface ViewController : UIViewController

{
    OpenGLView * _openGLView;
}


@property (nonatomic, strong) IBOutlet OpenGLView * openGLView;

- (IBAction)segmentSelectionChanged:(id)sender;
@end

