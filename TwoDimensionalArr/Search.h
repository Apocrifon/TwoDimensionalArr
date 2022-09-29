#pragma once
using namespace std;

bool IsPossitive(int a)
{
    if (a > 0)
        return 1;
    else
        return 0;
}

bool IsNegative(int a)
{
    if (a < 0)
        return 1;
    else
        return 0;
}

bool IsZero(int a)
{
    if (a == 0)
        return 1;
    else
        return 0;
}



int* MinElemInMatrix(int** array, int rowsSize, int columnsSize)
{
    static int result[2];
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
    static int result[2];
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
    static int result[]{ row , 0 };
    int MaxNumber = array[row ][0];
    for (int i = 0; i < columnsSize; i++)
    {
        if (MaxNumber < array[row ][i])
        {
            result[1] = i;
            MaxNumber = array[row ][i];
        }
    }
    return result;
}

int* MinElemInRows(int** array, int columnsSize, int row)
{
    static int result[]{ row, 0 };
    int MinNumber = array[row][0];
    for (int i = 0; i < columnsSize; i++)
    {
        if (MinNumber > array[row][i])
        {
            result[1] = i;
            MinNumber = array[row][i];
        }
    }
    return result;
}

int* MaxElemInColumn(int** array, int rowsSize, int column)
{
    static int result[]{ 0,column };
    int MaxNumber = array[0][column];
    for (int i = 0; i < rowsSize; i++)
    {
        if (MaxNumber > array[i][column])
        {
            result[1] = i;
            MaxNumber = array[i][column];
        }
    }
    return result;
}

int* MinElemInColumn(int** array, int rowsSize, int column)
{
    static int result[]{ 0,column };
    int MinNumber = array[0][column];
    for (int i = 0; i < rowsSize; i++)
    {
        if (MinNumber < array[i][column])
        {
            result[1] = i;
            MinNumber = array[i][column];
        }
    }
    return result;
}

int* MaxElemInPrimaryDia(int** array, int rowsSize, int columnsSize)
{
    static int result[2];
    int maxNumber = array[0][0];
    int shortLine = (rowsSize < columnsSize) ? rowsSize : columnsSize;
    for (int i = 0; i < rowsSize; i++)
    {
        if (maxNumber < array[i][i])
        {
            result[1] = i;
            maxNumber = array[i][i];
        }
    }
    return result;
}

int* MinElemInPrimaryDia(int** array, int rowsSize, int columnsSize)
{
    static int result[2];
    int minNumber = array[0][0];
    int shortLine = (rowsSize < columnsSize) ? rowsSize : columnsSize;
    for (int i = 0; i < rowsSize; i++)
    {
        if (minNumber > array[i][i])
        {
            result[1] = i;
            minNumber = array[i][i];
        }
    }
    return result;
}

int* MaxElemInSecondaryDia(int** array, int rowsSize, int columnsSize)
{
    static int result[2];
    int maxNumber = array[0][columnsSize-1];
    int shortLine = (rowsSize < columnsSize) ? rowsSize : columnsSize;
    int longLine = (rowsSize > columnsSize) ? rowsSize : columnsSize;
    int j = 0;
    for (int i = 0; i < shortLine; i++)
    {
        j++;
        if (maxNumber < array[i][columnsSize-j])
        {
            result[0] = i;
            result[1] = columnsSize - j;
            maxNumber = array[i][columnsSize - j];
        }
    }
    return result;
}

int* MinElemInSecondaryDia(int** array, int rowsSize, int columnsSize)
{
    static int result[2];
    int minNumber = array[0][columnsSize - 1];
    int shortLine = (rowsSize < columnsSize) ? rowsSize : columnsSize;
    int longLine = (rowsSize > columnsSize) ? rowsSize : columnsSize;
    int j = 0;
    for (int i = 0; i < shortLine; i++)
    {
        j++;
        if (minNumber > array[i][columnsSize - j])
        {
            result[0] = i;
            result[1] = columnsSize - j;
            minNumber = array[i][columnsSize - j];
        }
    }
    return result;
}

int CounterOfElemInMatrix(int** array, int rowsSize, int columnsSize, bool (*predicate)(int))   // rewrite
{
    int counter = 0;
    for (size_t i = 0; i < rowsSize; i++)
    {
        for (size_t j = 0; j < columnsSize; j++)
        {
            if ((*predicate)(array[i][j]))
                counter++;
        }
    }
    return counter;
}

int CounterOfElemInRow(int** array, int row, int columnsSize, bool (*predicate)(int))   // rewrite
{
    int counter = 0;
        for (size_t j = 0; j < columnsSize; j++)
        {
            if ((*predicate)(array[row][j]))
                counter++;
        }

    return counter;
}

int CounterOfElemInColumn(int** array, int column, int rowsSize, bool (*predicate)(int))   // rewrite
{
    int counter = 0;
    for (size_t j = 0; j < rowsSize; j++)
    {
        if ((*predicate)(array[j][column]))
            counter++;
    }

    return counter;
}

int CounterOfElemInPrimaryDia(int** array, int rowsSize, int columnsSize, bool (*predicate)(int))
{
    int counter = 0;
    int shortLine = (rowsSize < columnsSize) ? rowsSize : columnsSize;
    for (int i = 0; i < shortLine; i++)
    {
        if ((*predicate)(array[i][i]))
            counter++;
    }
    return counter;
}

int CounterOfElemInSecondaryDia(int** array, int rowsSize, int columnsSize, bool (*predicate)(int))
{
    int counter = 0;
    int shortLine = (rowsSize < columnsSize) ? rowsSize : columnsSize;
    int j = 0;
    for (int i = 0; i < shortLine; i++)
    {
        j++;
        if ((*predicate)(array[i][columnsSize - j]))
            counter++;   
    }
    return counter;
}

int CounterOfElemUpperTria(int** array, int rowsSize, int columnsSize, bool (*predicate)(int))
{
    int counter = 0;
    
    for (int i = 0; i < rowsSize; i++)
    {
        for (int j = i; j < columnsSize; j++)
        {
            if ((*predicate)(array[i][j]))
                counter++;
        }
    }
    return counter;
}

int CounterOfElemDownTria(int** array, int rowsSize, int columnsSize, bool (*predicate)(int))
{
    int counter = 0;
    for (int i = rowsSize-1; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            if ((*predicate)(array[i][j]))
                counter++;
        }
    }
    return counter;
}

