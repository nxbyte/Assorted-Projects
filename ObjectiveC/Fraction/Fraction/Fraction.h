//
//  Fraction.h
//  Fraction
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#ifndef Fraction_h
#define Fraction_h


@interface Fraction : NSObject

/* Properties */
@property (assign, nonatomic, readwrite) int numerator;
@property (assign, nonatomic, readwrite) int denominator;

/* Methods */
-(instancetype) initWithNumerator:(int)numerator andDenominator:(int)denominator;
-(Fraction*) reciprocal;
-(NSString*) description;
-(void) reduce;

/* Static Methods */
+(BOOL) one:(Fraction*)one isEqualToFractionTwo:(Fraction*) two;

@end

#endif /* Fraction_h */
