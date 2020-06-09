//
//  BFVTip.m
//  Tips
//
//  Created by brian vilchez on 6/9/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import "BFVTip.h"

@implementation BFVTip

//MARK: - init Method
- (instancetype)initWithName:(NSString *)name
                       total:(double)total
               tipPercentage:(double)tipPercentage
                  splitCount:(int)splitCount
{
    self = [super init];
    if (self != nil) {
        
        _name = name;
        _total = total;
        _tipPercentage = tipPercentage;
        _splitCount = splitCount;
    }
    return self;
}
@end
