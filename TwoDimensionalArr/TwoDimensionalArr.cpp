#include "Funk.h"
#include <ctime>

int main()
{
	setlocale(LC_ALL, "Russian");
	int rowsSize;
	int columnsSize;
	cin >> rowsSize >> columnsSize;
	int **array = new int*[rowsSize];
	for (int i = 0; i < rowsSize; i++)
		array[i] = new int[columnsSize];
	SetRandValueForInt(array, rowsSize, columnsSize);
	PrintArray(array, rowsSize, columnsSize);
	//int* arr = TranformTwoDimInOne(array, rowsSize, columnsSize);
	//int** arr2 = TransformOneDinInTwo(arr, rowsSize, columnsSize);
	//PrintArray(arr2, rowsSize, columnsSize);
	//int column;
	//cin >> column;
	//cout << "Сумма " << column+1 << " столбца = " << SumOfColumn(array, columnsSize, 0) << endl;
	//int row;
	//cin >> row;
	//cout << "Произведение " << row+1 << " строки = " << SumOfRow(array, rowsSize, row) << endl;
	//cout << "Сумма главной диагонали = " << SumOfPrimaryDiagonal(array, rowsSize, columnsSize) << endl;
	//cout << "Сумма побочной диагонали =" << SumOfSecondaryDiagonal(array, rowsSize, columnsSize) << endl;
	//cout << "Произведение главной диагонали = " << MultOfPrimaryDiagonal(array, rowsSize, columnsSize) << endl;
	//cout << "Произвдение побочной диагонали =" << MultOfSecondaryDiagonal(array, rowsSize, columnsSize) << endl;
	MaxElemInRows(array, columnsSize, 1);




	


}


