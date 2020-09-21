//
//  HTChangePresentToPushTransitionsAnimateManger.h
//  HTPlace
//
//  Created by Mr.hong on 2020/9/21.
//  Copyright © 2020 Mr.hong. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HTChangePresentToPushTransitionsAnimateManger : NSObject<UIViewControllerAnimatedTransitioning>
/**
 isPush
 */
@property(nonatomic, readwrite, assign)BOOL isPush;
@end

NS_ASSUME_NONNULL_END
