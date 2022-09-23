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
            cout << array[i][j]  << "\t";
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

int* MinElemInMatrix(int** array, int rowsSize, int columnsSize)
{
    int result[2];
    int MinNumber = array[0][0];
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columnsSize; j++)
        {
            if (MinNumber > array[i][j])
            {
                result[0] = i;
                result[1] = j;
                MinNumber = array[i][j];
            }
        }
    }
    return result;
}

int* MaxElemInMatrix(int** array, int rowsSize, int columnsSize)
{
    int result[2];
    int MaxNumber = array[0][0];
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columnsSize; j++)
        {
            if (MaxNumber < array[i][j])
            {
                result[0] = i;
                result[1] = j;
                MaxNumber = array[i][j];
            }
        }
    }
    return result;
}

int* MaxElemInRows(int** array, int columnsSize, int row)
{
    int result[] {row, 0};
    int MaxNumber = array[row][0];
    for (int i = 0; i < columnsSize; i++)
    {
        if (MaxNumber < array[row][i])
        {
            result[1] = i;
            MaxNumber = array[row][i];
        }
    } 
    return result;
}

int* MaxElemInRows(int** array, int columnsSize, int row)
{
    int result[]{ row, 0 };
    int MaxNumber = array[row][0];
    for (int i = 0; i < columnsSize; i++)
    {
        if (MaxNumber < array[row][i])
        {
            result[1] = i;
            MaxNumber = array[row][i];
        }
    }
    return result;
}

// cyka
/// да бля почему эта хуета не робит
//ладно я заебался