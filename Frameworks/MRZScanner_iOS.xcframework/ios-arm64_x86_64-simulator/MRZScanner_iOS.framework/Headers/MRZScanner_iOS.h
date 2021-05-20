//
//  MRZScanner_iOS.h
//  MRZScanner-iOS
//
//  Created by Alex Chang on 2021/5/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MyEngineMRZWrapper.h"

//! Project version number for MRZScanner_iOS.
FOUNDATION_EXPORT double MRZScanner_iOSVersionNumber;

//! Project version string for MRZScanner_iOS.
FOUNDATION_EXPORT const unsigned char MRZScanner_iOSVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <MRZScanner_iOS/PublicHeader.h>


@interface MRZScanner : NSObject

+(BOOL)initializeScanner;
+(void)releaseScanner;
+(NSString*)scanMRZ:(UIImage*)image mode:(NSInteger)mode;

@end
