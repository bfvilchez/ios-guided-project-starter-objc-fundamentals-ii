//
//  BFVTip.h
//  Tips
//
//  Created by brian vilchez on 6/9/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BFVTip : NSObject

//TIp Amount - Double
// total - Double
// tip percentage - Double
// name - NSString
// number of people - int

@property double total;
@property double tipPercentage;
@property NSString *name;
@property int splitCount;

- (instancetype)initWithName:(NSString *)name
                       total:(double)total
               tipPercentage:(double)tipPercentage
                  splitCount:(int)splitCount; 
@end

NS_ASSUME_NONNULL_END

