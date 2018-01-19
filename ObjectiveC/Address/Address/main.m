//
//  main.m
//  Address
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Student.h"
#import "Address.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        Address* homeAddr = [[Address alloc] initWithStreet:@"100 Happy Street" town:@"Edison" state:@"NJ" andZip:@"08820"];
        Address* schoolAddr = [[Address alloc] initWithStreet:@"855 Grove Street" town:@"Edison" state:@"NJ" andZip:@"08820"];
        
        Student* me = [[Student alloc] initWithStudentFirstName:@"Warren" LastName:@"Seto" homeAddress:homeAddr andSchoolAddress:schoolAddr];
        
        [me setTestScoreWithGradeNumber:1 andGrade:100];
        [me setTestScoreWithGradeNumber:2 andGrade:80];
        [me setTestScoreWithGradeNumber:3 andGrade:90];
        
        NSLog(@"First Test Score: %d", [me getTestScoreWithScoreNumber:1]);
        
        NSLog(@"\n\n%@", me);
        
    }
    return 0;
}

/*
 2017-08-11 23:14:46.395972-0700 Address[1161:91840] First Test Score: 100
 2017-08-11 23:14:46.396627-0700 Address[1161:91840]
 
 Warren Seto
 Home Address: 30 Happy Street Edison, NJ 08820
 School Address: 855 Grove Street Edison, NJ 08820
 Test Scores: 100, 80, 90
 Average of Test Scores: 90.000000
 Program ended with exit code: 0
*/
