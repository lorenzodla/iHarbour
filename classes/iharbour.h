//
//  iharbour.h
//  iharbour
//
//  Created by Lorenzo on 01/08/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#ifndef iharbour_h
#define iharbour_h

#import "AppDelegate.h"
#import "ViewController.h"
#import <objc/runtime.h>

#include <hbapi.h>
#include <hbvm.h>

static PHB_SYMB symFPH = NULL;

NSString * hb_NSSTRING_par( int iParam );
ViewController * GetMainViewController();
UIView * GetMainView();

#endif /* iharbour_h */
