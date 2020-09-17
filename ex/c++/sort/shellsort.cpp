#include <iostream>

#include "sort.h"

using namespace std;

void ShellSortInsert(int *data, int size, int inc)
{
    cout << inc << endl;

    for (int i = inc; i < size; ++i) {
        if (data[i] < data[i - inc]) {
            int j = i - inc;
            int t = data[i];
            while (j >=0 && t < data[j]) {
                data[j + inc] = data[j];
                j -= inc;
            }
            data[j + inc] = t;

            for (int i = 0; i < size; ++i) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }
}

int ShellSort(int *data, int size)
{
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    int inc = size / 2;
    while (inc >= 1) {
        ShellSortInsert(data, size, inc);
        inc = inc / 2;
    }

    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}


