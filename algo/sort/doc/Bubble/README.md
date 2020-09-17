# 冒泡排序

## 定义

冒泡排序，就是从头到尾逐个比较相邻位置的两个元素，将较大的元素放在后面，一轮比较下来，最大的元素便出现在尾部，依次类推，循环比较、交换相邻元素的位置，大的元素便逐渐从尾部冒出来，直到所有的元素有序（从小到大）。

## 步骤

1. 从头到尾逐个比较相邻位置的两个元素。
2. 如果前面的元素比后面的元素大，则交换它们的位置。
3. 重复上述步骤，直到所有元素有序。

## 特点

- 平均时间复杂度 O(n^2)
- 最好时间复杂度 O(n)
- 最坏时间复杂度 O(n^2)
- 空间复杂度 O(1)
- 稳定
- 内排

## 图解

![](Bubble.gif)

## 代码示例

```
#include <iostream>

#include "Sort.h"

namespace algo {
    void bubbleSort(int data[], int count) {
        bool swapped = false;
        int temp = 0;
        for (int i = 0; i < count - 1; ++i) {
            swapped = false;
            for (int j = 0; j < count - 1 - i; ++j) {
                if (data[j] > data[j + 1]) {
                    swapped = true;
                    temp = data[j];
                    data[j] = data[j + 1];
                    data[j + 1] = temp;
                }
            }
            if (!swapped) {
                return;
            }
        }
    }

    void bubbleSortTest() {
        std::cout << "bubbleSortTest begin" << std::endl;

        int data[] = {3, 44, 38, 5, 47, 15, 36, 26, 27, 2, 46, 4, 19, 50, 48};
        std::cout << "input: ";
        for (int i = 0; i < sizeof(data) / sizeof(int); ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
        bubbleSort(data, sizeof(data) / sizeof(int));
        std::cout << "output: ";
        for (int i = 0; i < sizeof(data) / sizeof(int); ++i) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "bubbleSortTest end" << std::endl;
    }
}


```

## 输出

input: 3 44 38 5 47 15 36 26 27 2 46 4 19 50 48  
output: 2 3 4 5 15 19 26 27 36 38 44 46 47 48 50 

## 分析

上面例子中，冒泡排序涉及两个for循环，控制这两个for循环的退出条件可以优化算法，另外，内层循环结束后判断有无元素交换位置，如果没有，则认为所有元素已经有序，提前结束循环，也是个优化算法的方法。
