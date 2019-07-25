//
//  main.m
//  iharbour
//
//  Created by anto on 23/07/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

#include <hbvm.h>

int main(int argc, char * argv[]) {
    @autoreleasepool {
        hb_vmInit( TRUE );
        
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
}
