//
//  DetailViewController.h
//  Do-it
//
//  Created by Chaithanya K Mummidisetty on 1/30/14.
//  Copyright (c) 2014 Chaithanya K Mummidisetty. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
