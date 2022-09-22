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

int SumOfRow(int**array, int size, int index)
{
    for (int i = 0; i < length; i++)
    {

    }
}

int SumOfColums(int** array, int size, int index)
{

}

int SumOfPrimaryDiagonal(int** array, int rowsSize, int columnsSize)
{

}

int SumOfSecondaryDiagonal(int** array, int rowsSize, int columnsSize)
{

}

int MultOfRow(int** array,  int size, int index)
{

}

int MultOfColums(int** array, int size, int index)
{

}

int MultOfPrimaryDiagonal(int** array, int rowsSize, int columnsSize)
{

}

int MultOfSecondaryDiagonal(int** array, int rowsSize, int columnsSize)
{

}