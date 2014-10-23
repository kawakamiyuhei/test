//
//  DetailViewController.h
//  test
//
//  Created by kawakami_mac on 2014/10/23.
//  Copyright (c) 2014年 kawakami_mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

