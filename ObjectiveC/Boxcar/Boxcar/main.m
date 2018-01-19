//
//  main.m
//  Boxcar
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PairOfDice.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {

        PairOfDice* boxcar = [[PairOfDice alloc] init];
        
        int total = 0;
        
        NSLog(@"Boxcar");
        
        for (int count = 0; count < 1000; count++)
        {
            if ([boxcar rolls] == 12)
            {
                total++;
            }
        }
        
        NSLog(@"Probability of a boxcar: %d/1000 rolls", total);
        
    }
    return 0;
}
