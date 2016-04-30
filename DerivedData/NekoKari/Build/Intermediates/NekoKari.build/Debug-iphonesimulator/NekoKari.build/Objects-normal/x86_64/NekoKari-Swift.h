// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreLocation;
@import MapKit;
@import AVFoundation;
@import CoreGraphics;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class Firebase;
@class UITableView;
@class UIView;
@class NSIndexPath;
@class UILabel;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC8NekoKari30AdminAddCatTableViewController")
@interface AdminAddCatTableViewController : UITableViewController
@property (nonatomic, readonly, copy) NSString * __nonnull admin;
@property (nonatomic, readonly, strong) Firebase * __null_unspecified ref;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified snowballGPSLabel;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified smokeyGPSLabel;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified shadowGPSLabel;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified spotsGPSLabel;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified sunnyGPSLabel;
@property (nonatomic, copy) NSArray * __nonnull catRefArray;
@property (nonatomic, copy) NSString * __nonnull coord;
- (void)updateCoord;
- (void)tableView:(UITableView * __nonnull)tableView willDisplayHeaderView:(UIView * __nonnull)view forSection:(NSInteger)section;
- (void)viewDidLoad;
- (void)tableView:(UITableView * __nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * __nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class CLLocationManager;
@class CLLocation;
@class MKMapView;

SWIFT_CLASS("_TtC8NekoKari19AdminViewController")
@interface AdminViewController : UIViewController <CLLocationManagerDelegate, MKMapViewDelegate>
@property (nonatomic, readonly, copy) NSString * __nonnull admin;
@property (nonatomic, readonly, strong) Firebase * __null_unspecified ref;
- (IBAction)logOutDidTouch:(id __nonnull)sender;
- (IBAction)newGameDidTouch:(id __nonnull)sender;
@property (nonatomic, weak) IBOutlet MKMapView * __null_unspecified mapView;
@property (nonatomic, strong) CLLocationManager * __null_unspecified locationManager;
@property (nonatomic, strong) CLLocation * __null_unspecified previousLocation;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)locationManager:(CLLocationManager * __nonnull)manager didUpdateToLocation:(CLLocation * __nonnull)newLocation fromLocation:(CLLocation * __nonnull)oldLocation;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC8NekoKari11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextField;

SWIFT_CLASS("_TtC8NekoKari19LogInViewController")
@interface LogInViewController : UIViewController
@property (nonatomic, readonly, strong) Firebase * __null_unspecified ref;
@property (nonatomic, readonly, copy) NSString * __nonnull admin;
@property (nonatomic, weak) IBOutlet UITextField * __null_unspecified emailField;
@property (nonatomic, weak) IBOutlet UITextField * __null_unspecified passwordField;
- (IBAction)logInDidTouch:(id __nonnull)sender;
- (IBAction)signUpDidTouch:(id __nonnull)sender;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImageView;
@class UITextView;

SWIFT_CLASS("_TtC8NekoKari27PlayerCatBookViewController")
@interface PlayerCatBookViewController : UIViewController
@property (nonatomic, readonly, strong) Firebase * __null_unspecified ref;
@property (nonatomic, copy) NSString * __nonnull userid;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified SnowballPic;
@property (nonatomic, weak) IBOutlet UITextView * __null_unspecified SnowballText;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified SmokeyPic;
@property (nonatomic, weak) IBOutlet UITextView * __null_unspecified SmokeyText;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified ShadowPic;
@property (nonatomic, weak) IBOutlet UITextView * __null_unspecified ShadowText;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified SpotsPic;
@property (nonatomic, weak) IBOutlet UITextView * __null_unspecified SpotsText;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified SunnyPic;
@property (nonatomic, weak) IBOutlet UITextView * __null_unspecified SunnyText;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8NekoKari28PlayerFoundCatViewController")
@interface PlayerFoundCatViewController : UIViewController
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified foundCatNameLabel;
- (IBAction)findMoreCatsButtonDidTouch:(id __nonnull)sender;
- (IBAction)catBookButtonDidTouch:(id __nonnull)sender;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class AVCaptureSession;
@class AVCaptureVideoPreviewLayer;
@class AVCaptureOutput;
@class AVCaptureConnection;

SWIFT_CLASS("_TtC8NekoKari26PlayerQRCodeViewController")
@interface PlayerQRCodeViewController : UIViewController <AVCaptureMetadataOutputObjectsDelegate>
@property (nonatomic, copy) NSString * __nonnull userid;
@property (nonatomic, readonly, strong) Firebase * __null_unspecified ref;
- (IBAction)backToFindCatPageDidTouch:(id __nonnull)sender;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified cameraViewBounds;
@property (nonatomic, strong) AVCaptureSession * __nullable captureSession;
@property (nonatomic, strong) AVCaptureVideoPreviewLayer * __nullable videoPreviewLayer;
@property (nonatomic, strong) UIView * __nullable qrCodeFrameView;
@property (nonatomic, readonly, copy) NSArray<NSString *> * __nonnull supportedBarCodes;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)captureOutput:(AVCaptureOutput * __null_unspecified)captureOutput didOutputMetadataObjects:(NSArray * __null_unspecified)metadataObjects fromConnection:(AVCaptureConnection * __null_unspecified)connection;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC8NekoKari20PlayerViewController")
@interface PlayerViewController : UIViewController <CLLocationManagerDelegate, MKMapViewDelegate>
@property (nonatomic, readonly, copy) NSString * __nonnull admin;
@property (nonatomic, copy) NSString * __nonnull userid;
@property (nonatomic, readonly, strong) Firebase * __null_unspecified ref;
- (IBAction)logOutButtonDidTouch:(id __nonnull)sender;
- (IBAction)catBookButtonDidTouch:(id __nonnull)sender;
- (IBAction)foundCatButtonDidTouch:(id __nonnull)sender;
@property (nonatomic, weak) IBOutlet UILabel * __null_unspecified signal;
@property (nonatomic, weak) IBOutlet UIImageView * __null_unspecified colorSignal;
@property (nonatomic) CGFloat red;
@property (nonatomic) CGFloat green;
@property (nonatomic) CGFloat blue;
@property (nonatomic, strong) CLLocationManager * __null_unspecified locationManager;
@property (nonatomic, strong) CLLocation * __null_unspecified previousLocation;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSArray<NSNumber *> * __nonnull catLatitude;
@property (nonatomic, copy) NSArray<NSNumber *> * __nonnull catLongitude;
@property (nonatomic) double lookingForCatLat;
@property (nonatomic) double lookingForCatLong;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)locationManager:(CLLocationManager * __nonnull)manager didUpdateToLocation:(CLLocation * __nonnull)newLocation fromLocation:(CLLocation * __nonnull)oldLocation;
- (void)calculateCat;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
