//
//  MPLastResortDelegate.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>

@interface MPLastResortDelegateMF : NSObject
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= 60000
<SKStoreProductViewControllerDelegate>
#endif

+ (id)sharedDelegate;

@end
