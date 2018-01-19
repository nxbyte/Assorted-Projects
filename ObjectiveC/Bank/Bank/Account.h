//
//  Account.h
//  Bank
//
//  Copyright © 2017 Warren Seto. All rights reserved.
//

#ifndef Account_h
#define Account_h

#define INTREST_RATE 0.035

@interface Account : NSObject

/* Properties */
@property (assign, nonatomic, readwrite) long accountNumber;
@property (assign, nonatomic, readwrite) double balance;

@property (copy, nonatomic, readwrite) NSString* name;

/* Methods */
-(instancetype) initWithOwnerName:(NSString*)name withAccountBalance:(long)account;
-(instancetype) initWithOwnerName:(NSString*)name withAccountBalance:(long)account andInitialBalance:(double)initial;
-(double) deposit:(double)amount;
-(double) withdrawWithAmount:(double)amount andFee:(double)fee;
-(double) transferAmount:(double)transfer toAccount:(Account*)otherAccount;
-(double) addIntrest;
-(NSString *) description;


@end


#endif /* Account_h */
