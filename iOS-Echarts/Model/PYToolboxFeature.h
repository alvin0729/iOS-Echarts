//
//  PYToolboxFeature.h
//  iOS-Echarts
//
//  Created by Pluto-Y on 15/9/18.
//  Copyright (c) 2015年 pluto-y. All rights reserved.
//

#import <Foundation/Foundation.h>

@class PYLineStyle, PYOption;

@interface PYToolboxFeatureMarkTitle : NSObject

@property (nonatomic, copy) NSString *mark;
@property (nonatomic, copy) NSString *markUndo;
@property (nonatomic, copy) NSString *markClear;

@end

@interface PYToolboxFeatureMark : NSObject

@property (nonatomic, assign) BOOL show;
@property (nonatomic, strong) PYToolboxFeatureMarkTitle *title;
@property (nonatomic, strong) PYLineStyle *lineStyle;

@end

@interface PYToolboxFeatureDataZoomTitle : NSObject

@property (nonatomic, copy) NSString *dataZoom;
@property (nonatomic, copy) NSString *dataZoomReset;

@end

@interface PYToolboxFeatureDataZoom : NSObject

@property (nonatomic, assign) BOOL show;
@property (nonatomic, strong) PYToolboxFeatureDataZoomTitle *title;

@end

@interface PYToolboxFeatureDataView : NSObject

@property (nonatomic, assign) BOOL show;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) BOOL readOnly;
@property (nonatomic, copy) NSArray *lang;

@end

@interface PYToolboxFeatureMagicTypeTitle : NSObject

@property (nonatomic, copy) NSString *line;
@property (nonatomic, copy) NSString *bar;
@property (nonatomic, copy) NSString *stack;
@property (nonatomic, copy) NSString *tiled;
@property (nonatomic, copy) NSString *force;
@property (nonatomic, copy) NSString *chord;
@property (nonatomic, copy) NSString *pie;
@property (nonatomic, copy) NSString *funnel;

@end

@interface PYToolboxFeatureMagicType : NSObject

@property (nonatomic, assign) BOOL show;
@property (nonatomic, strong) PYToolboxFeatureMagicTypeTitle *title;
@property (nonatomic, strong) PYOption *option;
@property (nonatomic, copy) NSArray *type;

@end

@interface PYToolboxFeatureRestore : NSObject

@property (nonatomic, assign) BOOL show;
@property (nonatomic, copy) NSString *title;

@end

@interface PYToolboxFeatureSaveAsImage : NSObject

@property (nonatomic, assign, getter=isShow) BOOL show;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *lang;

@end


@interface PYToolboxFeature : NSObject

@property (nonatomic, strong) PYToolboxFeatureMark *mark;
@property (nonatomic, strong) PYToolboxFeatureDataZoom *dataZoom;
@property (nonatomic, strong) PYToolboxFeatureDataView *dataView;
@property (nonatomic, strong) PYToolboxFeatureMagicType *magicType;
@property (nonatomic, strong) PYToolboxFeatureRestore *restore;
@property (nonatomic, strong, getter=getSaveAsImage) PYToolboxFeatureSaveAsImage *saveAsImage NS_EXTENSION_UNAVAILABLE_IOS("Use UIAlertController instead.");


@end
