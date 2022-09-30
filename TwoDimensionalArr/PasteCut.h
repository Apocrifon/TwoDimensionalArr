#pragma once
#include <iostream>
using namespace std;

void PasteRow(int** array, int row, int columnsSize, int rowsSize)
{
	for (int i = columnsSize-2; i >= row; i--)
	{
		for (int j = rowsSize-1; j >=0 ; j--)
		{
			array[i+1][j] = array[i][j];
		}
	}	
	for (int i = 0; i < columnsSize; i++)
	{
		int value;
		cout << "Введите " << i << " Элемент строки -> ";
		cin >> value;
		array[row][i] = value;
		cout << endl;
	}
}

void PasteColumn(int** array, int column, int columnsSize, int rowsSize)
{
	for (int i = rowsSize - 1; i >= 0; i--)
	{
		for (int j = columnsSize - 1; j >= column; j--)
		{
			array[i][j+1] = array[i][j];
		}
	}
	for (int i = 0; i < rowsSize; i++)
	{
		int value;
		cout << "Введите " << i << " Элемент столбца -> ";
		cin >> value;
		array[i][column] = value;
		cout << endl;
	}
}

void CutRow(int** array, int row, int columnsSize, int rowsSize)
{
	for (int i = rowsSize-1; i > row; i--)
	{
		for (int j = 0; j < columnsSize; j++)
		{
			array[i - 1][j] = array[i][j];
		}
	}
	for (int i = 0; i < columnsSize; i++)
	{
		array[rowsSize-1][i] = 0;

	}
}

void CutColumn(int** array, int column, int columnsSize, int rowsSize)
{
	for (int i = columnsSize-1; i > column; i--)
	{
		for (int j = rowsSize-1; j >=0; j--)
		{
			array[j][i-1] = array[j][i];
		}
	}
	for (int i = 0; i < columnsSize; i++)
	{
		array[i][columnsSize-1] = 0;

	}
}
