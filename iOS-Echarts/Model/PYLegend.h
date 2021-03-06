//
//  PYLegend.h
//  iOS-Echarts
//
//  Created by Pluto Y on 15/9/8.
//  Copyright (c) 2015年 pluto-y. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PYTextStyle.h"

@interface PYLegend : NSObject

@property (nonatomic, assign) BOOL show;
@property (nonatomic, strong) NSNumber *zlevel;
@property (nonatomic, strong) NSNumber *z;
@property (nonatomic, copy) NSString *orient;
@property (nonatomic, strong) id x;
@property (nonatomic, strong) id y;
@property (nonatomic, strong) PYColor *backgroundColor;
@property (nonatomic, copy) NSString *borderColor;
@property (nonatomic, strong) NSNumber *borderWidth;
@property (nonatomic, strong) id padding;
@property (nonatomic, strong) NSNumber *itemGap;
@property (nonatomic, strong) NSNumber *itemWidth;
@property (nonatomic, strong) NSNumber *itemHeight;
@property (nonatomic, strong) PYTextStyle *textStyle;
@property (nonatomic, strong) id formatter;
@property (nonatomic, strong) id selectedMode;
@property (nonatomic, copy) NSDictionary *selected;
@property (nonatomic, copy) NSArray *data;

@end
