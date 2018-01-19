//
//  Die.m
//  Boxcar
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <stdlib.h>
#import "Die.h"

@implementation Die

-(instancetype) init
{
    self = [super init];
    
    _numFaces = 6;
    _faceValue = 1;
    
    return self;
}

-(instancetype) initWithFaces:(int)faces
{
    self = [super init];
    
    if (faces < MIN_FACES)
        _numFaces = 6;
    else
        _numFaces = faces;
    
    _faceValue = 1;
    
    return self;
}

-(int) roll
{
    _faceValue = arc4random_uniform(6) + 1;
    return _faceValue;
}

@end
