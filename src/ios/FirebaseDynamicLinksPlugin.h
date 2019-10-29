#import <Cordova/CDV.h>
#import "AppDelegate.h"

@import Firebase;

@interface FirebaseDynamicLinksPlugin : CDVPlugin

- (void)onDynamicLink:(CDVInvokedUrlCommand *)command;
- (void)createDynamicLink:(CDVInvokedUrlCommand *)command;
- (void)postDynamicLink:(FIRDynamicLink*) dynamicLink;
- (void)postNonDynamicLink:(NSURL*) nonDynamicLink;

@property (nonatomic, copy) NSString* domainUriPrefix;
@property (nonatomic, copy) NSString* appDomain;
@property (nonatomic, copy) NSString* dynamicLinkCallbackId;
@property (nonatomic, retain) NSDictionary* lastDynamicLinkData;

@end
