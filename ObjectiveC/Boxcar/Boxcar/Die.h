//
//  Die.h
//  Boxcar
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#ifndef Die_h
#define Die_h

#define MIN_FACES 4

@interface Die : NSObject

/* Properties */
@property (assign, nonatomic, readonly) int numFaces;
@property (assign, nonatomic, readwrite) int faceValue;

/* Methods */
-(instancetype) init;
-(instancetype) initWithFaces:(int)faces;
-(int) roll;

@end

#endif /* Die_h */
