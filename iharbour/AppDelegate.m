//
//  AppDelegate.m
//  iharbour
//
//  Created by anto on 23/07/2019.
//  Copyright © 2019 anto. All rights reserved.
//

#import "AppDelegate.h"
#import "ViewController.h"

#define HB_DONT_DEFINE_BOOL
#include "hbapi.h"
#include "hbvm.h"

@interface AppDelegate ()

@end

@implementation AppDelegate

/*- ( void ) MsgInfo()
{
   UIAlertController* alert = [UIAlertController alertControllerWithTitle:@"My Alert"
                                                               message:@"This is an alert."
                                                        preferredStyle:UIAlertControllerStyleAlert];

   UIAlertAction* defaultAction = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault
                                                      handler:^(UIAlertAction * action) {}];

   [alert addAction:defaultAction];
   [self presentViewController:alert animated:YES completion:nil];
}*/

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    PHB_SYMB symMain = hb_dynsymSymbol( hb_dynsymFindName( "MAIN" ) );
    
    ViewController * vc = [[ViewController alloc]init];
    [vc showAlert];
    
    hb_vmPushSymbol( symMain );
    hb_vmPushNil();
    hb_vmDo( 0 );
    
    return YES;
}


- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and invalidate graphics rendering callbacks. Games should use this method to pause the game.
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end
