//
//  GMSPolylineOptions.h
//  Google Maps SDK for iOS
//
//  Copyright 2012 Google Inc.
//
//  Usage of this SDK is subject to the Google Maps/Google Earth APIs Terms of
//  Service: https://developers.google.com/maps/terms
//

#import <CoreLocation/CoreLocation.h>

/**
 * Contains options used to configure a polyline.
 */
@interface GMSPolylineOptions : NSObject<NSCopying>

/** The UIColor used to render the polyline.  Defaults to blueColor. */
@property (nonatomic, strong) UIColor *color;

/** The width of the line in screen points.  Defaults to 1. */
@property (nonatomic, assign) float width;

/**
 * The accessibility label of this polyline, as per the UIAccessibility
 * protocol.
 */
@property (nonatomic, copy) NSString *accessibilityLabel;

/** Creates and returns default initialized options. */
+ (GMSPolylineOptions *)options;

/** Adds a vertex to this GMSPolylineOptions. */
- (void)addVertex:(CLLocationCoordinate2D)vertex;

@end
