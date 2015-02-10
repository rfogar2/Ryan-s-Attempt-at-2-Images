//
//  APPViewController.h
//  Camera
//
//  Created by LTG_Ugrad on 2/10/15.
//  Copyright (c) 2015 LTG_Ugrad. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface APPViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>


@property (strong, nonatomic) IBOutlet UIImageView *imageView2;
- (IBAction)takePhoto2:(UIButton *)sender;
- (IBAction)selectPhoto2:(UIButton *)sender;


@property (strong, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)takePhoto:(UIButton *)sender;
- (IBAction)selectPhoto:(UIButton *)sender;


@end
