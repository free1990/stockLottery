//
//  ViewController.m
//  StockLottery
//
//  Created by John on 2018/7/17.
//  Copyright © 2018年 jiangyu. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@property (nonatomic, strong) UIView *displayView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    UIView *displayView = [[UIView alloc] init];
    displayView.backgroundColor = [UIColor redColor];
    displayView.frame = CGRectMake(0, 0, 100, 100);
    displayView.center = self.view.center;
    [self.view addSubview:displayView];
    
    NSLog(@"version 1.0.1");
    NSLog(@"asdasdasd");
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
