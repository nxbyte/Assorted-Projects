//
//  main.m
//  Fraction
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Fraction.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {

        Fraction* fraction1 = [[Fraction alloc] initWithNumerator:24 andDenominator:2];
        Fraction* fraction2 = [fraction1 reciprocal];
        
        
        NSLog(@"%@", [fraction1 description]);
        NSLog(@"%@", [fraction2 description]);

        
        if ([Fraction one:fraction1 isEqualToFractionTwo:fraction2])
        {
            NSLog(@"YES EQUAL");
        }
        
        else
        {
            NSLog(@"NO EQUAL");
        }
    }
    return 0;
}
