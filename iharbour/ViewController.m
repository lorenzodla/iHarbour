//
//  ViewController.m
//  iharbour
//
//  Created by anto on 23/07/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "ViewController.h"
#include <hbvm.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)viewDidAppear:(BOOL)animated {
    hb_vmInit( TRUE );
    hb_vmQuit();
    exit( 0 );
}

@end
