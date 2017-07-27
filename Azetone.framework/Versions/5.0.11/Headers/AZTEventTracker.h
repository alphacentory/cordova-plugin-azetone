//
//  AZTEventTracker.h
//  Azetone
//
//  Created by Med on 28/01/16.
//  Copyright © 2016 Azetone. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Gender
 */
typedef enum {
    /** Gender male. */
    AZTGenderMale = 1,
    
    /** Gender female. */
    AZTGenderFemale = 1
} AZTGender;


@interface AZTEventTracker : NSObject


#pragma mark - Profile Builder
/**
 *  Set user Id
 *
 *  @param userId the user identifier
 */
- (void)setUserId:(NSString *)userId;


/**
 *  Set user email
 *
 *  @param userEmail the user email
 */
- (void)setUserEmail:(NSString *)userEmail;


/**
 *  Set user name
 *
 *  @param userName The user name
 */
- (void)setUserName:(NSString *)userName;


/**
 *  Set the user phone
 *
 *  @param userPhone the user phone
 */
- (void)setUserPhone:(NSString *)userPhone;


/**
 *  Set the user facebook id
 *
 *  @param userFacebookId facebook id
 */
- (void)setUserFacebookId:(NSString *)userFacebookId;


/**
 *  Set the user twitter id
 *
 *  @param userTwitterId twitter id
 */
- (void)setUserTwitterId:(NSString *)userTwitterId;


/**
 *  Set the user google id
 *
 *  @param userGoogleId google id
 */
- (void)setUserGoogleId:(NSString *)userGoogleId;


/**
 *  Set user age
 *
 *  @param age the age
 */
- (void)setUserAge:(int)age;


/**
 *  Set the user gender
 *
 *  @param gender user gender
 */
- (void)setUserGender:(AZTGender)gender;


/**
 *  Set the user latitude/longitude
 *
 *  @param latitude  the latitude
 *  @param longitude the longitude
 */
- (void)setLatitude:(double)latitude
          longitude:(double)longitude;


/**
 *  Set the user altitude/latitude/longitude
 *
 *  @param altitude the altitude
 *  @param latitude  the latitude
 *  @param longitude the longitude
 */
- (void)setAltitude:(double)altitude
           latitude:(double)latitude
          longitude:(double)longitude;


#pragma mark - Event Tracking
/**
 *  Log an event
 *
 *  @param eventName The event name
 */
- (void)logEvent:(NSString *)eventName;



/**
 *  Log an event
 *
 *  @param eventName The event name
 *  @param params  The parameters
 */
- (void)logEvent:(NSString *)eventName
          params:(NSDictionary *)params;


/**
 *  Load events. 
 *  Provides JSON Result
 *
 *  @param tag The tag name
 *  @param params  The parameters
 *  @param handler  The completion block
 */
- (void)loadEvents:(NSString *)tag
            params:(NSDictionary *)params
        completion:(void(^)(NSString *result, NSString *error))handler;

/**
 *  Load events.
 *  Provides JSON Result
 *
 *  @param tag The tag name
 *  @param params  The parameters
 *  @param timeout The request timeout
 *  @param endpoint The request endpoint url
 *  @param handler  The completion block
 */
- (void)loadEvents:(NSString *)tag
            params:(NSDictionary *)params
           timeout:(NSTimeInterval)timeout
          endpoint:(NSString *)endpoint
        completion:(void(^)(NSString *result, NSString *error))handler;

@end
