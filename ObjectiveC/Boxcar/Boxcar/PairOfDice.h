//
//  PairOfDice.h
//  Boxcar
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#ifndef PairOfDice_h
#define PairOfDice_h

#include "Die.h"

@interface PairOfDice : NSObject

/* Properties */
@property (copy, nonatomic, readonly) Die* die1;
@property (copy, nonatomic, readonly) Die* die2;

@property (assign, nonatomic, readonly) int sum;

/* Methods */
-(instancetype) init;
-(int) rolls;

@end


#endif /* PairOfDice_h */
