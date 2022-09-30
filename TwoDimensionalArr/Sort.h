#pragma once
#include <iostream>
#include "Transform.h"

using namespace std;

void SortRow(int** array, int columnsSize, int row)
{
    for (int i = 0; i < columnsSize - 1; i++)
    {
        for (int j = 0; j < columnsSize - 1; j++)
        {
            if (array[row][j + 1] < array[row][j])
                swap(array[row][j], array[row][j + 1]);
        }
    }
}

void SortColumn(int** array, int rowsSize, int column)
{
    for (int i = 0; i < rowsSize - 1; i++)
    {
        for (int j = 0; j < rowsSize - 1; j++)
        {
            if (array[j + 1][column] < array[j][column])
                swap(array[j][column], array[j + 1][column]);

        }
    }
}

void SortInMatrix(int** array, int rowsSize, int columnsSize)
{
    int* arr = new int[rowsSize * columnsSize];
    arr = TranformTwoDimInOne(array, rowsSize, columnsSize);
    for (int i = 0; i < rowsSize * columnsSize - 1; i++)
    {
        for (int j = 0; j < rowsSize * columnsSize - 1; j++)
        {
            if (array[j + 1] < array[j])
                swap(array[j], array[j + 1]);
        }
    }
}


