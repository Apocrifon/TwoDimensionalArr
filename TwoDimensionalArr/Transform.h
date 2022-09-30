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
            array[i][j] = -5 + rand() % (10);
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

int** MultMatrixOnMatrix(int** array, int rowsSize, int columnsSize, int** matrix, int matrixRowsSize, int matrixColumnSize )
{
    if (columnsSize != matrixRowsSize)
    {
        cout << "Wrong matrix size" << endl;
        return NULL;
    }
    int** result = new int* [rowsSize];
    for (int i = 0; i < rowsSize; i++)
        result[i] = new int[matrixColumnSize];
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < matrixColumnSize; j++)
        {
            //result[i][j] = 0;
            for (int m = 0; m < columnsSize; m++)
            {
                for (int n = 0; n < columnsSize; n++)
                {
                    result[i][j] += array[m][n] * matrix[n][m];
                }
            }
        }
    }
    return result;
}

void MultMatrixColumnOnDigit(int** array, int row, int columnsSize, int digit)
{
    for (int i = 0; i < columnsSize; i++)
    {
        array[row][i] *= digit;
    }
}

void DivideMatrixColumnOnDigit(int** array, int row, int columnsSize, int digit)
{
    for (int i = 0; i < columnsSize; i++)
    {
        array[row][i] /= digit;
    }
}

int** TransposeMatrix(int** array, int rowsSize, int columnsSize)
{
    int** result = new int* [columnsSize];
    for (int i = 0; i < columnsSize; i++)
        result[i] = new int[rowsSize];
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = 0; j < columnsSize; j++)
        {
            result[j][i] = array[i][j];
        }
    }
    return result;
}






// cyka
/// да бля почему эта хуета не робит
//ладно я заебался