@import UIKit;
// import RCTBridgeModule
/*#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#elif __has_include("RCTBridgeModule.h")
#import "RCTBridgeModule.h"
#else
#import "React/RCTBridgeModule.h"   // Required when used as a Pod in a Swift project
#endif
*/
#import <React/RCTBridgeModule.h>
#import <React/RCTViewManager.h>
#import <AVFoundation/AVFoundation.h>
#import <WTArchitectView.h>
#import "WikitudeView.h"

@class WikitudeView;
@interface RNWikitude : RCTViewManager <RCTBridgeModule>

@property (nonatomic, strong) RCTPromiseRejectBlock reject;

@end
