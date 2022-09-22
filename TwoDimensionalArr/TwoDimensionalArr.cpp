#include "Funk.h"
#include <ctime>

int main()

{
	int rowsSize;
	int columnsSize;
	cin >> rowsSize >> columnsSize;
	int **array = new int*[rowsSize];
	for (int i = 0; i < rowsSize; i++)
		array[i] = new int[columnsSize];
	SetRandValueForInt(array, rowsSize, columnsSize);
	PrintArray(array, rowsSize, columnsSize);
	int* arr = TranformTwoDimInOne(array, rowsSize, columnsSize);
	int** arr2 = TransformOneDinInTwo(arr, rowsSize, columnsSize);
	PrintArray(arr2, rowsSize, columnsSize);



}


