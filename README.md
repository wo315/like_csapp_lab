# 学习B站up主yaangmin相关视频

第8课[视频](https://www.bilibili.com/video/BV1WK41137JT)

学习CSAPP课程，不仅仅是课程本身的书籍.

1. iMooc袁春风老师的计算机系统基础。
2. B站，绿导师原谅你了，南大相关课程的补充资料，讲师蒋岩炎
3. B站up主yaaangmin的相关视频。

目前课程内容都是3导师的视频，跟着写下来的。

基本实现了老师前7.5节课内容，一模一样。实现了add函数

下一步要开始实现递归的写法

```C
#include <stdint.h>
uint64_t sum(uint64_t n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    uint64_t a = sum(3);
    return 0;
}
```

