//
//  ViewController.m
//  iharbour
//
//  Created by anto on 23/07/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "ViewController.h"
#include <hbvm.h>

ViewController * pApp = NULL;

NSString * hb_NSSTRING_par( int iParam ) // NSUTF8StringEncoding
{
    return [ [ NSString alloc ] initWithCString: HB_ISCHAR( iParam ) ? hb_parc( iParam ) : "" encoding:  NSWindowsCP1252StringEncoding ];
}

HB_FUNC( MSGINFO )
{
   [ pApp showAlert:hb_NSSTRING_par( 1 ) ];
}

HB_FUNC( SYSREFRESH )
{
    [[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:1.0]];
}

HB_FUNC( NSLOG )
{
    NSLog( @"%@", hb_NSSTRING_par( 1 ) );
}

@interface ViewController ()

@end

@implementation ViewController

NSString* variable;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

-(void)viewDidAppear:(BOOL)animated {
    
    pApp = self;
    hb_vmInit( TRUE );
}

- ( void ) showAlert:( NSString * ) cMsg
{
    __block BOOL bIsVisible = TRUE;
    UIAlertController * alert = [ UIAlertController alertControllerWithTitle:cMsg
                                                                    message:@"This is an alert."
                                                             preferredStyle:UIAlertControllerStyleAlert];
    
   UIAlertAction * defaultAction = [ UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                           handler:^( UIAlertAction * action ) { bIsVisible = FALSE;} ];
   [ alert addAction:defaultAction ];
    
   [ self presentViewController:alert animated:YES completion:nil ];
    
   while( bIsVisible )
       [[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.1]];
}

@end
