//
//  ViewController.h
//  iharbour
//
//  Created by anto on 23/07/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- ( void ) MsgInfo:( NSString * ) cMsg withTitle:( NSString * ) cTitle;

- ( BOOL ) MsgYesNo:( NSString * ) cMsg withTitle:( NSString * ) cTitle;

@end

