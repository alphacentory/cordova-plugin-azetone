//
//  AZTNotifier.h
//  Azetone
//
//  Created by Med on 08/06/14.
//  Copyright (c) 2015 Azetone. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AZTLogger.h"


/**
 *  AZTNotifier is a framework aiming to automate and manage push notification
 */
@interface AZTNotifier : NSObject <UIAlertViewDelegate>{
    NSString *appID;
    NSString *apiKey;
}

/**
 *  Use this method to initialize the Azetone Notifier with your appID and your apiKey
 *  generated in the app setting page of the Azetone web panel.
 *
 *  @param azAppId  Your app ID.
 *  @param azApiKey Your Api Key.
 */
- (void)initWithAppId:(NSString *)azAppId apiKey:(NSString *)azApiKey;


/**
 *  Register for push notification
 *
 *  @param launchOptions launch options
 */
- (void)registerForRemoteNotification:(NSDictionary *)launchOptions;


/**
 *  Shared instance of the Azetone notifier
 *
 *  @return a shared instance of AZTNotifier.
 */
+ (AZTNotifier *)sharedNotifier;



/**
 *  This method fetch any received/queued notifications and schedule it.
 *  When a notification is fired, the AZTNotifier displays an alert according 
 *  to the received data.
 *
 *  @param notification The notification dictionnary or the launch options dictionnary.
 */
- (void)handleRemoteNotification:(NSDictionary *)notification;



/**
 *  This methods is used to register a new device or to update the push notificat.
 *  When the app is updated/reinstalled, the system generates a new push token, passing it
 *  to this methods helps keeping your system operating.
 *
 *  @param token The device token.
 */
- (void)setPushToken:(NSData *)token;


/**
 *  Set the application badge
 *
 *  @param badgeNumber The badge number
 */
- (void)setApplicationBadgeNumber:(NSInteger)badgeNumber;
@end

