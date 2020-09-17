#include <iostream>

#include "sort.h"

using namespace std;

int SelectionSort(int *data, int size)
{
    int step = 0;
    int min = 0;

    cout << "step:" << step << " data:";
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size - 1; ++i) {
        min = i;
        for (int j = i + 1; j < size; ++j) {
            ++step;
            if (data[min] > data[j]) {
                min = j;
            }
        }
        if (min != i) {
            int temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }

        cout << "step:" << step << " data:";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    return step;
}

int SelectionSort2(int *data, int size)
{
    int step = 0;
    int min = 0;
    int max = 0;

    cout << "step:" << step << " data:";
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < size / 2; ++i) {
        min = i;
        max = i;
        for (int j = i + 1; j < size - i; ++j) {
            ++step;
            if (data[min] > data[j]) {
                min = j;
            }
            if (data[max] < data[j]) {
                max = j;
            }
        }
        if (min != i) {
            int temp = data[i];
            data[i] = data[min];
            data[min] = temp;
        }
        if (max != size - i - 1) {
            if (max == i) {
                max = min;
            }
            int temp = data[size - i - 1];
            data[size - i - 1] = data[max];
            data[max] = temp;
        }

        cout << "step:" << step << " data:";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    return step;
}
