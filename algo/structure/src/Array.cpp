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

