//
//  Address.h
//  Address
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef Address_h
#define Address_h

@interface Address : NSObject

/* Properties */
@property (copy, nonatomic, readonly) NSString* streetAddress;
@property (copy, nonatomic, readonly) NSString* city;
@property (copy, nonatomic, readonly) NSString* state;
@property (copy, nonatomic, readonly) NSString* zipCode;

/* Methods */
- (instancetype) initWithStreet:(NSString*)street town:(NSString*)town state:(NSString*)state andZip:(NSString*)zip;
- (NSString*) description;

@end


#endif /* Address_h */
