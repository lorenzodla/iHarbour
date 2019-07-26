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
    NSString * cTitle = hb_pcount() > 1 ? hb_NSSTRING_par(2) : @"Information";
    
    [ pApp MsgInfo:hb_NSSTRING_par( 1 ) withTitle:cTitle];
}

HB_FUNC( MSGYESNO )
{
    NSString * cTitle = hb_pcount() > 1 ? hb_NSSTRING_par(2) : @"Information";
    
    hb_retl( [ pApp MsgYesNo:hb_NSSTRING_par( 1 ) withTitle:cTitle] );
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

- ( void ) MsgInfo:( NSString * )cMsg withTitle:(NSString *)cTitle
{
    __block BOOL bIsVisible = TRUE;
    UIAlertController * alert = [ UIAlertController alertControllerWithTitle:cTitle
                                                                    message:cMsg
                                                             preferredStyle:UIAlertControllerStyleAlert];
    
   UIAlertAction * defaultAction = [ UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                           handler:^( UIAlertAction * action ) { bIsVisible = FALSE;} ];
   [ alert addAction:defaultAction ];
    
   [ self presentViewController:alert animated:YES completion:nil ];
    
   while( bIsVisible )
      [ [ NSRunLoop currentRunLoop ] runUntilDate:[ NSDate dateWithTimeIntervalSinceNow:0.1 ] ];
}

- ( BOOL ) MsgYesNo:( NSString * )cMsg withTitle:(NSString *)cTitle
{
    __block BOOL bIsVisible = TRUE;
    __block BOOL bIsYes = FALSE;
    UIAlertController * alert = [ UIAlertController alertControllerWithTitle:cTitle
                                                                     message:cMsg
                                                              preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction * btnYes = [ UIAlertAction actionWithTitle:@"Yes" style:UIAlertActionStyleDefault
                                           handler:^( UIAlertAction * action ) { bIsVisible = FALSE; bIsYes = TRUE;} ];
    UIAlertAction * btnNo = [ UIAlertAction actionWithTitle:@"No" style:UIAlertActionStyleDefault
                                           handler:^( UIAlertAction * action ) { bIsVisible = FALSE;} ];

    [ alert addAction:btnYes ];
    [ alert addAction:btnNo ];

    [ self presentViewController:alert animated:YES completion:nil ];
    
    while( bIsVisible )
       [[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.1]];
    
    return bIsYes;
}

@end
