//
//  IAMasterViewController.h
//  InvoiceApprover
//
//  Created by Jason Dawes on 9/20/13.
//  Copyright (c) 2013 Jason Dawes. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IADetailViewController;

@interface IAMasterViewController : UITableViewController

@property (strong, nonatomic) IADetailViewController *detailViewController;

@end
