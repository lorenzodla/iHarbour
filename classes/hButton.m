//
//  hButton.m
//  iharbour
//
//  Created by Lorenzo on 01/08/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "iharbour.h"

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

HB_FUNC( BUTTON_SETTITLE )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UIButton * hNSObj = (__bridge  UIButton * ) hObj;
    
    [ hNSObj setTitle:hb_NSSTRING_par( 2 ) forState:UIControlStateNormal ];
}

HB_FUNC( BUTTON_SETBACKGROUNDCOLOR )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UIButton * hNSObj = (__bridge  UIButton * ) hObj;
    
    [ hNSObj setBackgroundColor:[UIColor colorWithRed:(hb_parnd(2)/255) green:(hb_parnd(3)/255) blue:(hb_parnd(4)/255) alpha:(hb_parnd(5)/100)] ];
}

HB_FUNC( BUTTON_SETCORNERS )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UIButton * hNSObj = (__bridge  UIButton * ) hObj;
    
    hNSObj.layer.cornerRadius = hb_parnl(2);
}
