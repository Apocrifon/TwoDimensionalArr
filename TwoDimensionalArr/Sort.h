#pragma once
#include <iostream>

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
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columnsSize; j++)
        {
            for (int z = 0; z < columnsSize - 1; z++)
            {
                for (int y = 0; y < columnsSize - 1; y++)
                {
                    if (array[y][y+1] < array[y][y+1])
                        swap(array[y][y+1], array[y][y+1    ]);
                }
            }
        }
    }
}


