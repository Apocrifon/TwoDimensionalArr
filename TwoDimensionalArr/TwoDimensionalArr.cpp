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
	//cout << "����� " << column+1 << " ������� = " << SumOfColumn(array, columnsSize, 0) << endl;
	//int row;
	//cin >> row;
	//cout << "������������ " << row+1 << " ������ = " << SumOfRow(array, rowsSize, row) << endl;
	//cout << "����� ������� ��������� = " << SumOfPrimaryDiagonal(array, rowsSize, columnsSize) << endl;
	//cout << "����� �������� ��������� =" << SumOfSecondaryDiagonal(array, rowsSize, columnsSize) << endl;
	//cout << "������������ ������� ��������� = " << MultOfPrimaryDiagonal(array, rowsSize, columnsSize) << endl;
	//cout << "����������� �������� ��������� =" << MultOfSecondaryDiagonal(array, rowsSize, columnsSize) << endl;
	MaxElemInRows(array, columnsSize, 1);




	


}


