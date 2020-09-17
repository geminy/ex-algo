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

