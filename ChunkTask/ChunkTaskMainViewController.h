//
//  ChunkTaskMainViewController.h
//  ChunkTask
//
//  Created by THOMAS REITZ on 6/1/13.
//  Copyright (c) 2013 THOMAS REITZ. All rights reserved.
//

#import "ChunkTaskFlipsideViewController.h"

@interface ChunkTaskMainViewController : UIViewController <ChunkTaskFlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
