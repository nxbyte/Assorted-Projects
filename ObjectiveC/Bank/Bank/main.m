//
//  main.m
//  Bank
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Account.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {

        Account* warren = [[Account alloc] initWithOwnerName:@"Warren" withAccountBalance:1777 andInitialBalance:100];
        Account* jon = [[Account alloc] initWithOwnerName:@"Jon" withAccountBalance:6666 andInitialBalance:900];
        Account* other = [[Account alloc] initWithOwnerName:@"Kevin" withAccountBalance:8913];
        
        NSLog(@"Initial Account Info:");
        NSLog(@"");
        NSLog(@"%@", [warren description]);
        NSLog(@"%@", [jon description]);
        NSLog(@"%@", [other description]);
        NSLog(@"");
        
        [jon transferAmount:100 toAccount:warren];
        
        NSLog(@"Account Information after $100 transfer: ");
        NSLog(@"%@", [warren description]);
        NSLog(@"%@", [jon description]);

    }
    return 0;
}
