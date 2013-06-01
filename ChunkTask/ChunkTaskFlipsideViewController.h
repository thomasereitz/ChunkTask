//
//  ChunkTaskFlipsideViewController.h
//  ChunkTask
//
//  Created by THOMAS REITZ on 6/1/13.
//  Copyright (c) 2013 THOMAS REITZ. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ChunkTaskFlipsideViewController;

@protocol ChunkTaskFlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(ChunkTaskFlipsideViewController *)controller;
@end

@interface ChunkTaskFlipsideViewController : UIViewController

@property (weak, nonatomic) id <ChunkTaskFlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
