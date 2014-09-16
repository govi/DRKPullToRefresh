//
//  DRKPullToRefresh.h
//  DRKPullToRefresh
//
//  Created by Sergi Gracia on 09/05/13.
//  Copyright (c) 2013 Sergi Gracia. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AvailabilityMacros.h>

@class DRKPullToRefreshView;
@class RTSpinKitView;

@interface UIScrollView (DRKPullToRefresh)

- (void)addPullToRefreshWithActionHandler:(void (^)(void))actionHandler;
- (void)addPullToRefreshWithActionHandler:(void (^)(void))actionHandler withBackgroundColor:(UIColor *)customBackgroundColor;
- (void)addPullToRefreshWithActionHandler:(void (^)(void))actionHandler withBackgroundColor:(UIColor *)customBackgroundColor withPullToRefreshHeightShowed:(CGFloat)pullToRefreshHeightShowed;

@property (nonatomic, strong) DRKPullToRefreshView *pullToRefreshView;
@property (nonatomic, assign) BOOL showsPullToRefresh;

@end

enum {
    DRKPullToRefreshStateStopped = 0,
    DRKPullToRefreshStateTriggered,
    DRKPullToRefreshStateLoading,
    DRKPullToRefreshStateAll = 10
};

typedef NSUInteger DRKPullToRefreshState;


@interface DRKPullToRefreshView : UIView

@property (nonatomic, strong) UIColor *arrowColor;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, strong) UIFont *textFont;
@property (nonatomic, strong, readonly) UILabel *titleLabel;
@property (nonatomic, strong, readonly) RTSpinKitView *loaderView;
@property (nonatomic, readonly) DRKPullToRefreshState state;

- (void)setTitle:(NSString *)title forState:(DRKPullToRefreshState)state;
- (void)startAnimating;
- (void)stopAnimating;

@end
