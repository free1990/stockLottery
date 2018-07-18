#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "GJRedDot.h"
#import "GJRedDotInfo.h"
#import "GJRedDotManager.h"
#import "GJRedDotModel.h"
#import "GJRedDotModelProtocol.h"
#import "GJRedDotProtocol.h"
#import "GJRedDotView.h"
#import "NSObject+GJRedDotHandler.h"
#import "UITabBarItem+GJRedDot.h"
#import "UIView+GJRedDot.h"
#import "GJDeallocBlockExecutor.h"
#import "NSObject+GJDeallocBlockExecutor.h"

FOUNDATION_EXPORT double GJRedDotVersionNumber;
FOUNDATION_EXPORT const unsigned char GJRedDotVersionString[];

