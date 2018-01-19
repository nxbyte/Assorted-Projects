//
//  Student.m
//  Address
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Student.h"

@implementation Student

/* @brief : Sets up this Student object with the specified initial values */
-(instancetype) initWithStudentFirstName:(NSString*)first LastName:(NSString*)last homeAddress:(Address*)home andSchoolAddress:(Address*)school
{
    self = [super init];
    
    _firstName = first;
    _lastName = last;
    _homeAddress = home;
    _schoolAddress = school;
    
    _grade1 = 0;
    _grade2 = 0;
    _grade3 = 0;
    _avg = 0;
    
    return self;
}

/* @brief : Sets the test score for each score */
-(void) setTestScoreWithGradeNumber:(int)num andGrade:(int)grade
{
    if (num == 1)
        _grade1 = grade;
	   
    if (num == 2)
        _grade2 = grade;
	   
    if (num == 3)
        _grade3 = grade;
}

/* @brief : Calculates the average */
-(double) getAverage
{
    _avg = (_grade1 + _grade2 + _grade3) / 3.0;
    return _avg;
}

/* @brief : Returns a Student's specific grade from 1 to 3. If not in range, returns 0 */
-(int) getTestScoreWithScoreNumber:(int)choose
{
    if (choose == 1)
        return _grade1;
	   
    if (choose == 2)
        return _grade2;
	   
    if (choose == 3)
        return _grade3;
    
    return -1;
}

/* @brief : Returns this Student object as a string. */
-(NSString*) description
{
    NSString* result = [NSString stringWithFormat: @"%@ %@\nHome Address: %@\nSchool Address: %@\nTest Scores: %d, %d, %d\nAverage of Test Scores: %f",
                                                        _firstName, _lastName,
                                                        [_homeAddress description],
                                                        [_schoolAddress description],
                                                        _grade1, _grade2, _grade3, [self getAverage]];
    
    return result;
}

@end
