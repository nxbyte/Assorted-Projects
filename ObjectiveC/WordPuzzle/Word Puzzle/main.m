//
//  main.m
//  Word Puzzle
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        // Read In File from Bundle
        
        NSError* readError = nil;
        
        NSString* path = [[NSBundle mainBundle] pathForResource:@"0505matrix"
                                                         ofType:@"txt"];
        
        NSString* matrixString = [NSString stringWithContentsOfFile:path
                                                      encoding:NSUTF8StringEncoding
                                                         error:&readError];
        if (readError != nil) {
            NSLog(@"ERROR: %@", readError);
            return 0;
        }
        
        NSArray* byLine = [matrixString componentsSeparatedByString: @"\n"];
        
        // Process the size of the matrix and setup parallel arrays for highlighting matches
        
        NSArray* matrixDimension = [byLine[0] componentsSeparatedByString: @" "];
        
        NSInteger rowSize = [matrixDimension[0] integerValue];
        NSInteger columnSize = [matrixDimension[1] integerValue];
        
        char matrix[rowSize][columnSize];
        BOOL highlight[rowSize][columnSize];
        
        for (int count = 0; count < rowSize; count++) {
            NSArray* lineElement = [byLine[count + 1] componentsSeparatedByString: @" "];
            
            for (int count2 = 0; count2 < columnSize; count2++) {
                matrix[count][count2] = [lineElement[count2] UTF8String][0];
                highlight[count][count2] = NO;
            }
        }
        
        // Start looking through the matrix for matches

        int inputSize = 4;
        char input[] = {'t', 'c', 'n', 'j'};
        
        for (int count = 0; count < rowSize; count++) {
            for (int count2 = 0; count2 < columnSize; count2++) {
                
                // South
                if (count + inputSize - 1 <= columnSize) {
                    
                    BOOL flag = YES;
                    
                    for (int count3 = 0; count3 < inputSize; count3++) {
                        
                        if (input[count3] != matrix[count + count3][count2]) {
                            flag = NO;
                            break;
                        }
                    }
                    
                    if (flag) {
                        for (int count3 = 0; count3 < inputSize; count3++) {
                            highlight[count + count3][count2] = YES;
                        }
                    }
                }
                
                
                // North
                if (count - inputSize + 1 >= 0) {
                    
                    BOOL flag = YES;
                    
                    for (int count3 = 0; count3 < inputSize; count3++) {
                        
                        if (input[count3] != matrix[count - count3][count2]) {
                            flag = NO;
                            break;
                        }
                    }
                    
                    if (flag) {
                        for (int count3 = 0; count3 < inputSize; count3++) {
                            highlight[count - count3][count2] = YES;
                        }
                    }
                }
                
                // East
                if (count2 + inputSize - 1 <= rowSize) {
                    
                    BOOL flag = YES;
                    
                    for (int count3 = 0; count3 < inputSize; count3++) {
                        
                        if (input[count3] != matrix[count][count2 + count3]) {
                            flag = NO;
                            break;
                        }
                    }
                    
                    if (flag) {
                        for (int count3 = 0; count3 < inputSize; count3++) {
                            highlight[count][count2 + count3] = YES;
                        }
                    }
                }
                
                // West
                if (count2 - inputSize + 1 >= 0) {
                    
                    BOOL flag = YES;
                    
                    for (int count3 = 0; count3 < inputSize; count3++) {
                        
                        if (input[count3] != matrix[count][count2 - count3]) {
                            flag = NO;
                            break;
                        }
                    }
                    
                    if (flag) {
                        for (int count3 = 0; count3 < inputSize; count3++) {
                            highlight[count][count2 - count3] = YES;
                        }
                    }
                }
                
                // South East
                if ((count + inputSize - 1 <= columnSize) && (count2 + inputSize - 1 <= rowSize)) {
                    
                    BOOL flag = YES;
                    
                    for (int count3 = 0; count3 < inputSize; count3++) {
                        
                        if (input[count3] != matrix[count + count3][count2 + count3]) {
                            flag = NO;
                            break;
                        }
                    }
                    
                    if (flag) {
                        for (int count3 = 0; count3 < inputSize; count3++) {
                            highlight[count + count3][count2 + count3] = YES;
                        }
                    }
                }
                
                // North West
                if ((count - inputSize + 1 >= 0) && (count2 - inputSize + 1 >= 0)) {
                    
                    BOOL flag = YES;
                    
                    for (int count3 = 0; count3 < inputSize; count3++) {
                        
                        if (input[count3] != matrix[count - count3][count2 - count3]) {
                            flag = NO;
                            break;
                        }
                    }
                    
                    if (flag) {
                        for (int count3 = 0; count3 < inputSize; count3++) {
                            highlight[count - count3][count2 - count3] = YES;
                        }
                    }
                }
                
                // North East
                if ((count - inputSize + 1 >= 0) && (count2 + inputSize - 1 <= rowSize)) {
                    
                    BOOL flag = YES;
                    
                    for (int count3 = 0; count3 < inputSize; count3++) {
                        
                        if (input[count3] != matrix[count - count3][count2 + count3]) {
                            flag = NO;
                            break;
                        }
                    }
                    
                    if (flag) {
                        for (int count3 = 0; count3 < inputSize; count3++) {
                            highlight[count - count3][count2 + count3] = YES;
                        }
                    }
                }
                
                // South West
                if ((count + inputSize - 1 <= columnSize) && (count2 - inputSize + 1 >= 0)) {
                    
                    BOOL flag = YES;
                    
                    for (int count3 = 0; count3 < inputSize; count3++) {
                        
                        if (input[count3] != matrix[count + count3][count2 - count3]) {
                            flag = NO;
                            break;
                        }
                    }
                    
                    if (flag) {
                        for (int count3 = 0; count3 < inputSize; count3++) {
                            highlight[count + count3][count2 - count3] = YES;
                        }
                    }
                }
            }
        }
        
        // End Result
        
        for (int count = 0; count < rowSize; count++) {
            for (int count2 = 0; count2 < columnSize; count2++) {
                printf("%i ", highlight[count][count2]);
            }
            printf("\n");
        }
        
    }
    return 0;
}
