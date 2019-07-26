//
//  ViewController.m
//  iharbour
//
//  Created by anto on 23/07/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "ViewController.h"
#include <hbvm.h>

BOOL statusBarLight = false;

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- ( void ) viewDidAppear:( BOOL ) animated
{
    hb_vmInit( TRUE );
    hb_vmQuit();
    exit( 0 );
}

- ( void )setStatusBarStyle:(int)light
{
    if(light==1){
        statusBarLight = true;
    }else{
        statusBarLight = false;
    }
    [self setNeedsStatusBarAppearanceUpdate];
}


- (UIStatusBarStyle) preferredStatusBarStyle {
    if(statusBarLight){
        return UIStatusBarStyleLightContent;
    }else{
        return UIStatusBarStyleDefault;
    }
}

@end
