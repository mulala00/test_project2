//
//  DetailViewController.h
//  dsfds
//
//  Created by mulala on 16/8/17.
//  Copyright © 2016年 mulala. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

