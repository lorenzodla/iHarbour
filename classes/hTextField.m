//
//  hTextField.m
//  iharbour
//
//  Created by Lorenzo on 01/08/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "iharbour.h"

HB_FUNC( CREATETEXTFIELD )
{
    UIView * view = GetMainView();
    UITextField * textField = [[UITextField alloc]init];
    
    textField.frame = CGRectMake( (hb_parnl(1)),
                             (hb_parnl(2)),
                             (hb_parnl(3)),
                             (hb_parnl(4)) );
    
    textField.backgroundColor = UIColor.whiteColor;

    textField.placeholder = hb_NSSTRING_par(5);
    textField.layer.cornerRadius = 5;
    
    [view addSubview:textField];
    
    hb_retnll( ( HB_LONGLONG ) textField );
}

HB_FUNC( TEXTFIELD_GETTEXT )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UITextField * hNSObj = (__bridge  UITextField * ) hObj;
    
    hb_retc([hNSObj.text UTF8String]);
}
