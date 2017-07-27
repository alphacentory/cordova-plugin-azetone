//
//  AZTLogger.h
//  Azetone
//
//  Created by Med on 26/06/14.
//  Copyright (c) 2015 Azetone. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * Log Level setting.
 */
typedef enum {
    /** Log level of Verbose. */
    AZTLogLevelVerbose = 4,
    
    /** Log level of Info. */
    AZTLogLevelInfo = 3,
    
    /** Log level of Warning. */
    AZTLogLevelWarning = 2,
    
    /** Log level of Error. */
    AZTLogLevelError = 1,
    
    /** Log level of None. */
    AZTLogLevelNone = 0
} AZTLogLevelType;


/**
 *  This class helps to log all messages with different log levels.
 */
@interface AZTLogger : NSObject {
    AZTLogLevelType level;
}



/**
 *  Provides a shared instance of the logger.
 *
 *  @return A shared instance of AZTLogger.
 */
+ (AZTLogger *) defaultLogger;



/**
 *  Use this method to filter the log.
 *
 *  @param level The Log level
 */
-(void)setLevel:(AZTLogLevelType)level;



/**
 *  Use this method to log any message. The message can be simple or formatted.
 *
 *  @param level   The log level in which your message will appear.
 *  @param message Your message, it can be simple or formatted.
 *  @param ...     Add here parameters to fill your message format.
 */
void AZTLog(AZTLogLevelType level, NSString *message,...) NS_FORMAT_FUNCTION(2,3);
@end