//
//  iharbour.c
//  iharbour
//
//  Created by anto on 26/07/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import <UIKit/UIApplication.h>
#include <hbapi.h>

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
