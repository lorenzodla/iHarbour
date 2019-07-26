//
//  iharbour.m
//  iharbour
//
//  Created by anto on 26/07/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import <UIKit/UIApplication.h>
#import <UIKit/UIButton.h>
#import <UIKit/UIWindow.h>

#import "AppDelegate.h"
#import "ViewController.h"

#include <hbapi.h>
#include <hbvm.h>

NSString * hb_NSSTRING_par( int iParam ) // NSUTF8StringEncoding
{
    return [ [ NSString alloc ] initWithCString: HB_ISCHAR( iParam ) ? hb_parc( iParam ) : "" encoding:  NSWindowsCP1252StringEncoding ];
}

HB_FUNC( NSLOG )
{
    NSLog( @"%@", hb_NSSTRING_par( 1 ) );
}

HB_FUNC( SYSREFRESH )
{
    [[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.1]];
}

HB_FUNC( EXIT )
{
    exit( hb_parl( 1 ) );
}

static PHB_SYMB symFPH = NULL;

@interface button : UIButton
   -(IBAction)click:(id)sender;
@end

@implementation button
-(IBAction)click:(id)sender
{
    if( symFPH == NULL )
       symFPH = hb_dynsymSymbol( hb_dynsymFindName( "HANDLEEVENT" ) );
    
    hb_vmPushSymbol( symFPH );
    hb_vmPushNil();
    hb_vmPushSize( ( HB_LONGLONG ) sender );
    hb_vmPushLong( 1 ); // msg id
    hb_vmDo( 2 );
}
@end

ViewController * GetMainViewController()
{
    AppDelegate * appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    ViewController * vc = ( ViewController * ) appDelegate.window.rootViewController;
    return vc;
}

UIView * GetMainView()
{
    AppDelegate * appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    ViewController * vc = ( ViewController * ) appDelegate.window.rootViewController;
    
    return vc.view;
}

HB_FUNC( CREATEBUTTON )
{
    UIView * view = GetMainView();
    button * btn = [ [ button alloc ] init ];
    
    [ btn setFrame:CGRectMake( (hb_parnl(2)),
                                 (hb_parnl(3)),
                                 (hb_parnl(4)),
                                 (hb_parnl(5)) ) ];
    
    
    [ btn setTitle:hb_NSSTRING_par( 1 ) forState:UIControlStateNormal ];
    [ btn setTitleColor:UIColor.blackColor forState:UIControlStateNormal];
    [ btn setTitleColor:UIColor.whiteColor forState:UIControlStateHighlighted ];
    [ btn setBackgroundColor:UIColor.greenColor ];

    [ btn addTarget:btn action:@selector(click:) forControlEvents:UIControlEventTouchUpInside];
    [ view addSubview : btn ];
    
    hb_retnll( ( HB_LONGLONG ) btn );
}

HB_FUNC( SETBKCOLOR )
{
    UIView * view = GetMainView();
    view.backgroundColor = [UIColor colorWithRed:(hb_parnd(1)/255) green:(hb_parnd(2)/255) blue:(hb_parnd(3)/255) alpha:(hb_parnd(4)/100)];
}

HB_FUNC( MSGINFO )
{
    ViewController * vc = GetMainViewController();
    
    NSString * cTitle = hb_pcount() > 1 ? hb_NSSTRING_par(2) : @"Information";
    
    __block BOOL bIsVisible = TRUE;
    UIAlertController * alert = [ UIAlertController alertControllerWithTitle:cTitle
                                                                     message:hb_NSSTRING_par(1)
                                                              preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction * defaultAction = [ UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                            handler:^( UIAlertAction * action ) { bIsVisible = FALSE;} ];
    [ alert addAction:defaultAction ];
    
    [ vc presentViewController:alert animated:YES completion:nil ];
    
    while( bIsVisible )
        [ [ NSRunLoop currentRunLoop ] runUntilDate:[ NSDate dateWithTimeIntervalSinceNow:0.1 ] ];
}

HB_FUNC( MSGYESNO )
{
    ViewController * vc = GetMainViewController();
    
    NSString * cTitle = hb_pcount() > 1 ? hb_NSSTRING_par(2) : @"Information";
    
    __block BOOL bIsVisible = TRUE;
    __block BOOL bIsYes = FALSE;
    UIAlertController * alert = [ UIAlertController alertControllerWithTitle:cTitle
                                                                     message:hb_NSSTRING_par(1)
                                                              preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction * btnYes = [ UIAlertAction actionWithTitle:@"Yes" style:UIAlertActionStyleDefault
                                                     handler:^( UIAlertAction * action ) { bIsVisible = FALSE; bIsYes = TRUE;} ];
    UIAlertAction * btnNo = [ UIAlertAction actionWithTitle:@"No" style:UIAlertActionStyleDefault
                                                    handler:^( UIAlertAction * action ) { bIsVisible = FALSE;} ];
    
    [ alert addAction:btnYes ];
    [ alert addAction:btnNo ];
    
    [ vc presentViewController:alert animated:YES completion:nil ];
    
    while( bIsVisible )
        [[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.1]];
    
    hb_retl( bIsYes );
}
