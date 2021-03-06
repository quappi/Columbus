//
//  KarteViewController.h
//  Columbus
//
//  Created by Frederik Riedel on 31.10.14.
//  Copyright (c) 2014 Frederik Riedel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Mapbox.h"
#import "MenuView.h"
#import "SettingsViewController.h"
#import "MainViewController.h"
#import "AktuellsteListe.h"
#import "RMConfiguration.h"
#import "RMMarker.h"

@interface KarteViewController : UIViewController <MenuDelegate, RMMapViewDelegate>
@property(nonatomic)RMMapView *mapView;

@end
