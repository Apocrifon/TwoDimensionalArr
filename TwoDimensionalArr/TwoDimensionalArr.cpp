#include "Transform.h"
#include "Print.h"
#include "MathOperations.h"
#include "Search.h"
#include "PasteCut.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int rowsSize;
	int columnsSize;
	cin >> rowsSize >> columnsSize;
	int **array = new int*[rowsSize];
	for (int i = 0; i < rowsSize; i++)
		array[i] = new int[columnsSize];
	SetRandValueForInt(array, rowsSize, columnsSize); // #1
	PrintMatrix(array, rowsSize, columnsSize);   // #1
	cout << endl;
	//cout << endl;
	//int* arr = TranformTwoDimInOne(array, rowsSize, columnsSize);  // #2
	//int** arr2 = TransformOneDinInTwo(arr, rowsSize, columnsSize); // #2
	//PrintArray(arr, rowsSize * columnsSize);  // #2
	//cout << endl;
	//PrintMatrix(arr2, rowsSize, columnsSize); // #2
	//int column;
	//cin >> column;
	//cout << "Сумма " << column+1 << " столбца = " << SumOfColumn(array, columnsSize, column) << endl; // #3
	//int row;
	//cin >> row;
	//cout << "Произведение " << row+1 << " строки = " << MultOfRow(array, rowsSize, row) << endl;  // #4
	//cout << "Сумма главной диагонали = " << SumOfPrimaryDiagonal(array, rowsSize, columnsSize) << endl; // #4
	//cout << "Сумма побочной диагонали =" << SumOfSecondaryDiagonal(array, rowsSize, columnsSize) << endl; // #4
	//cout << "Произведение главной диагонали = " << MultOfPrimaryDiagonal(array, rowsSize, columnsSize) << endl; // #4
	//cout << "Произвдение побочной диагонали =" << MultOfSecondaryDiagonal(array, rowsSize, columnsSize) << endl; // #4
	//PrintArray(MaxElemInRows(array, columnsSize, 1), 2);
	//PrintArray(MinElemInSecondaryDia(array, rowsSize, columnsSize), 2);
	//cout << CounterOfElemDownTria(array, rowsSize, columnsSize, IsPossitive); // #5
	//int** arr = MultMatrixOnMatrix(array, rowsSize, columnsSize, array, rowsSize, columnsSize);
	//PrintMatrix(arr, rowsSize, rowsSize);
	int count = 0;
	for (int i = 0; i < columnsSize; i++)
	{
		if (CounterOfElemInColumn(array, i, rowsSize, IsZero) == 0)
			count++;
	}
	cout << count << endl << endl;

	int** array2 = new int* [rowsSize];
	int** info = new int* [rowsSize];
	for (int i = 0; i < rowsSize; i++)
	{
		array2[i] = new int[columnsSize];
		info[i] = new int[2];
	}
	int sum = 0;
	for (int i = 0; i < rowsSize; i++) 
	{
		sum = 0;
		for (int j = 0; j < columnsSize; j++)
		{
			if (IsPossitive(array[i][j]) && IsEven(array[i][j]))
				sum += array[i][j];
		}
		info[i][0] = i;
		info[i][1] = sum;
	}
	for (int i = 0; i < rowsSize-1; i++)   // sort
	{
			for (int j = 0; j < rowsSize - 1; j++)
			{
				if (info[j+1][1] < info[j][1])
				{
					swap(info[j][0], info[j + 1][0]);
					swap(info[j][1], info[j + 1][1]);
				}
			}
	}
	for (int i = 0; i < rowsSize; i++)
	{
		for (int j = 0; j < columnsSize; j++)
		{
			array2[i][j] = array[info[i][0]][j];
		}
	}
	for (int i = 0; i < rowsSize; i++)
	{
		for (int j = 0; j < columnsSize; j++)
		{
			cout << array2[i][j] << "\t";
		}
		cout << endl;
	}



	


}


