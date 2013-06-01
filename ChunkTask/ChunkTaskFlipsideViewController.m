//
//  ChunkTaskFlipsideViewController.m
//  ChunkTask
//
//  Created by THOMAS REITZ on 6/1/13.
//  Copyright (c) 2013 THOMAS REITZ. All rights reserved.
//

#import "ChunkTaskFlipsideViewController.h"

@interface ChunkTaskFlipsideViewController ()

@end

@implementation ChunkTaskFlipsideViewController

- (void)awakeFromNib
{
    self.contentSizeForViewInPopover = CGSizeMake(320.0, 480.0);
    [super awakeFromNib];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Actions

- (IBAction)done:(id)sender
{
    [self.delegate flipsideViewControllerDidFinish:self];
}

@end
