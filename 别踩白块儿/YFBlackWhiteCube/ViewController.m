//
//  ViewController.m
//  YFBlackWhiteCube
//
//  Created by Gin on 22/4/01.
//  Copyright © 2021年 YFWCQ. All rights reserved.
//

#import "ViewController.h"

#import "YFBWGameView.h"

@interface ViewController ()

@end

@implementation ViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    
    // 创建GameView
    // frame 铺满屏幕
    YFBWGameView *gameView = [[YFBWGameView alloc] initWithFrame:self.view.bounds];
    [self.view addSubview:gameView];

    // 开始方法
    [gameView beginGame];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
