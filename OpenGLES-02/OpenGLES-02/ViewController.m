//
//  ViewController.m
//  OpenGLES-02
//
//  Created by sjhz on 2017/11/28.
//  Copyright © 2017年 yjs. All rights reserved.
//

#import "ViewController.h"
#import "OpenGLView.h"
@interface ViewController ()
@property (nonatomic, strong) OpenGLView *glView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view addSubview:self.glView];
    // Do any additional setup after loading the view, typically from a nib.
}

- (OpenGLView *)glView{
    
    if (!_glView) {
        _glView = [[OpenGLView alloc] initWithFrame:self.view.bounds];
    }
    return _glView;
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
