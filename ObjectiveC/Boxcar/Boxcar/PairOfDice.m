//
//  PairOfDice.m
//  Boxcar
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PairOfDice.h"

@implementation PairOfDice

-(instancetype) init
{
    self = [super init];
    
    _die1 = [[Die alloc] init];
    _die2 = [[Die alloc] init];
    
    return self;
}

-(int) rolls
{
    _sum = [_die1 roll] + [_die2 roll];
    return _sum;
}

@end
