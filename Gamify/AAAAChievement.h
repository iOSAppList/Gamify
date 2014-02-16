//
//  AAAAChievement.h
//  Gamify
//
//  Created by Håkon Bogen on 13.02.14.
//  Copyright (c) 2014 Haaakon Bogen. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AAAAchievement : NSObject

@property (nonatomic,strong, readonly) NSString   *key;
@property (nonatomic,strong, readonly) NSString   *titleText;
@property (nonatomic,strong, readonly) NSString   *descriptionText;
@property (nonatomic,strong, readonly) UIImage    *image;

- (AAAAchievement*)initWithKey:(NSString *)key titleText:(NSString*)titleText descriptionText:(NSString*)descriptionText image:(UIImage*)image;
@end