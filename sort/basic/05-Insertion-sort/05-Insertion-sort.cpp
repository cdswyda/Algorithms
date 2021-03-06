// 05-Insertion-sort.cpp: 定义控制台应用程序的入口点。
//

#include <stdio.h>
#include "insertionSort.h"
#include "sorttesthelper.h"
#include "../02-selection-sort-with-template/selectionSort.h"

using namespace std;
int main()
{
	int n = 10000;
	int* arr = SortTestHelper::generateRandomArray(n, 0, n);
	int* arr2 = SortTestHelper::copyIntArray(arr, n);

	//for (int i = 0; i < 20; i++) {
	//	cout << arr[i] << " " << arr2[i] << endl;
	//}

	SortTestHelper::testSort("insertionSort", insertionSort, arr, n);
	SortTestHelper::testSort("selectionSort", selectionSort, arr2, n);
	//for (int i = 0; i < 20; i++) {
	//	cout << arr[i] << " " << arr2[i] << endl;
	//}
	delete[] arr;
	delete[] arr2;
	system("pause");
	return 0;
}

