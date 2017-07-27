//
//  AZTABTest.h
//  Azetone
//
//  Created by Med on 08/06/14.
//  Copyright (c) 2015 Azetone. All rights reserved.

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface AZTABTest : NSObject

/**
 *  Fetch variation from server
 *
 *  @param tagName      The tag name
 *  @param defaultValue The default value
 *  @param handler      Completion handler
 */
+ (void)getTextVariation:(NSString *)tagName
            defautlValue:(NSString *)defaultValue
              completion:(void(^)(NSString *result))handler;


/**
 *  Fetch variation from server
 *
 *  @param tagName      The tag name
 *  @param defaultValue The default value
 *  @param handler      Completion handler
 */
+ (void)getCustomVariation:(NSString *)tagName
              defautlValue:(NSString *)defaultValue
                completion:(void(^)(NSString *result))handler;


/**
 *  Fetch variation from server
 *
 *  @param tagName      The tag name
 *  @param defaultValue The default value
 *  @param handler      Completion handler
 */
+ (void)getColorVariation:(NSString *)tagName
             defautlValue:(UIColor *)defaultValue
               completion:(void(^)(UIColor *result))handler;


/**
 *  Fetch variation from server
 *
 *  @param tagName      The tag name
 *  @param defaultValue The default value
 *  @param handler      Completion handler
 */
+ (void)getImageVariation:(NSString *)tagName
             defautlValue:(UIImage *)defaultValue
               completion:(void(^)(UIImage *result))handler;


/**
 *  Record conversion of a variation
 *
 *  @param tagName      The tag name
 */
+ (void)recordConversion:(NSString *)tagName;

@end
