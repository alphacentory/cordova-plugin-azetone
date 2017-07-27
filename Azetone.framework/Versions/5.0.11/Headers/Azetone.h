//
//  Azetone.h
//  Azetone
//
//  Created by Med on 08/06/14.
//  Copyright (c) 2016 Azetone. All rights reserved.
//


#import <AZTLogger.h>
#import <AZTABTest.h>
#import <AZTNotifier.h>
#import <AZTEventTracker.h>


@class AZTSession;
@interface Azetone : NSObject {
@private
    AZTSession *session;
}


@property (nonatomic, strong) NSString *authKey;
@property (nonatomic, strong) AZTSession *session;
@property (nonatomic) long int dispatchPeriod;


/**
 *  Shared instance of the Azetone manager
 *
 *  @return a shared instance of Azetone.
 */
+ (Azetone *)sharedManager;


#pragma mark - SDK Management
/**
 *  Set the dispatch period
 *  Default value is 15 minutes
 *
 *  @param period The dispatch period
 */
- (void)setDispatchPeriod:(long)period;


/**
 *  Upload cached data
 */
- (void)measureSession;


/**
 *  Returns the dataPack Id
 */
- (int)dataPackId;


/**
 *  Provide the framework version
 *
 *  @return Framework version
 */
- (NSString *)getVersion;


/**
 *  Return the secret key
 *
 *  @return Secret key
 */
- (NSString *)getSecretKey;


/**
 *  Return YES if ABTesting is enabled
 *  NO otherwise
 *
 *  @return abTesting enabled
 */
- (BOOL)abTestingEnabled;


#pragma mark - Analytics
/**
 *  Shared instance of the Azetone tracker
 *
 *  @return a shared instance of AZTEventTracker.
 */
+ (AZTEventTracker *)sharedTracker;


/**
 *  Enable/Disable tracking
 *
 *  @param optOut The optout flag
 */
+ (void)optOut:(BOOL)optOut;



/**
 *  Present an alert to the user
 *  to allow SDK to collect data
 *
 *  @param title The alert title
 *  @param message The alert message
 *  @param allowTitle The alert allow button title
 *  @param refuseTitle The alert refuse button title
 */
+ (void)requestOptInWithTitle:(NSString *)title
                      message:(NSString *)message
             allowButtonTitle:(NSString *)allowTitle
            refuseButtonTitle:(NSString *)refuseTitle;


/**
 *  Provides the app level optout
 *
 *  @return if the tracking is enabled or not.
 */
+ (BOOL)optedOut;


#pragma mark - Push notifications
/**
 *  Shared instance of the Azetone notifier
 *
 *  @return a shared instance of AZTNotifier.
 */
+ (AZTNotifier *)sharedNotifier;


#pragma mark - Logger
/**
 *  Shared instance of the Azetone logger
 *
 *  @return a shared instance of AZTLogger.
 */
+ (AZTLogger *)sharedLogger;
@end
