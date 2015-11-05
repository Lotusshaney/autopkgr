//
//  NSArray+mapped.m
//  AutoPkgr
//
//  Created by Eldon on 11/5/15.
//  Copyright © 2015 The Linde Group, Inc. All rights reserved.
//

#import "NSArray+mapped.h"

@implementation NSArray (mapped)

- (NSArray *)mapObjectsUsingBlock:(id (^)(id obj, NSUInteger idx))block {
    NSMutableArray *array = [NSMutableArray arrayWithCapacity:self.count];
    [self enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
        [array addObject:block(obj, idx)];
    }];
    return array;
}


@end
