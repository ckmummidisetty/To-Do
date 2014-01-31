//
//  MasterViewController.h
//  Do-it
//
//  Created by Chaithanya K Mummidisetty on 1/30/14.
//  Copyright (c) 2014 Chaithanya K Mummidisetty. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
