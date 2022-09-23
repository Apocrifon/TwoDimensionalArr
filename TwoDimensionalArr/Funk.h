#pragma once

#include <iostream>
#include <ctime>

using namespace std;

void SetRandValueForInt(int** array, int rowsSize, int columsSize)
{
    srand(time(NULL));
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columsSize; j++)
            array[i][j] = -10000 + rand() % (20001);
    }
}

void PrintArray(int** array, int rowsSize, int columnsSize)
{
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columnsSize; j++)
        {
            cout << array[i][j]  << " ";
        }
        cout << endl;
    }
}

int* TranformTwoDimInOne(int** parentsArray, int rowsSize, int columnsSize)
{
    int* result = new int[rowsSize * columnsSize];
    int index = 0;
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columnsSize; j++)
        {
            result[index] = parentsArray[i][j];
            index++;
        }
    }
    return result;
}

int** TransformOneDinInTwo(int* parentsArray, int rowsSize, int columnsSize)
{
    int index = 0;
    int** result = new int* [rowsSize];
    for (int i = 0; i < rowsSize; i++)
        result[i] = new int[columnsSize];
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columnsSize; j++)
        {
            result[i][j] = parentsArray[index];
            index++;
        }
        cout << endl;
    }
    return result;
}

long SumOfRow(int**array, int size, int index)
{
    long result = 0;
    for (int i = 0; i < size; i++)
    {
        result += array[index][i];
    }
    return result;
}

long SumOfColumn(int** array, int size, int index)
{
    long result = 0;
    for (int i = 0; i < size; i++)
    {
        result += array[i][index];
    }
    return result;
}

long SumOfPrimaryDiagonal(int** array, int rowsSize, int columnsSize)
{
    long result = 0;
    int index = (rowsSize < columnsSize) ? rowsSize : columnsSize;
    for (int i = 0; i < index; i++)
    {
        result += array[i][i];
    }
    return result;
}

long SumOfSecondaryDiagonal(int** array, int rowsSize, int columnsSize)
{
    long result = 0;
    int maxIndex = (rowsSize > columnsSize) ? rowsSize : columnsSize;
    int minIndex= (rowsSize > columnsSize) ? columnsSize : rowsSize;
    for (int i = maxIndex-1, j=0; j < minIndex; i--, j++)
    {
             result += array[j][i];
    }
    return result;
}

long MultOfRow(int** array, int size, int index)
{
    long result = 1;
    for (int i = 0; i < size; i++)
    {
        result *= array[index][i];
    }
    return result;
}

long MultOfColumn(int** array, int size, int index)
{
    long result = 1;
    for (int i = 0; i < size; i++)
    {
        result *= array[i][index];
    }
    return result;
}

long MultOfPrimaryDiagonal(int** array, int rowsSize, int columnsSize)
{
    long result = 1;
    int index = (rowsSize < columnsSize) ? rowsSize : columnsSize;
    for (int i = 0; i < index; i++)
    {
        result *= array[i][i];
    }
    return result;
}

long MultOfSecondaryDiagonal(int** array, int rowsSize, int columnsSize)
{
    long result = 1;
    int maxIndex = (rowsSize > columnsSize) ? rowsSize : columnsSize;
    int minIndex = (rowsSize > columnsSize) ? columnsSize : rowsSize;
    for (int i = maxIndex - 1, j = 0; j < minIndex; i--, j++)
    {
        result *= array[j][i];
    }
    return result;
}