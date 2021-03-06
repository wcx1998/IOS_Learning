//
//  Car.h
//  qcpp
//
//  Created by 王晨旭 on 2019/5/2.
//  Copyright © 2019 王晨旭. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Car : NSObject
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *icon;

+ (instancetype)carWithDict:(NSDictionary *)dict;
- (instancetype)initWithDict:(NSDictionary *)dict;
@end

NS_ASSUME_NONNULL_END
