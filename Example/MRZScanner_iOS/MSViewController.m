//
//  MSViewController.m
//  MRZScanner_iOS
//
//  Created by mobilestar0223 on 05/20/2021.
//  Copyright (c) 2021 mobilestar0223. All rights reserved.
//

#import "MSViewController.h"
#import <MRZScanner_iOS/MRZScanner_iOS.h>

@interface MSViewController ()

@end

@implementation MSViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    [MRZScanner initializeScanner];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
