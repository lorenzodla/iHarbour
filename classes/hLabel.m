//
//  hLabel.m
//  iharbour
//
//  Created by Lorenzo on 01/08/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "iharbour.h"

HB_FUNC( CREATELABEL ){
    UIView * view = GetMainView();
    UILabel * label = [[UILabel alloc]init];
    
    label.frame = CGRectMake( (hb_parnl(2)),
                             (hb_parnl(3)),
                             (hb_parnl(4)),
                             (hb_parnl(5)) );
    
    label.text = hb_NSSTRING_par(1);
    
    [view addSubview:label];
    
    hb_retnll( ( HB_LONGLONG ) label );
}

HB_FUNC( LABEL_SETTEXT )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UILabel * hNSObj = (__bridge  UILabel * ) hObj;
    
    hNSObj.text = hb_NSSTRING_par( 2 );
}

HB_FUNC( LABEL_SETCOLOR )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UILabel * hNSObj = (__bridge  UILabel * ) hObj;
    
    hNSObj.textColor = [UIColor colorWithRed:(hb_parnd(2)/255) green:(hb_parnd(3)/255) blue:(hb_parnd(4)/255) alpha:(hb_parnd(5)/100)];
}

HB_FUNC( LABEL_ALIGNMENT )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UILabel * hNSObj = (__bridge  UILabel * ) hObj;
    
    switch (hb_parnl(2)) {
        case 1:
            hNSObj.textAlignment = NSTextAlignmentLeft;
            break;
        case 2:
            hNSObj.textAlignment = NSTextAlignmentCenter;
            break;
        case 3:
            hNSObj.textAlignment = NSTextAlignmentRight;
            break;
        case 4:
            hNSObj.textAlignment = NSTextAlignmentJustified;
            break;
        default:
            hNSObj.textAlignment = NSTextAlignmentLeft;
            break;
    }
}
