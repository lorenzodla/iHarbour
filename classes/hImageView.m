//
//  hImageView.m
//  iharbour
//
//  Created by Lorenzo on 01/08/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "iharbour.h"

HB_FUNC( CREATEIMAGEVIEW )
{
    UIView * view = GetMainView();
    UIImageView *imageView = [[UIImageView alloc]init];
    
    imageView.frame = CGRectMake( (hb_parnl(2)),
                                (hb_parnl(3)),
                                (hb_parnl(4)),
                                (hb_parnl(5)) );
    
    
    imageView.image = [UIImage imageNamed:hb_NSSTRING_par( 1 )];
    
    [view addSubview:imageView];
    hb_retnll( ( HB_LONGLONG ) imageView );
}

