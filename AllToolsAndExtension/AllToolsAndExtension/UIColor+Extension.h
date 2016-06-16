//
//  UIColor+Extension.h
//  AllToolsAndExtension
//
//  Created by LHB on 16/6/16.
//  Copyright © 2016年 LHB. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Extension)
/**
 *  十六进制颜色转换成RGB颜色
 */
+ (UIColor *)colorWithHexString: (NSString *)color;

@end
