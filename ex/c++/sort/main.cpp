#include "sort.h"

void TestBubbleSort()
{
    int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    BubbleSort(data, 10);

    int data2[10] = { 0 };
    BubbleSort(data2, 10);
}

void TestSelectionSort()
{
    int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    SelectionSort(data, 10);

    int data2[10] = { 0 };
    SelectionSort(data2, 10);
}

void TestSelectionSort2()
{
    int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    SelectionSort2(data, 10);

    int data2[10] = { 0 };
    SelectionSort2(data2, 10);
}

void TestInsertSort()
{
    int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    InsertSort(data, 10);

    int data2[10] = { 0 };
    InsertSort(data2, 10);
}

void TestQuickSort()
{
    int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    QuickSort(data, 0, 9);

    int data2[10] = { 0 };
    QuickSort(data2, 0, 9);
}

void TestQuickSort2()
{
    int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    QuickSort2(data, 0, 9);

    int data2[10] = { 0 };
    QuickSort2(data2, 0, 9);
}

void TestHeapSort()
{
    int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    HeapSort(data, 10);

    int data2[10] = { 0 };
    HeapSort(data2, 10);
}

void TestShellSort()
{
    int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    ShellSort(data, 10);

    int data2[10] = { 0 };
    ShellSort(data2, 10);
}

void TestMergeSort()
{
    int data[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    MergeSort(data, 10);

    int data2[10] = { 0 };
    MergeSort(data2, 10);
}

int main()
{
//    TestBubbleSort();
//    TestSelectionSort();
//    TestSelectionSort2();
//    TestInsertSort();
//    TestQuickSort();
//    TestQuickSort2();
//    TestHeapSort();
    TestShellSort();
//    TestMergeSort();

    return 0;
}

