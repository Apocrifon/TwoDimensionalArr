#pragma once

using namespace std;

long SumOfRow(int** array, int size, int index)
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
    int minIndex = (rowsSize > columnsSize) ? columnsSize : rowsSize;
    for (int i = maxIndex - 1, j = 0; j < minIndex; i--, j++)
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
    int minIndex = (rowsSize > columnsSize) ? columnsSize : rowsSize;
    int j = 0;
    for (int i = 0; i < minIndex; i++)
    {
        j++;
        result *= array[j][columnsSize - j];
    }
    return result;
}