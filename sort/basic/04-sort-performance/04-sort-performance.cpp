// 04-sort-performance.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include "stdafx.h"
#include "SortTestHelper.h"
#include "../02-selection-sort-with-template/selectionSort.h"

int main()
{
	int n = 10000;
	int *arr = SortTestHelper::generateRandomArray(n, 0, n);

	SortTestHelper::testSort("selectionSort", selectionSort, arr, n);

	delete[] arr;

	system("pause");
	return 0;
}
