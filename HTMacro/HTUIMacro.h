//
//  HTUIMacro.h
//  HTPlace
//
//  Created by Mr.hong on 2020/5/26.
//  Copyright © 2020 Mr.hong. All rights reserved.
//

#ifndef HTUIMacro_h
#define HTUIMacro_h


// 放UI相关的工具宏定义
// 屏幕宽高
#define SCREEN_W [UIScreen mainScreen].bounds.size.width
#define SCREEN_H [UIScreen mainScreen].bounds.size.height
#define KEYWINDOW [UIApplication sharedApplication].keyWindow

// 状态栏高度
#define HTStatusBarHeight ([UIApplication sharedApplication].statusBarFrame.size.height)

// 导航栏高度
#define HTNavigationBarHeight (HTStatusBarHeight + 44)

// 标签栏高度
#define HTTabBarHeight (HTStatusBarHeight > 20 ? 83 : 49)

// 底部安全区域高度
#define HTTabBarBottomHeight (HTStatusBarHeight > 20 ? 34 : 0)

// 顶部新增高度
#define HTStatusBarTopHeight (HTStatusBarHeight > 20 ? 24 : 0)

#endif /* HTUIMacro_h */
