//
//  hTextView.m
//  iharbour
//
//  Created by Lorenzo on 01/08/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "iharbour.h"

HB_FUNC( CREATETEXTVIEW ){
    UIView * view = GetMainView();
    UITextView * textView = [[UITextView alloc]init];
    
    textView.frame = CGRectMake( (hb_parnl(2)),
                                (hb_parnl(3)),
                                (hb_parnl(4)),
                                (hb_parnl(5)) );
    
    textView.text = hb_NSSTRING_par(1);
    textView.editable = hb_parl(6);
    
    switch (hb_parnl(7)) {
        case 1:
            textView.textAlignment = NSTextAlignmentLeft;
            break;
        case 2:
            textView.textAlignment = NSTextAlignmentCenter;
            break;
        case 3:
            textView.textAlignment = NSTextAlignmentRight;
            break;
        case 4:
            textView.textAlignment = NSTextAlignmentJustified;
            break;
            
        default:
            textView.textAlignment = NSTextAlignmentLeft;
            break;
    }
    
    [view addSubview:textView];
    
    hb_retnll( ( HB_LONGLONG ) textView );
}

HB_FUNC( TEXTVIEW_SETTEXT )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UILabel * hNSObj = (__bridge  UILabel * ) hObj;
    
    hNSObj.text = hb_NSSTRING_par( 2 );
}

HB_FUNC( TEXTVIEW_GETTEXT )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UILabel * hNSObj = (__bridge  UILabel * ) hObj;
    
    hb_retc([hNSObj.text UTF8String]);
}
