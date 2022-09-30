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
	//cout << endl;
	//int* arr = TranformTwoDimInOne(array, rowsSize, columnsSize);  // #2
	//int** arr2 = TransformOneDinInTwo(arr, rowsSize, columnsSize); // #2
	//PrintArray(arr, rowsSize * columnsSize);  // #2
	//cout << endl;
	//PrintMatrix(arr2, rowsSize, columnsSize); // #2
	//int column;
	//cin >> column;
	//cout << "����� " << column+1 << " ������� = " << SumOfColumn(array, columnsSize, column) << endl; // #3
	//int row;
	//cin >> row;
	//cout << "������������ " << row+1 << " ������ = " << MultOfRow(array, rowsSize, row) << endl;  // #4
	//cout << "����� ������� ��������� = " << SumOfPrimaryDiagonal(array, rowsSize, columnsSize) << endl; // #4
	//cout << "����� �������� ��������� =" << SumOfSecondaryDiagonal(array, rowsSize, columnsSize) << endl; // #4
	//cout << "������������ ������� ��������� = " << MultOfPrimaryDiagonal(array, rowsSize, columnsSize) << endl; // #4
	//cout << "����������� �������� ��������� =" << MultOfSecondaryDiagonal(array, rowsSize, columnsSize) << endl; // #4
	//PrintArray(MaxElemInRows(array, columnsSize, 1), 2);
	//PrintArray(MinElemInSecondaryDia(array, rowsSize, columnsSize), 2);
	//cout << CounterOfElemDownTria(array, rowsSize, columnsSize, IsPossitive); // #5
	int** arr = MultMatrixOnMatrix(array, rowsSize, columnsSize, array, rowsSize, columnsSize);
	PrintMatrix(arr, rowsSize, rowsSize);





	


}


