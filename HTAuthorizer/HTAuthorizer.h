//
//  HTAuthorizer.h
//  Jihuigou-Native
//
//  Created by Mr.hong on 2019/10/22.
//  Copyright © 2019 xiongbenwan. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HTAuthorizer : NSObject

/**
 检测相机权限
 @param resultBlock 返回的结果 true 为可用，false为不可用
 */
+ (void)fetchCameraAuthorizationStatus:(void(^)(BOOL result))resultBlock;

/**
 获取相册权限
 */
+ (void)fetchPhotoLibraryAuthorizationStatus:(void (^)(BOOL result))resultBlock;


/**
<<<<<<< HEAD
 检测GPS权限
=======
 获取相册权限
>>>>>>> d22f8fb9e59a6e7030cd10239725f5c6377251cd
 */
+ (void)fetchGPSAuthorizationStatus:(void (^)(BOOL result))resultBlock;


@end

NS_ASSUME_NONNULL_END
