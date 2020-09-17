# 枚举算法

## 定义

枚举算法，就是穷举问题的所有可能的解，然后根据条件找到正确的解。

## 优点

简单粗暴，大多数情况下有效。

## 缺点

因为是穷举，所以在数据规模庞大的情况下，耗时耗力，浪费资源，还有可能在限定时间内找不到解。

## 优化

添加约束条件，减少穷举规模。

## 例子

 - 买鸡问题

公鸡每只5元，母鸡每只3元，三只小鸡1元，用100元买100只鸡，问公鸡、母鸡、小鸡各多少只？

 - 问题分析
 
首先，可以看到有两个基本条件，100元和100只鸡，设公鸡x只，母鸡y只，小鸡便是100-x-y只，然后判断100-x-y是否是3的整数倍，同时满足5x+3y+(100-x-y)/3等于100，如果成立，则找到了一个解。在穷举过程中，从0开始，公鸡x的最大值为100/5等于20，母鸡y的最大值为100/3等于33，0和最大值可以理解为穷举过程中的约束条件。

 - 代码示例[code](https://github.com/geminy/algo/blob/master/algo/search/src/EnumSearch.cpp)

```
#include <iostream>

#include "Search.h"

namespace algo {
    void enumSearchTest() {
        std::cout << "enumSearchTest begin" << std::endl;

        int cock = 0;
        int hen = 0;
        int chick = 0;
        int cockMax = 100 / 5;
        int henMax = 100 / 3;
        for (; cock <= cockMax; cock++) {
            for (hen = 0; hen <= henMax; hen++) {
                chick = 100 - cock - hen;
                if (chick % 3 == 0 && cock * 5 + hen * 3 + chick / 3 == 100) {
                    std::cout << "cock=" << cock << " hen=" << hen << " chick=" << chick << std::endl;
                }
            }
        }

        std::cout << "enumSearchTest end" << std::endl;
    }
}
```

 - 答案

公鸡cock 母鸡hen 小鸡chick 

cock=0 hen=25 chick=75  
cock=4 hen=18 chick=78  
cock=8 hen=11 chick=81  
cock=12 hen=4 chick=84
