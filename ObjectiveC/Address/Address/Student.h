//
//  Student.h
//  Address
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Address.h"

#ifndef Student_h
#define Student_h

@interface Student : NSObject

/* Properties */
@property (copy, nonatomic, readonly) NSString* firstName;
@property (copy, nonatomic, readonly) NSString* lastName;

@property (copy, nonatomic, readonly) Address* homeAddress;
@property (copy, nonatomic, readonly) Address* schoolAddress;

@property (assign, nonatomic, readonly) int grade1;
@property (assign, nonatomic, readonly) int grade2;
@property (assign, nonatomic, readonly) int grade3;
@property (assign, nonatomic, readonly) double avg;

/* Methods */
-(instancetype) initWithStudentFirstName:(NSString*)first LastName:(NSString*)last homeAddress:(Address*)home andSchoolAddress:(Address*)school;
-(void) setTestScoreWithGradeNumber:(int)num andGrade:(int)grade;
-(double) getAverage;
-(int) getTestScoreWithScoreNumber:(int)choose;
-(NSString*) description;

@end


#endif /* Student_h */
