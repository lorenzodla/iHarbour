//
//  iharbour.m
//  iharbour
//
//  Created by anto on 26/07/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "iharbour.h"

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

ViewController * GetMainViewController()
{
    AppDelegate * appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    ViewController * vc = ( ViewController * ) appDelegate.window.rootViewController;
    return vc;
}

UIView * GetMainView()
{
    AppDelegate * appDelegate = (AppDelegate *)[[UIApplication sharedApplication] delegate];
    ViewController * vc = ( ViewController * ) appDelegate.window.rootViewController;
    
    return vc.view;
}

HB_FUNC( SETBKCOLOR )
{
    UIView * view = GetMainView();
    view.backgroundColor = [UIColor colorWithRed:(hb_parnd(1)/255) green:(hb_parnd(2)/255) blue:(hb_parnd(3)/255) alpha:(hb_parnd(4)/100)];
}

HB_FUNC( MSGINFO )
{
    ViewController * vc = GetMainViewController();
    
    NSString * cTitle = hb_pcount() > 1 ? hb_NSSTRING_par(2) : @"Information";
    
    __block BOOL bIsVisible = TRUE;
    UIAlertController * alert = [ UIAlertController alertControllerWithTitle:cTitle
                                                                     message:hb_NSSTRING_par(1)
                                                              preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction * defaultAction = [ UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                            handler:^( UIAlertAction * action ) { bIsVisible = FALSE;} ];
    [ alert addAction:defaultAction ];
    
    [ vc presentViewController:alert animated:YES completion:nil ];
    
    while( bIsVisible )
        [ [ NSRunLoop currentRunLoop ] runUntilDate:[ NSDate dateWithTimeIntervalSinceNow:0.1 ] ];
}

HB_FUNC( MSGYESNO )
{
    ViewController * vc = GetMainViewController();
    
    NSString * cTitle = hb_pcount() > 1 ? hb_NSSTRING_par(2) : @"Information";
    
    __block BOOL bIsVisible = TRUE;
    __block BOOL bIsYes = FALSE;
    UIAlertController * alert = [ UIAlertController alertControllerWithTitle:cTitle
                                                                     message:hb_NSSTRING_par(1)
                                                              preferredStyle:UIAlertControllerStyleAlert];
    
    UIAlertAction * btnYes = [ UIAlertAction actionWithTitle:@"Yes" style:UIAlertActionStyleDefault
                                                     handler:^( UIAlertAction * action ) { bIsVisible = FALSE; bIsYes = TRUE;} ];
    UIAlertAction * btnNo = [ UIAlertAction actionWithTitle:@"No" style:UIAlertActionStyleDefault
                                                    handler:^( UIAlertAction * action ) { bIsVisible = FALSE;} ];
    
    [ alert addAction:btnYes ];
    [ alert addAction:btnNo ];
    
    [ vc presentViewController:alert animated:YES completion:nil ];
    
    while( bIsVisible )
        [[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.1]];
    
    hb_retl( bIsYes );
}

HB_FUNC( SETSTATUSBAR ){
    ViewController * vc = GetMainViewController();
    [vc setStatusBarStyle:hb_parni(1)];
}

HB_FUNC( GETVIEWBOUNDS_H ){
    UIView * view = GetMainView();
    hb_retnl(view.bounds.size.height);
}

HB_FUNC( GETVIEWBOUNDS_W ){
    UIView * view = GetMainView();
    hb_retnd(view.bounds.size.width);
}

HB_FUNC( NSOBJSEND )
{
   void * hObj     = ( void * ) hb_parnll( 1 );
   UIView * hView  = (__bridge  UIView * ) hObj;
   NSString * cMsg = hb_NSSTRING_par( 2 );
   SEL selector    = NSSelectorFromString( cMsg );

   if( [ hView respondsToSelector: selector ] )
       hb_retnl( ( HB_LONG ) [ hView performSelector:selector ] );
   else
       hb_retnl( 0 );
}

HB_FUNC( CLASSPROPLIST )
{
   void * hObj = ( void * ) hb_parnll( 1 );
   UIView * hNSObj = (__bridge  UIView * ) hObj;
   unsigned int outCount;
   objc_property_t * properties = class_copyPropertyList( [hNSObj class], &outCount );
    
   hb_retnl( outCount );
}

HB_FUNC( CLASSSUPERPROPNAME )
{
   void * hObj = ( void * ) hb_parnll( 1 );
   UIView * hNSObj = (__bridge  UIView * ) hObj;
   unsigned int outCount;
   objc_property_t * properties = class_copyPropertyList( class_getSuperclass( [hNSObj class] ), &outCount );
    
   hb_retc( sel_getName( property_getName( properties[ hb_parnl( 2 ) - 1 ] ) ) );
}

HB_FUNC( CLASSSUPERPROPLIST )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UIView * hNSObj = (__bridge  UIView * ) hObj;
    unsigned int outCount;
    objc_property_t * properties = class_copyPropertyList( class_getSuperclass( [hNSObj class] ), &outCount );
    
    hb_retnl( outCount );
}

HB_FUNC( CLASSMETHODLIST )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UIView * hNSObj = (__bridge  UIView * ) hObj;
    unsigned int outCount;
    Method  _Nonnull * methods = class_copyMethodList( [hNSObj class], &outCount );
    
    hb_retnl( outCount );
}

HB_FUNC( CLASSMETHODNAME )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    UIView * hNSObj = (__bridge  UIView * ) hObj;
    unsigned int outCount;
    Method  _Nonnull * methods = class_copyMethodList( [hNSObj class], &outCount );
    
    hb_retc( sel_getName( method_getName( methods[ hb_parnl( 2 ) - 1 ] ) ) );
}

HB_FUNC( CLASSGETNAME )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    NSObject * hNSObj = (__bridge  NSObject * ) hObj;
    
    hb_retc( class_getName( [ hNSObj class ] ) );
}

HB_FUNC( CLASSGETSUPERNAME )
{
    void * hObj = ( void * ) hb_parnll( 1 );
    NSObject * hNSObj = (__bridge  NSObject * ) hObj;
    
    hb_retc( class_getName( class_getSuperclass( [ hNSObj class ] ) ) );
}

