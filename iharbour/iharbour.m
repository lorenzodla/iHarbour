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
    // hb_vmPush( ( __bridge void * ) sender );
    hb_vmPushLong( 1 ); // msg id
    hb_vmDo( 1 );
}
@end

HB_FUNC( CREATEBUTTON )
{
    AppDelegate * appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    ViewController * vc = ( ViewController * ) appDelegate.window.rootViewController;
    UIView * view = vc.view;
    button * btn = [ [ button alloc ] init ];
    
    [ btn setFrame:CGRectMake( (hb_parnl(2)),
                                 (hb_parnl(3)),
                                 (hb_parnl(4)),
                                 (hb_parnl(5)) ) ];
    
    
    [ btn setTitle:hb_NSSTRING_par( 1 ) forState:UIControlStateNormal ];
    [ btn setTitleColor:UIColor.blackColor forState:UIControlStateNormal];
    [ btn setTitleColor:UIColor.whiteColor forState:UIControlStateHighlighted ];
    [ btn setBackgroundColor:UIColor.redColor ];

    [ btn addTarget:btn action:@selector(click:) forControlEvents:UIControlEventTouchUpInside];
    [ view addSubview : btn ];
}
