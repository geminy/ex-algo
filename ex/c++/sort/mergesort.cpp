#include <iostream>

#include "sort.h"

using namespace std;

void MergeSortConquer(int *data, int first, int mid, int last, int *temp)
{
    int lfirst = first;
    int rfirst = mid + 1;
    int llast = mid;
    int rlast = last;
    int index = 0;

    while (lfirst <= llast && rfirst <= rlast) {
        if (data[lfirst] < data[rfirst]) {
            temp[index++] = data[lfirst++];
        }
        else {
            temp[index++] = data[rfirst++];
        }
    }

    while (lfirst <= llast) {
        temp[index++] = data[lfirst++];
    }
    while (rfirst <= rlast) {
        temp[index++] = data[rfirst++];
    }

    for (int i = 0; i < index; ++i) {
        data[first + i] = temp[i];
    }
}

void MergeSortDivide(int *data, int first, int last, int *temp)
{
    if (first < last) {
        int mid = (first + last) / 2;
        MergeSortDivide(data, first, mid, temp);
        MergeSortDivide(data, mid + 1, last, temp);
        MergeSortConquer(data, first, mid, last, temp);
    }
}

int MergeSort(int *data, int size)
{
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    int *temp = new int[size];
    MergeSortDivide(data, 0, size - 1, temp);
    delete[] temp;

    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
