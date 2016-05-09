# DNPageView

##引导页简单使用

###功能介绍

大多数应用的首次安装都会出现引导页见面，简单介绍应用内容或者是对应用的几张简介图


###使用说明

    引入头文件 #import "DNPageView.h"
    
在AppDelegate中添加引导页代码

修改一下DNPageView.m中的imageNameArr数组中的图片名字然后就可以调用下面的代码


     [[DNPageView sharePageView] initPageViewToView:self.window dismiss:^{
            //引导页看完了要执行的操作（通常是记录key值保证下次启动不在加载引导页）
      }];
      
引导页默认是添加了UIPageControl小圆点的，如果你的引导页图片上有小圆点的话可以把类中的小圆点隐藏，还是一句话哦

    [DNPageView sharePageView].isPageControl = NO;

就这些东西了，是不是很简单呢，好了就这些了，具体代码看看demo就可以了
