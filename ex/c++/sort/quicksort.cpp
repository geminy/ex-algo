#include <iostream>

#include "sort.h"

using namespace std;

int QuickSort(int *data, int left, int right)
{
    int index = left;
    int pivot = data[index];

    for (int i = left + 1; i <= right; ++i) {
        if (data[i] < pivot) {
            ++index;
            if (index != i) {
                int temp = data[index];
                data[index] = data[i];
                data[i] = temp;
            }
        }
    }
    if (index != left) {
        data[left] = data[index];
        data[index] = pivot;
    }

    if (index -1 > left) {
        QuickSort(data, left, index -1);
    }
    if (index + 1 < right) {
        QuickSort(data, index + 1, right);
    }

    static int step = 0;
    ++step;
    cout << "step:" << step << " data:";
    for (int i = left; i <= right; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}

int QuickSort2(int *data, int left, int right)
{
    int begin = left;
    int end = right;
    int pivot = data[begin];

    while (begin < end) {
        while (begin < end && data[end] >= pivot) {
            --end;
        }
        data[begin] = data[end];
        while (begin < end && data[begin] <= pivot) {
            ++begin;
        }
        data[end] = data[begin];
    }
    data[begin] = pivot;

    if (begin - 1 > left) {
        QuickSort2(data, left, begin - 1);
    }
    if (begin + 1 < right) {
        QuickSort2(data, begin + 1, right);
    }

    static int step = 0;
    ++step;
    cout << "step:" << step << " data:";
    for (int i = left; i <= right; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
