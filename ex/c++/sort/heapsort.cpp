#include <iostream>

#include "sort.h"

using namespace std;

void HeapAdjust(int *data, int size, int root)
{
    int child = root * 2 + 1;
    while (child < size) {
        if (child + 1 < size && data[child + 1] > data[child]) {
            ++child;
        }
        if (data[child] > data[root]) {
            data[root] = data[root] ^ data[child];
            data[child] = data[root] ^ data[child];
            data[root] = data[root] ^ data[child];
            root = child;
            child = root * 2 + 1;
        }
        else {
            break;
        }
    }
}

int HeapSort(int *data, int size)
{
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    for (int i = size / 2 - 1; i >= 0; --i) {
        HeapAdjust(data, size, i);
    }

    for (int i = 0; i < size - 1; ++i) {
        {
            data[size -1 -i] = data[size -1 -i] ^ data[0];
            data[0] = data[size -1 -i] ^ data[0];
            data[size -1 -i] = data[size -1 -i] ^ data[0];
        }
        HeapAdjust(data, size - 1 - i, 0);
    }

    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
