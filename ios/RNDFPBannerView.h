#if __has_include(<React/RCTComponent.h>)
#import <React/RCTView.h>
#else
#import "RCTView.h"
#endif

#if __has_include(<GoogleMobileAds/GoogleMobileAds.h>)
#import <GoogleMobileAds/GoogleMobileAds.h>
#else
@import GoogleMobileAds;
#endif

@class RCTEventDispatcher;

@interface RNDFPBannerView : RCTView <GADBannerViewDelegate, GADAdSizeDelegate, GADAppEventDelegate>

@property (nonatomic, copy) NSArray *validAdSizes;
@property (nonatomic, copy) NSArray *testDevices;

@property (nonatomic, copy) RCTBubblingEventBlock onSizeChange;
@property (nonatomic, copy) RCTBubblingEventBlock onAppEvent;
@property (nonatomic, copy) RCTBubblingEventBlock onAdLoaded;
@property (nonatomic, copy) RCTBubblingEventBlock onAdFailedToLoad;
@property (nonatomic, copy) RCTBubblingEventBlock onAdOpened;
@property (nonatomic, copy) RCTBubblingEventBlock onAdClosed;
@property (nonatomic, copy) RCTBubblingEventBlock onAdLeftApplication;

- (void)loadBanner;

@end

