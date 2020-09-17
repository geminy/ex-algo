#include <iostream>

#include "sort.h"

using namespace std;

int InsertSort(int *data, int size)
{
    int step = 0;

    cout << "step:" << step << " data:";
    for (int i = 0; i < size; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < size; ++i) {
        int temp = data[i];
        int index = i - 1;
        while (index >= 0) {
            ++step;
            if (temp >= data[index]) {
                break;
            }
            data[index + 1] = data[index];
            --index;

            cout << "step:" << step << " data:";
            for (int i = 0; i < size; ++i) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
        data[index + 1] = temp;

        cout << "step:" << step << " data:";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    return step;
}

