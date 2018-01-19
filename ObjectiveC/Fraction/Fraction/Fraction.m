//
//  Fraction.m
//  Fraction
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fraction.h"



@implementation Fraction


-(instancetype) initWithNumerator:(int)numerator andDenominator:(int)denominator
{
    self = [super init];
    
    _numerator = numerator;
    
    if (denominator == 0)
    {
        _denominator = 1;
    }
    
    else if (denominator < 0)
    {
        _numerator *= -1;
        _denominator *= -1;
    }
    
    else
    {
        _denominator = denominator;
    }
    
    [self reduce];

    return self;
}

-(Fraction*) reciprocal
{
    Fraction* temp = [[Fraction alloc] initWithNumerator:_denominator andDenominator:_numerator];
    
    return temp;
}

+(BOOL) one:(Fraction*)one isEqualToFractionTwo:(Fraction*) two
{
    return (one->_numerator == two->_numerator) && (one->_denominator == two->_denominator);
}

-(NSString*) description
{
    if (_numerator == 0)
    {
        return [NSString stringWithFormat:@"0"];
    }
    
    else if (_denominator == 1)
    {
        return [NSString stringWithFormat:@"%d", _numerator];
    }
    
    else
    {
        return [NSString stringWithFormat:@"%d/%d", _numerator, _denominator];
    }
}

-(void) reduce
{
    if (_numerator != 0)
    {
        int common = [self gcdWith:_numerator and:_denominator];
        
        _numerator = _numerator / common;
        _denominator = _denominator / common;
    }
}


-(int) gcdWith:(int)num1 and:(int)num2
{
    int count;
    
    while (num1 != 0)
    {
        count = num1;
        num1 = num2 % num1;
        num2 = count;
    }
    
    return num2;
}


@end
