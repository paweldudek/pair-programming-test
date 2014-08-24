/*
 * Copyright 2014 Taptera Inc. All rights reserved.
 */


#import <Foundation/Foundation.h>

@class ACAccountStore;


@interface MainViewController : UIViewController

@property(nonatomic, strong) ACAccountStore *store;


@end
