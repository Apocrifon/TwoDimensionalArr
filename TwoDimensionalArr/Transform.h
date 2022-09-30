#pragma once
#include <ctime>
#include <iostream>

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

void MultMatrixOnVector(int** array, int rowsSize, int columnsSize, int* vector)
{
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columnsSize; j++)
        {
            array[i][j] *= vector[j];
        }
    }
}

void MultMatrixOnMatrix(int** array, int rowsSize, int columnsSize, int** matrix, int matrixRowsSize, int matrixColumnSize )
{
    int** result = new int* [rowsSize];
    for (int i = 0; i < rowsSize; i++)
        array[i] = new int[matrixColumnSize];

}






// cyka
/// да бля почему эта хуета не робит
//ладно я заебался