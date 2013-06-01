//
//  ChunkTaskAppDelegate.h
//  ChunkTask
//
//  Created by THOMAS REITZ on 6/1/13.
//  Copyright (c) 2013 THOMAS REITZ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChunkTaskAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
