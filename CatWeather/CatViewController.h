//
//  CatViewController.h
//  CatWeather
//
//  Created by tsubasa on 2014/02/02.
//  Copyright (c) 2014年 tsubasa. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CatViewController : UIViewController
- (IBAction)updateValue:(UISlider *)sender;
@property (weak, nonatomic) IBOutlet UILabel *valueLabel;

@end
