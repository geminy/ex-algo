#include <iostream>

#include "sort.h"

using namespace std;

int BubbleSort(int *data, int size)
{
    int step = 0;
    bool swapped = false;

    cout << "step:" << step << " data:";
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        int temp = 0;
        for (int j = 0; j < size - 1 - i; ++j) {
            ++step;
            if (data[j] > data[j + 1]) {
                swapped = true;
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }

            cout << "step:" << step << " data:";
            for (int i = 0; i < size; ++i) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
        if (!swapped) {
            return step;
        }
    }

    return step;
}
