//
//  Account.m
//  Bank
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Account.h"

@implementation Account


-(instancetype) initWithOwnerName:(NSString*)name withAccountBalance:(long)account
{
    self = [super init];
    
    _name = name;
    _accountNumber = account;
    _balance = 0;
    
    return self;
}

-(instancetype) initWithOwnerName:(NSString*)name withAccountBalance:(long)account andInitialBalance:(double)initial
{
    self = [super init];
    
    _name = name;
    _accountNumber = account;
    _balance = initial;
    
    return self;
}

-(double) deposit:(double)amount
{
    if (amount < 0)
    {
        NSLog(@"Error: Deposit amount is invalid.\n%ld %f", _accountNumber, _balance);
    }
    
    else
    {
        _balance += amount;
    }
    
    return _balance;
}

-(double) withdrawWithAmount:(double)amount andFee:(double)fee
{
    double total = amount + fee;
    
    if (amount < 0)
    {
        NSLog(@"Error: Withdraw amount is invalid.\nAccount: %ld\nRequested: %f", _accountNumber, total);
    }
    
    else
    {
        if (total > _balance)
        {
            NSLog(@"Error: Error: Insufficient funds.\nAccount: %ld\nRequested: %f\nAvailable: %f", _accountNumber, total, _balance);
        }
        
        else
        {
            _balance -= amount;
        }
    }
    
    return _balance;
}
    
-(double) transferAmount:(double)transfer toAccount:(Account*)otherAccount
{
    [self withdrawWithAmount:transfer andFee:0];
    [otherAccount deposit:transfer];
    
    return _balance;
}
    
-(double) addIntrest
{
    _balance += (_balance * INTREST_RATE);
    return _balance;
}

-(NSString *) description
{
    NSString* result = [NSString stringWithFormat:@"%ld\t%@\t%f", _accountNumber, _name, _balance];
    return result;
}

@end

