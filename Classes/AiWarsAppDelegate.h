//
//  AiWarsAppDelegate.h
//  AiWars
//
//  Created by Jeremiah Gage on 3/6/09.
//  Copyright Slyco 2009. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainMenuViewController.h"

@interface AiWarsAppDelegate : NSObject <UIApplicationDelegate>
{
    UIWindow *window;
	MainMenuViewController *mainMenuViewController;
}

@property ATOMICITY_RETAIN IBOutlet UIWindow *window;

@end
