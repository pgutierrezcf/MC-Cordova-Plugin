#import "AppDelegate.h"
#import "MarketingCloudSDK/MarketingCloudSDK.h"

@interface AppDelegate (MCCordovaPlugin)<UNUserNotificationCenterDelegate>
- (BOOL)application:(UIApplication *)application
    shouldInitMCSDKWithOptions:(NSDictionary *)launchOptions;
@end