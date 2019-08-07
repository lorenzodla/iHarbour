//
//  hSwitch.m
//  iharbour
//
//  Created by Lorenzo on 07/08/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "iharbour.h"

HB_FUNC( CREATESWITCH )
{
    UIView * view = GetMainView();
    UISwitch * sSwitch = [[UISwitch alloc] init];
    
    sSwitch.frame = CGRectMake( (hb_parnl(1)),
                               (hb_parnl(2)),
                               100,
                               100 );
    
    [sSwitch setOn:false];
    
    [view addSubview:sSwitch];
}

HB_FUNC( SWITCH_ISON )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UISwitch * hNSObj = (__bridge  UISwitch * ) hObj;
    
    hb_retl(hNSObj.isOn);
}
