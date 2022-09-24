#pragma once
#include <iostream>
using namespace std;

void PrintMatrix(int** array, int rowsSize, int columnsSize)
{
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columnsSize; j++)
        {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
}

void PrintArray(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}