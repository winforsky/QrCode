//
//  QRCodeBuilder.h
//  QRCode
//
//  Created by spzheng on 15/5/6.
//  Copyright (c) 2015年 Moqod. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QRCodeBuilder : NSObject

+ (UIImage *)qrImageForString:(NSString *)string imageSize:(CGFloat)size;
+ (UIImage *)twoDimensionCodeImage:(UIImage *)twoDimensionCode
                   withAvatarImage:(UIImage *)avatarImage;

@end
