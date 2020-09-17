# 数组

## 定义

数组，是一组相同的数据类型的元素的集合，是一个有序的元素序列。

## 特点

- 数组的标志性符号是`[]`。
- 一般情况下，各编程语言除了基本的数组之外，还提供了类似于数组的模板类容器，增加了许多有用的操作。
- 数组通过索引（下标）直接访问元素，包括查找和修改，效率高。
- 数组增加或删除元素时，需要移动其它元素，有时还要重新分配内存空间，代价较高。容器一般会预留一块内存空间用于扩充，不够用时重新分配内存空间。
- 数组中各元素在物理意义上是存储在一块连续的地址空间上。

## 例子

- 代码示例[code](https://github.com/geminy/ex-algo/blob/master/algo/structure/src/Array.cpp)

```
#include <cstdio>

#include "Structure.h"

namespace algo {
    void arrayTest() {
        printf("arrayTest begin\n");

        int arr[] = {1, 2, 3, 4, 5};
        for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
            printf("index=%d addr=%p value=%d\n", i, &arr[i], arr[i]);
        }
        printf("addr begin=%p, step=%d, count=%d, end=%p\n",
               arr, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), arr + sizeof(arr) / sizeof(arr[0]) - 1);

        printf("arrayTest end\n");
    }
}
```

- 输出

index=0 addr=0x7ffdd6e4a500 value=1  
index=1 addr=0x7ffdd6e4a504 value=2  
index=2 addr=0x7ffdd6e4a508 value=3  
index=3 addr=0x7ffdd6e4a50c value=4  
index=4 addr=0x7ffdd6e4a510 value=5  
addr begin=0x7ffdd6e4a500, step=4, count=5, end=0x7ffdd6e4a510

- 分析

上面的例子中，对地址做加法操作时，如`addr + 1`，结果取决于地址`addr`中存储的元素的数据类型的长度（Byte），如`int`为`4`，也就是说`1`表示一个元素的长度，而不是一个Byte。

- 参考

[C++ array](http://www.cplusplus.com/reference/array/)  
[C++ vector](http://www.cplusplus.com/reference/vector/)
