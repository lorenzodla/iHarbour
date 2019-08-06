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
    
    [view addSubview:textView];
    
    hb_retnll( ( HB_LONGLONG ) textView );
}

HB_FUNC( TEXTVIEW_ISEDITABLE )
{
    void * hObj = ( void *) hbparnll( 1 );
    UITextView * hNSObj = (__bridge UITextView *) hObj;
    
    hNSObj.editable = hbparl( 2 );
}

HB_FUNC( TEXTVIEW_ALIGNMENT )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UITextView * hNSObj = (__bridge  UITextView * ) hObj;
    
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


HB_FUNC( TEXTVIEW_SETTEXT )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UITextView * hNSObj = (__bridge  UITextView * ) hObj;
    
    hNSObj.text = hb_NSSTRING_par( 2 );
}

HB_FUNC( TEXTVIEW_GETTEXT )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UITextView * hNSObj = (__bridge  UITextView * ) hObj;
    
    hb_retc([hNSObj.text UTF8String]);
}
