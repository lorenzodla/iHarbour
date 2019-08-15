//
//  hSwitch.m
//  iharbour
//
//  Created by Lorenzo on 07/08/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "iharbour.h"

@interface switche : UISwitch
-(IBAction)click:(id)sender;
@end

@implementation switche
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

HB_FUNC( CREATESWITCH )
{
    UIView * view = GetMainView();
    UISwitch * sSwitch = [[UISwitch alloc] init];
    
    sSwitch.frame = CGRectMake( (hb_parnl(1)),
                               (hb_parnl(2)),
                               100,
                               100 );
    
    [sSwitch setOn:false];
    [sSwitch addTarget:sSwitch action:@selector(click:) forControlEvents:UIControlEventValueChanged];
    
    [view addSubview:sSwitch];
}

HB_FUNC( SWITCH_ISON )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UISwitch * hNSObj = (__bridge  UISwitch * ) hObj;
    
    hb_retl(hNSObj.isOn);
}
