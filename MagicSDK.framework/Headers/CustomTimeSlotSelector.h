//
//  CustomTimeSlotSelector.h
//  iACE
//
//  Created by Deepak Purwar on 11/12/19.
//  Copyright © 2019 iotfy. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol CustomTimeSlotSelectorDelegate <NSObject>

-(void)dismissClockViewWithHours:(NSString *)hours andMinutes:(NSString *)minutes andTimeMode:(NSString *)timeMode;

@end


@interface CustomTimeSlotSelector : UIView <UIGestureRecognizerDelegate>

@property (nonatomic, strong) UIButton *doneButton;
@property (nonatomic, strong) UIButton *cancelButton;

@property (nonatomic,unsafe_unretained) id<CustomTimeSlotSelectorDelegate> delegate;

- (id)initWithView:(UIView *)view withDarkTheme:(BOOL)isDarkTheme ;

@end
