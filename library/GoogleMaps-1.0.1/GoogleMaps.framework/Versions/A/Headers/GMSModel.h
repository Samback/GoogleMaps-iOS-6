//
//  GMSModel.h
//  Google Maps SDK for iOS
//
//  Copyright 2012 Google Inc.
//
//  Usage of this SDK is subject to the Google Maps/Google Earth APIs Terms of
//  Service: https://developers.google.com/maps/terms
//

#import <CoreGraphics/CoreGraphics.h>
#import <CoreLocation/CoreLocation.h>

/**
 * The maximum zoom (closest to the Earth's surface) permitted by the map
 * camera.
 */
FOUNDATION_EXTERN const CGFloat kGMSMaxZoomLevel;

/**
 * The minimum zoom (farthest from the Earth's surface) permitted by the map
 * camera.
 */
FOUNDATION_EXTERN const CGFloat kGMSMinZoomLevel;

/**
 * Describes a camera position.
 */
typedef struct {
  /** Location on the Earth at which the camera points. */
  CLLocationCoordinate2D target;

  /**
   * Zoom level. Zoom uses an exponentional scale, where zoom 0 represents the
   * entire world as a 256 x 256 square. Each successive zoom level increases
   * magnification by a factor of 2. At zoom 10, the entire world is a 256k x
   * 256k square, and so on.
   */
  CGFloat zoom;
} GMSCamera;

/**
 * Makes a camera position.
 *
 * @param latitude Latitude, in degrees.
 * @param longitude Longitude, in degrees.
 * @param zoom Zoom level.  This value is clamped to the range
 *        [kGMSMinZoomLevel, kGMSMaxZoomLevel].
 */
FOUNDATION_EXTERN
GMSCamera GMSCameraMake(CLLocationDegrees latitude,
                        CLLocationDegrees longitude,
                        CGFloat zoom);
