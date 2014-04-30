//
//  IADetailViewController.h
//  InvoiceApprover
//
//  Created by Jason Dawes on 9/20/13.
//  Copyright (c) 2013 Jason Dawes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface IADetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
