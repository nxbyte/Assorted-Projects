//
//  Address.m
//  Address
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Address.h"

@implementation Address

/* @brief : Sets up this Address object with the specified data */
- (instancetype) initWithStreet:(NSString*)street town:(NSString*)town state:(NSString*)state andZip:(NSString*)zip
{
    self = [super init];
    
    _streetAddress = street;
    _city = town;
    _state = state;
    _zipCode = zip;
    
    return self;
}

/* @brief : Returns this Address object as a string */
- (NSString*) description
{
    NSString* result = [NSString stringWithFormat: @"%@ %@, %@ %@", _streetAddress, _city, _state, _zipCode ];
    return result;
}

@end
